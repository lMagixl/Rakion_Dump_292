
/* public: virtual void __thiscall CMovableEntity::AddAP(float) */

void __thiscall CMovableEntity::AddAP(CMovableEntity *this,float param_1)

{
  int iVar1;
  float10 fVar2;
  
                    /* 0x1aa8b0  945  ?AddAP@CMovableEntity@@UAEXM@Z */
  iVar1 = *(int *)this;
  fVar2 = (float10)(**(code **)(iVar1 + 0x170))();
  (**(code **)(iVar1 + 0x16c))((float)(fVar2 + (float10)param_1));
  return;
}

