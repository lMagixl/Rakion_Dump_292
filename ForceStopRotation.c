
/* public: void __thiscall CMovableEntity::ForceStopRotation(void) */

void __thiscall CMovableEntity::ForceStopRotation(CMovableEntity *this)

{
                    /* 0x1ac390  1663  ?ForceStopRotation@CMovableEntity@@QAEXXZ */
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  FUN_3604f120(this + 0x328,0x3f800000);
  return;
}

