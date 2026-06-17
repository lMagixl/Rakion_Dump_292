
/* public: void __thiscall CModelInstance::NewClonedState(float) */

void __thiscall CModelInstance::NewClonedState(CModelInstance *this,float param_1)

{
  CModelInstance *this_00;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x15f060  2671  ?NewClonedState@CModelInstance@@QAEXM@Z */
  RemovePassedAnimsFromQueue(this);
  this_00 = this + 0xbc;
  iVar2 = FUN_36035f40((int)this_00);
  if (iVar2 == 0) {
    NewClearState(this,param_1);
    iVar2 = 1;
  }
  iVar4 = *(int *)(this + 0xc4);
  *(int *)(this + 0xc4) = iVar4 + 1;
  iVar3 = FUN_36036060((undefined4 *)this_00);
  if (iVar3 < iVar4 + 1) {
    iVar4 = FUN_36036060((undefined4 *)this_00);
    FUN_36036b40(this_00,iVar4 + *(int *)(this + 200));
  }
  puVar1 = (undefined4 *)(*(int *)(this + 0xc0) + -0x18 + *(int *)(this + 0xc4) * 0x18);
  puVar1[5] = 1;
  FUN_36036a90(puVar1 + 2,(undefined4 *)(*(int *)(this + 0xc0) + -0x10 + iVar2 * 0x18));
  puVar1[1] = param_1;
  *puVar1 = *(undefined4 *)(_pTimer + 0xc);
  return;
}

