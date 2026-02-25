# Basketball Game: EA Sports-Style Prototype - Technical Design Plan

**For UE 5.6 | Solo Developer | Offline-First with Multiplayer Foundation**

## Objective
Create a vertical slice basketball game prototype with EA Sports broadcast presentation, featuring 1 player-controlled character, 4 AI teammates, and 5 AI opponents, emphasizing illusion and responsive feel over full simulation.

---

## Project Context

**Current Assets:**
- Base third-person character system (ABasketBallGameCharacter with EnhancedInput)
- 167 basketball animations (dribbling, shooting, passing, defensive moves, celebrations)
- Robot_A1 skeleton ready for animation
- StateTree + GameplayStateTree modules already integrated
- AIModule enabled in Build.cs

**Target Experience:**
- Smooth, responsive player control (think NBA 2K feel)
- Believable AI teammates/opponents (simplified StateTrees, not full simulation)
- EA-style broadcast cameras and presentation
- Crowd atmosphere through audio + simple visual tricks
- Scalable C++ architecture for future multiplayer

---

## System Breakdown

### 1. **Player Movement & Ball Handling** (C++ Core + Blueprint Tuning)

**What to Build (C++):**
- `UBasketballMovementComponent` (extends CharacterMovementComponent)
  - Custom friction/acceleration curves for basketball feel
  - Sprint/jog speed modulation with stamina (fake stamina, just visual feedback)
  - Pivot foot locking system
  - Exposed UPROPERTY variables for designer tuning
  
- `UBallHandlerComponent` (ActorComponent, replication-ready)
  - Ball attachment socket management
  - Dribble state tracking (idle, moving, crossover, behind-back)
  - Input buffering for combo moves
  - `UPROPERTY(Replicated)` for ball ownership (not implemented, just structured)

**What to Fake:**
- Don't simulate real ball physics during dribbling—attach to hand socket, play anims
- Stamina is visual only (breathing animation triggers, no real depletion)
- Court friction is approximated via movement curves, not true physics

**Animation Strategy:**
- Use **Motion Matching** for locomotion (UE 5.6 native support)
  - Pose Search Database with walk/jog/run/pivot animations
  - Drastically reduces state machine complexity
  - Handles transitions automatically based on trajectory
- Override with montages for specific actions (shooting, passing)

**Blueprint Role:**
- Fine-tune movement curves in BP_PlayerCharacter
- Debug visualization (draw debug spheres for ball trajectory predictions)
- Animation Blueprint connects Motion Matching to movement component

---

### 2. **Shooting & Passing System** (C++ Logic + Data-Driven)

**What to Build (C++):**
- `UBasketballActionComponent` (ActorComponent)
  - Shot timing system (simple button hold → release mechanic)
  - Shot arc calculation (fake ballistic curve, not real projectile)
  - Pass targeting (raycast + aim assist for player, automatic for AI)
  - Make functions `BlueprintCallable` for designers

**Shot Success Calculation:**
```cpp
// Pseudocode approach
float CalculateShotChance(FVector ShotOrigin, FVector HoopLocation, float DefenderDistance, float Timing)
{
    float BaseChance = 0.5f; // Data table driven per shot type
    float TimingBonus = Timing > 0.8f ? 0.2f : -0.1f; // "Green release" illusion
    float DefenseMultiplier = DefenderDistance < 100.0f ? 0.7f : 1.0f;
    return FMath::Clamp(BaseChance + TimingBonus * DefenseMultiplier, 0.0f, 1.0f);
}
```

**What to Fake:**
- Ball "physics" during flight is animated spline, not projectile simulation
- Hoop collision detection is trigger volume, not mesh collision
- Shot timing feedback is visual (color flash on release) + haptics

**Data Tables:**
- `DT_ShotTypes` (Layup, Jumpshot, 3PT, Dunk)
  - Base success rate, animation montage reference, release window size
- `DT_PassTypes` (Chest, Bounce, Overhead)

**Why Data Tables?**
- Designers can balance without C++ recompile
- Easy to add new shot types
- Clean separation of logic and data

---

### 3. **AI Teammates & Opponents** (StateTree + Simplified Logic)

**Core Philosophy:** 
- Don't simulate NBA-level basketball IQ
- Create **illusion** of smart play through positioning + reactions
- Use StateTree (UE 5.6 best practice) instead of Behavior Trees

**What to Build (C++):**
- `ABasketballAICharacter` (extends ABasketBallGameCharacter)
  - `UStateTreeComponent` attached
  - Expose context data (ball location, hoop, teammates, opponents)
  
- `UBasketballAIPerception` (ActorComponent)
  - Simplified perception (sphere checks, not full AI Perception System for performance)
  - Tracks: ball carrier, open teammates, nearest defender
  
**StateTree Structure (Created in Editor):**

**Offensive AI States:**
1. **MoveToPosition** → Data-driven court positions (wings, post, corner)
2. **GetOpen** → Simple "move away from defender" logic
3. **CallForBall** → Raise hand animation if open (visual only, no gameplay impact for prototype)
4. **DriveToHoop** → When AI gets ball, blend to basket with obstacle avoidance
5. **ShootOrPass** → Decision tree: if defender close, pass; if open, shoot

**Defensive AI States:**
1. **GuardAssignment** → Each defender assigned to offensive player (simple array lookup)
2. **StayClose** → Move toward assigned player, maintain distance
3. **Contest** → Play contest animation if opponent shoots
4. **Rebound** → Move to hoop after shot, compete for ball (first to trigger wins)

**What to Fake:**
- AI decision-making uses **weighted random selection** (not machine learning)
- "Basketball IQ" is lookup tables: "If open + good shooter → 70% chance shoot"
- Defensive positioning is offset from offensive player, not real defensive schemes

**StateTree Benefits for Basketball:**
- Hierarchical states (Offense > HasBall > Shoot/Pass)
- Tick-based transitions (check "am I open" every 0.5s, not every frame)
- Visual debugging (see which state each AI is in)
- Better performance than Behavior Trees for 9 AI agents

---

### 4. **Ball Physics & Possession** (Hybrid Real/Fake)

**What to Build (C++):**
- `ABasketball` actor (simple sphere mesh + physics)
  - `UPROPERTY(Replicated)` for owner (ABasketballCharacter*)
  - `UPROPERTY(Replicated)` for state (InHand, InAir, OnGround, InHoop)
  
**Possession Rules:**
- **In Hand:** Attached to character socket, no physics
- **In Air (Pass):** Lerp along spline to target (fake throw, looks good)
- **In Air (Shot):** Projectile motion with animator-defined arc (still fake, but closer to real)
- **On Ground:** Enable physics, sphere trace for pickup (first touch wins)
- **Rebound:** Spawn at hoop with random bounce vector (fake "rebound" feel)

**Why Hybrid?**
- Full ball physics simulation is expensive and unpredictable
- Animated splines for passes = consistent, reliable gameplay
- Physics only when loose ball = realism where it matters

**Multiplayer Note:**
- Server authoritative (only server moves ball actor)
- Clients predict pickup (responsive feel)
- Ownership replication handles "who has ball" sync

---

### 5. **Camera System** (Blueprint-Driven, EA Broadcast Style)

**What to Build:**
- `ABasketballCameraManager` (extends APlayerCameraManager)
  - Multiple camera modes (enum: Gameplay, Replay, Celebration, Foul)
  - Smooth blending between modes (UE5's native camera blend system)

**Camera Modes:**
1. **Gameplay Camera** (Default)
   - Follows player with spring arm
   - Dynamic FOV based on speed (sprint = wider FOV for excitement)
   - Look-ahead prediction (camera aims where player is facing, not directly behind)

2. **Broadcast Camera** (High Angle)
   - Triggered on made shot, steal, dunk
   - 2-second clip of action from fixed high angle
   - Blends back to gameplay camera

3. **Replay Camera** (After Big Plays)
   - Uses Sequencer to play pre-made camera animations
   - "Instant Replay" feel (just replay last 3 seconds with different angle)

**Implementation:**
- Use `UCameraComponent` + `USpringArmComponent` on player
- Blueprint script switches between camera modes based on gameplay events
- **Takara's Sequencer Replay Trick:** Capture last 5 seconds to Sequencer, replay on demand

**What to Fake:**
- "Dynamic" broadcast cameras are actually fixed positions with rotation toward ball
- Replay system is just reversing animation playback + locked camera
- No real multi-camera recording system (too complex for solo dev)

---

### 6. **Crowd & Atmosphere** (Audio + Billboard Tricks)

**Goal:** 
Create **illusion** of 10,000-person crowd without rendering 10,000 meshes

**What to Build:**
- `ABasketballCrowd` actor (scattered around arena)
  - Billboard sprites with crowd texture (Impostor meshes)
  - Simple material with flipbook animation (cheering, sitting, waving)
  - Audio component with crowd ambience loops

**Crowd Reaction System (Blueprint):**
- EventDispatcher on GameMode: `OnBigPlay(EPlayType Type)`
- Crowd actor subscribes, triggers:
  - Volume spike in audio
  - Flipbook switches to "cheering" animation
  - Particle burst (confetti, foam fingers)

**Audio Layers:**
- **Ambient:** Constant murmur (looping SFX)
- **Reactive:** Spikes on events (make basket, turnover)
- **Announcer:** Pre-recorded callouts ("He's heating up!") triggered on streaks

**What to Fake:**
- Billboard sprites, not 3D crowds
- 5-10 crowd "sections" with synced animations (not per-person logic)
- Audio mixing creates density illusion (layered loops at different volumes)

**Performance:**
- Billboard crowds = ~100 triangles each vs 5,000+ for 3D mesh
- Instanced Static Meshes for arena seating (far background)

---

### 7. **UI & HUD** (UMG + Slate for Performance)

**What to Build (UMG for Prototype):**
- `W_GameplayHUD` widget
  - Score display (top center)
  - Shot clock (24 seconds, counts down)
  - Player stamina bar (fake, just visual)
  - Minimap (2D court representation, dots for players)

- `W_ShotMeter` widget
  - Appears when shooting
  - Timing bar with "green zone" (like NBA 2K)
  - Fade out after release

**Why UMG for Prototype:**
- Faster iteration than Slate C++
- Visual designer-friendly
- Good enough for vertical slice

**Future Multiplayer Path:**
- Migrate critical UI to Slate (written in C++)
- Better performance for network updates (score, player names)

**UI Events:**
- GameMode broadcasts events: `OnScoreChanged`, `OnShotClockUpdate`
- Widgets bind to these via Blueprint (loose coupling)

---

## Blueprint vs C++ Breakdown

### **Write in C++ (Reusable, Performance-Critical, Replicated):**
✅ Movement component (BasketballMovementComponent)  
✅ Ball handler component (BallHandlerComponent)  
✅ Action component (BasketballActionComponent)  
✅ AI character base class (BasketballAICharacter)  
✅ Ball actor (ABasketball) with replication hooks  
✅ Game mode (ABasketballGameMode) - rules, spawning, score tracking  
✅ Game state (ABasketballGameState) - replicated score, time  
✅ Player state (ABasketballPlayerState) - replicated stats  

### **Write in Blueprint (Designer Iteration, Visuals, Tuning):**
✅ BP_PlayerCharacter (inherits from C++ base)  
✅ BP_AITeammate / BP_AIOpponent (inherits from C++ AI base)  
✅ Animation Blueprints (Motion Matching setup)  
✅ Camera manager modes (switching logic)  
✅ UI widgets (HUD, menus)  
✅ Crowd actors (visual effects)  
✅ Level scripting (court boundaries, camera volumes)  

**Why This Split?**
- C++ = architecture, networking foundation, performance
- Blueprint = content, polish, rapid iteration
- Designer can tune gameplay without programmer

---

## Recommended Build Order (Milestone-Based)

### **Milestone 1: Core Player Feel (Week 1-2)**
**Goal:** Player can move and dribble ball, feels responsive

- [ ] Create `UBasketballMovementComponent` in C++
- [ ] Setup Motion Matching pose database with walk/run/dribble anims
- [ ] Create `UBallHandlerComponent` (ball attaches to hand)
- [ ] Setup input mapping (EnhancedInput already configured)
- [ ] Tune movement curves until it "feels" right
- [ ] **Success Metric:** Can dribble around court smoothly

**Why First?**
- Player control is foundation of feel
- If movement sucks, game sucks
- Rest of systems depend on this

---

### **Milestone 2: Shooting & Ball Arc (Week 3)**
**Goal:** Player can shoot, ball goes in hoop (or misses)

- [ ] Create `UBasketballActionComponent` in C++
- [ ] Implement shot timing mechanic (hold/release)
- [ ] Create `ABasketball` actor with basic physics
- [ ] Build shot arc calculation (fake ballistic)
- [ ] Setup hoop trigger volume (detects made shot)
- [ ] Create `DT_ShotTypes` data table
- [ ] Add shot success feedback (swish sound, net animation)
- [ ] **Success Metric:** Making/missing shots feels satisfying

---

### **Milestone 3: Basic AI (1 Teammate, 1 Opponent) (Week 4-5)**
**Goal:** Prove AI system works before scaling to 9 agents

- [ ] Create `ABasketballAICharacter` C++ class
- [ ] Add `UStateTreeComponent` to AI character
- [ ] Create `ST_OffensiveAI` StateTree with 3 states: MoveToSpot, GetOpen, Shoot
- [ ] Create `ST_DefensiveAI` StateTree with 2 states: GuardPlayer, ContestShot
- [ ] Spawn 1 teammate, 1 opponent in test level
- [ ] Implement basic pass targeting (AI → Player)
- [ ] **Success Metric:** Can pass to AI teammate, AI shoots when open

**Why Small Scale First?**
- Debug one AI easily
- Iterate on StateTree logic quickly
- Scale to 9 after it works

---

### **Milestone 4: Full 5v5 + Basic Rules (Week 6-7)**
**Goal:** Full game playable, can score points

- [ ] Scale AI to 4 teammates + 5 opponents
- [ ] Create `ABasketballGameMode` (spawn players, track score)
- [ ] Create `ABasketballGameState` (replicated score, timer)
- [ ] Implement possession rules (out of bounds, made basket)
- [ ] Add shot clock countdown (24 seconds)
- [ ] Setup court boundaries (triggers for out of bounds)
- [ ] **Success Metric:** Can play a 2-minute game, score tracked

---

### **Milestone 5: Camera & Presentation (Week 8)**
**Goal:** Looks like a basketball game, not a tech demo

- [ ] Create `ABasketballCameraManager` with mode switching
- [ ] Setup gameplay camera (spring arm + look-ahead)
- [ ] Add broadcast camera triggers (on made shot)
- [ ] Implement simple replay system (Sequencer clip on dunk)
- [ ] **Success Metric:** "Wow" moment when dunking

---

### **Milestone 6: Crowd & Audio (Week 9)**
**Goal:** Feels alive, not empty

- [ ] Create `ABasketballCrowd` blueprint with billboard sprites
- [ ] Add crowd audio layers (ambient, reactive, announcer)
- [ ] Connect crowd reactions to gameplay events
- [ ] Add court announcer callouts (data-driven)
- [ ] **Success Metric:** Crowd roars after 3-pointer

---

### **Milestone 7: UI & Polish (Week 10)**
**Goal:** Playable, presentable prototype

- [ ] Create `W_GameplayHUD` UMG widget (score, clock)
- [ ] Create `W_ShotMeter` timing UI
- [ ] Add pause menu, main menu
- [ ] Implement basic settings (volume, controls)
- [ ] Add post-game screen (final score)
- [ ] **Success Metric:** Can demo to someone who's never played

---

### **Milestone 8: Multiplayer Foundation (Future, Not Prototype)**
**Already Structured For:**
- `UPROPERTY(Replicated)` on ball ownership, score, game state
- `Server/Client` separation in C++ (GameMode server-only)
- Component-based architecture (easy to sync)
- Data-driven logic (tables replicate automatically)

**When Adding Multiplayer:**
- Enable `GetLifetimeReplicatedProps()` functions
- Add RPCs for player actions (shoot, pass)
- Test with "Listen Server" setup (1 player hosts)

---

## What to Fake vs What to Simulate

| System | Simulate | Fake |
|--------|----------|------|
| **Player Movement** | ✅ CharacterMovement physics | ❌ Stamina depletion |
| **Ball Dribbling** | ❌ Ball in hand (attached) | ✅ Dribble bounce is animated |
| **Shooting** | ✅ Shot arc calculation | ❌ Ball "physics" is spline |
| **Passing** | ❌ Pass arc is lerp | ✅ Looks like physics |
| **AI Decision** | ✅ StateTree logic | ❌ Not real basketball IQ |
| **AI Positioning** | ❌ Offset from targets | ✅ Looks like plays |
| **Crowd** | ❌ 3D meshes | ✅ Billboard sprites |
| **Replays** | ❌ No recording system | ✅ Reverse anim + camera |
| **Physics** | ✅ Loose ball only | ❌ No full ball simulation |

**Why This Balance?**
- **Simulate** where it affects gameplay feel (movement, shooting)
- **Fake** where it's just presentation (crowd, replays)
- **Performance:** 9 AI agents + physics = tight budget
- **Scope:** Solo dev, 10-week timeline

---

## Scalability to Multiplayer

**Architecture Choices Supporting Future MP:**

1. **Component-Based Design**
   - Ball handler, movement, actions = separate components
   - Easy to replicate individual components
   - Can debug/test without full character

2. **Server Authority Pattern**
   - GameMode exists on server only (UE5 enforced)
   - GameState/PlayerState replicate to clients
   - Ball ownership tracked on server

3. **Replicated Properties Prepared**
   ```cpp
   UPROPERTY(Replicated)
   ABasketballCharacter* BallOwner;
   
   UPROPERTY(Replicated)
   int32 HomeScore;
   
   // Not implementing replication NOW, just structured for it
   ```

4. **Data-Driven Logic**
   - Data tables replicate automatically
   - Balance changes don't need code push
   - Same data on all clients

5. **Input Prediction-Ready**
   - Movement component uses prediction already (UE5 CharacterMovement)
   - Ball pickup can use predicted input
   - Shot timing is client-side, validated server-side

**When Going Multiplayer (Post-Prototype):**
- Implement `GetLifetimeReplicatedProps()`
- Add RPCs: `Server_ShootBall()`, `Server_PassBall()`
- Test with 2 players (one Listen Server)
- Add lag compensation for shooting (rewinding)

---

## Performance Budgets (Target: 60 FPS on Mid-Range PC)

| System | Budget | Why |
|--------|--------|-----|
| **AI Agents (9)** | ~3ms total | StateTree is performant |
| **Motion Matching** | ~1ms | UE5.6 optimized |
| **Physics (Loose Ball)** | ~0.5ms | Only 1 ball simulating |
| **Crowd Billboards** | ~0.5ms | Instanced, low poly |
| **Audio (Spatial)** | ~1ms | 10 sources max |
| **UI (UMG)** | ~1ms | Minimal widgets |
| **Rendering** | ~10ms | Nanite/Lumen optimized |

**Optimization Tips:**
- StateTree ticks can be throttled (AI updates every 0.5s, not per frame)
- Motion Matching database: use 50-100 anims, not all 167
- Crowd billboards: LOD levels (close = animated, far = static)
- Audio: prioritize nearby sources, cull distant

---

## Common Pitfalls to Avoid

### 1. **Over-Engineering AI**
❌ Don't try to replicate NBA coaching strategies  
✅ Simple rules that look smart 90% of the time

### 2. **Fighting Physics**
❌ Don't use full physics simulation for ball during gameplay  
✅ Use physics only when necessary (loose ball)

### 3. **Animation Complexity**
❌ Don't build giant state machine with 100 transitions  
✅ Use Motion Matching for locomotion, montages for actions

### 4. **Premature Multiplayer**
❌ Don't implement networking before core gameplay works  
✅ Structure for it, implement later

### 5. **Scope Creep**
❌ Don't add halftime shows, custom jerseys, season mode  
✅ Vertical slice: 2-minute gameplay loop that feels amazing

---

## Key Decisions Made

| Decision | Rationale |
|----------|-----------|
| **StateTree over BehaviorTree** | Better performance, UE 5.6 recommended |
| **Motion Matching for Locomotion** | Reduces animation complexity, UE 5.6 native |
| **Hybrid Ball Physics** | Gameplay feel > realism |
| **Component Architecture** | Multiplayer-ready, modular |
| **Data Tables for Balance** | Designer iteration without C++ |
| **Billboard Crowds** | Performance > visual fidelity |
| **UMG for Prototype UI** | Speed > performance (for now) |

---

## Success Criteria (Vertical Slice)

**Playable Demo Should Include:**
- ✅ 2-minute game (shot clock enforced)
- ✅ Player can dribble, shoot, pass smoothly
- ✅ AI teammates/opponents play believably
- ✅ Score tracked, displayed on HUD
- ✅ Camera switches on big plays
- ✅ Crowd reacts to game events
- ✅ Court audio atmosphere

**"EA Sports Feel" Checklist:**
- ✅ Smooth player movement (Motion Matching)
- ✅ Responsive shooting (timing feedback)
- ✅ Broadcast camera moments
- ✅ Crowd energy (audio + visuals)
- ✅ Presentation polish (UI, replays)

---

## Next Steps

1. **Review This Plan:** Discuss any concerns, scope questions
2. **Setup Project Structure:** Create C++ classes, folder organization
3. **Start Milestone 1:** Player movement + ball handling
4. **Iterate Weekly:** Playtest each milestone before moving forward

**Remember:** You're building a vertical slice, not a full game. Every feature should contribute to the "EA Sports presentation" goal. Cut ruthlessly if something doesn't serve that vision.

---

## Additional Resources

**UE 5.6 Specific:**
- Motion Matching: Use Game Animation Sample Project as reference
- StateTree: "Your First 60 Minutes with StateTree" tutorial
- Replication: Structure components with `UPROPERTY(Replicated)` now, implement later

**Basketball Game Dev:**
- NBA 2K GDC talks (search YouTube for "NBA 2K GDC")
- FIFA's presentation approach (camera, crowd, audio)
- Study how sports games "cheat" realism for fun

---

**End of Plan**

*This plan is sized for a solo developer working 10 weeks, focusing on illusion over simulation. Adjust timeline based on your hours/week. Prioritize feel over features.*