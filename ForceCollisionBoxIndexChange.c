
/* public: void __thiscall CMovableModelEntity::ForceCollisionBoxIndexChange(long) */

void __thiscall
CMovableModelEntity::ForceCollisionBoxIndexChange(CMovableModelEntity *this,long param_1)

{
                    /* 0x1b4840  1661  ?ForceCollisionBoxIndexChange@CMovableModelEntity@@QAEXJ@Z */
  if (((*(int *)(this + 4) == 9) || (*(int *)(this + 4) == 10)) &&
     (*(CModelInstance **)(this + 0x7c) != (CModelInstance *)0x0)) {
    CModelInstance::SetCurrentColisionBoxIndex(*(CModelInstance **)(this + 0x7c),param_1);
  }
  *(long *)(this + 0x35c) = param_1;
  *(long *)(this + 0x360) = param_1;
  CEntity::ModelChangeNotify((CEntity *)this);
  return;
}

