
/* public: void __thiscall CModelInstance::NewClearState(float) */

void __thiscall CModelInstance::NewClearState(CModelInstance *this,float param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  CModelInstance *this_00;
  
                    /* 0x15ed40  2669  ?NewClearState@CModelInstance@@QAEXM@Z */
  RemovePassedAnimsFromQueue(this);
  iVar3 = *(int *)(this + 0xc4);
  this_00 = this + 0xbc;
  *(int *)(this + 0xc4) = iVar3 + 1;
  iVar2 = FUN_36036060((undefined4 *)this_00);
  if (iVar2 < iVar3 + 1) {
    iVar3 = FUN_36036060((undefined4 *)this_00);
    FUN_36036b40(this_00,iVar3 + *(int *)(this + 200));
  }
  puVar1 = (undefined4 *)(*(int *)(this + 0xc0) + -0x18 + *(int *)(this + 0xc4) * 0x18);
  puVar1[5] = 1;
  puVar1[1] = param_1;
  *puVar1 = *(undefined4 *)(_pTimer + 0xc);
  puVar1[4] = 0;
  return;
}

