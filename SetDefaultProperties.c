
/* public: virtual void __thiscall CPlayerEntity::SetDefaultProperties(void) */

void __thiscall CPlayerEntity::SetDefaultProperties(CPlayerEntity *this)

{
                    /* 0x1b6d90  3438  ?SetDefaultProperties@CPlayerEntity@@UAEXXZ */
  *(undefined4 *)(this + 0x364) = 0;
  CMovableModelEntity::SetDefaultProperties((CMovableModelEntity *)this);
  return;
}

