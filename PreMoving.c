
/* public: virtual void __thiscall CMovableModelEntity::PreMoving(void) */

void __thiscall CMovableModelEntity::PreMoving(CMovableModelEntity *this)

{
                    /* 0x1b4ab0  2794  ?PreMoving@CMovableModelEntity@@UAEXXZ */
  if (*(int *)(this + 0x35c) != *(int *)(this + 0x360)) {
    ChangeCollisionBoxIndexNow(this,*(int *)(this + 0x360));
  }
  CMovableEntity::PreMoving((CMovableEntity *)this);
  return;
}

