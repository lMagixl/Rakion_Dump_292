
/* public: virtual void __thiscall CMovableEntity::AddHP(float) */

void __thiscall CMovableEntity::AddHP(CMovableEntity *this,float param_1)

{
  int iVar1;
  float10 fVar2;
  
                    /* 0x1aa840  982  ?AddHP@CMovableEntity@@UAEXM@Z */
  iVar1 = *(int *)this;
  fVar2 = (float10)(**(code **)(iVar1 + 0x158))();
  (**(code **)(iVar1 + 0x15c))((float)(fVar2 + (float10)param_1));
  return;
}

