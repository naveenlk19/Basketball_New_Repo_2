# Milestone 1 Setup Instructions: Basketball Pickup System

**Status:** Code compiled, now needs Blueprint configuration

---

## What We Just Created

### C++ Classes:
1. **ABasketball** (`Basketball.h/.cpp`)
   - Physics-based basketball actor
   - Can attach to character socket
   - Pickup detection sphere

2. **UBallHandlerComponent** (`BallHandlerComponent.h/.cpp`)
   - Manages ball possession
   - `TryPickupBall()` - finds and picks up nearby ball
   - `DropBall()` - releases ball with physics

3. **ABasketBallGameCharacter** (modified)
   - Added `BallHandler` component
   - Added `PickupBallAction` input
   - E key bound to pickup/drop ball

### Input Actions:
- **IA_PickupBall** created at `/Game/Input/Actions/IA_PickupBall`
- Bound to **E key** in IMC_Default

---

## Step-by-Step Setup

### Step 1: Add Hand Socket to Skeleton

**Why?** The ball needs a socket on the character's hand to attach to.

1. Open Content Browser
2. Navigate to `/Game/Characters/Mannequins/Meshes/`
3. Open `SKM_Quinn_Simple` (or your character's skeleton)
4. In Skeleton Tree, find the **right hand bone** (usually `hand_r` or `RightHand`)
5. Right-click the bone → **Add Socket**
6. Name it: **`hand_r`** (must match exactly)
7. Adjust socket transform if needed:
   - Location: `(0, 0, 0)` relative to hand bone
   - Rotation: May need adjustment based on your skeleton
8. **Save** the skeleton asset

**Preview:** You should see a small coordinate axis gizmo on the hand bone.

---

### Step 2: Create BP_Basketball Blueprint

**Why?** We need a Blueprint based on the C++ ABasketball class to assign a visual mesh.

1. In Content Browser, navigate to `/Game/` (or create `/Game/Basketball/` folder)
2. Right-click → **Blueprint Class**
3. Expand **All Classes** section
4. Search for: **Basketball**
5. Select **Basketball** (the C++ class we created)
6. Name it: **`BP_Basketball`**
7. Open BP_Basketball

**Configure the Blueprint:**

8. Select **BallMesh** component in Components panel
9. In Details panel:
   - **Static Mesh:** Set to `StaticMesh'/Engine/BasicShapes/Sphere.Sphere'` (temp placeholder)
   - **Scale:** Set to `(0.25, 0.25, 0.25)` (basketball size, ~25cm diameter)
   - **Material:** Optional - create orange basketball material later

10. Select **PickupRadius** component
    - Verify **Sphere Radius:** 150.0 (1.5 meters pickup range)

11. **Compile** and **Save**

**Note:** For prototype, the default sphere is fine. Replace with actual basketball mesh later.

---

### Step 3: Configure BP_ThirdPersonCharacter

**Why?** Assign the new Input Action to the character Blueprint.

1. Navigate to `/Game/ThirdPerson/Blueprints/`
2. Open **BP_ThirdPersonCharacter**
3. In **Class Defaults** (toolbar button):
   - Find **Input** section
   - Set **Pickup Ball Action** to: `/Game/Input/Actions/IA_PickupBall`

4. **Compile** and **Save**

**Verify BallHandler Component:**
- In Components panel, you should see **BallHandler** component (added via C++)
- Select it, verify:
  - **Ball Socket Name:** `hand_r`
  - **Pickup Range:** 200.0

---

### Step 4: Test in Level

**Simple Test Procedure:**

1. Open your test level (e.g., `/Game/ThirdPerson/Lvl_ThirdPerson`)

2. **Spawn a Basketball:**
   - Drag **BP_Basketball** into the level
   - Place it near the Player Start
   - Position: Slightly above ground (Z = 100) so it falls naturally

3. **Play in Editor (PIE):**
   - Press **Play**
   - Walk toward the basketball
   - Press **E key** when close (within 2 meters)

**Expected Behavior:**
- ✅ Ball attaches to character's right hand
- ✅ Ball physics disables (no longer falls)
- ✅ Ball moves with character
- ✅ Pressing E again drops the ball
- ✅ Ball physics re-enables (bounces on ground)

---

## Troubleshooting

### Problem: "Ball doesn't attach when pressing E"

**Check:**
1. Socket name is exactly `hand_r` (case-sensitive)
2. BP_Basketball is spawned in level
3. Player is within 2 meters of ball
4. Input action is assigned in BP_ThirdPersonCharacter
5. Console shows no errors (press ` key)

**Debug:**
- Add breakpoint in `UBallHandlerComponent::TryPickupBall()`
- Or add print statement: `UE_LOG(LogTemp, Warning, TEXT("Trying to pickup ball"));`

### Problem: "Ball attaches but in wrong position"

**Fix:**
1. Open skeleton asset
2. Select `hand_r` socket
3. Adjust socket **Location** and **Rotation**
4. Preview in Skeleton Editor (add preview mesh)
5. Iteratively adjust until ball is in palm

**Typical Values:**
- Location: `(10, 0, -5)` (10cm forward from hand center)
- Rotation: `(0, 0, 0)` or slight angle

### Problem: "Compilation errors"

**Common Issues:**
- Missing `#include "BallHandlerComponent.h"` in Character.cpp
- Socket name mismatch ("hand_r" vs "Hand_R")
- Input action not set in Blueprint

**Fix:**
- Check Output Log in Unreal Editor
- Verify all C++ files saved
- Close editor, rebuild in Visual Studio, reopen

---

## Next Steps (Future Milestones)

**Once Milestone 1 Works:**

### Quick Wins (Polish Current System):
- Replace sphere mesh with actual basketball model
- Add pickup audio ("thump" sound)
- Add drop audio (ball hitting ground)
- Visual feedback (glow outline when ball in range)

### Milestone 2 Preview (Shooting System):
- Add hoop actor to level
- Implement shot timing mechanic
- Create shot arc calculation
- Add score tracking

**But first:** Make sure pickup/drop works smoothly!

---

## Testing Checklist

- [ ] Compile successful (no errors in Output Log)
- [ ] `hand_r` socket added to skeleton
- [ ] BP_Basketball created with sphere mesh
- [ ] BP_ThirdPersonCharacter has PickupBallAction assigned
- [ ] Ball spawned in level near Player Start
- [ ] Walk to ball, press E → ball attaches to hand
- [ ] Press E again → ball drops with physics
- [ ] Ball can be picked up multiple times

---

## What You Learned (Prototype Architecture)

### Component-Based Design:
- `UBallHandlerComponent` is reusable (can add to AI later)
- Separation of concerns (ball logic in ABasketball, possession in component)

### Input System:
- EnhancedInput actions are data-driven
- Easy to rebind keys without C++ changes

### Physics Toggle:
- Ball physics on/off based on state (held vs loose)
- Attachment system for held objects

### Multiplayer Foundation:
- Already structured for replication (we'll add `UPROPERTY(Replicated)` later)
- Server-authoritative ball ownership pattern

---

**Estimated Time to Complete Setup:** 15-20 minutes

**Once working, you have:** Core ball handling system for basketball game!

---

## Support

If stuck, ask Aura:
- "Show me the socket setup again"
- "Debug why ball won't attach"
- "How do I add a basketball mesh?"

Good luck! 🏀
