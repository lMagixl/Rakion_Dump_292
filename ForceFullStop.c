
/* public: void __thiscall CMovableEntity::ForceFullStop(void) */

void __thiscall CMovableEntity::ForceFullStop(CMovableEntity *this)

{
                    /* 0x1ae030  1662  ?ForceFullStop@CMovableEntity@@QAEXXZ */
  ForceStopTranslation(this);
  ForceStopRotation(this);
  return;
}

