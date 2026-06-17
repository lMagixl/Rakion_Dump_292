
/* public: class Vector<float,3> __thiscall CModelInstance::GetCollisionBoxMin(long) */

void __thiscall CModelInstance::GetCollisionBoxMin(CModelInstance *this,long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_stack_00000008;
  
                    /* 0x15c7f0  1780  ?GetCollisionBoxMin@CModelInstance@@QAE?AV?$Vector@M$02@@J@Z
                        */
  iVar1 = FUN_36035f90((undefined4 *)(this + 0x1c));
  if (in_stack_00000008 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 + -1;
    if (in_stack_00000008 <= iVar1 + -1) {
      iVar2 = in_stack_00000008;
    }
  }
  puVar3 = (undefined4 *)(iVar2 * 0x20 + *(int *)(this + 0x20));
  *(undefined4 *)param_1 = *puVar3;
  *(undefined4 *)(param_1 + 4) = puVar3[1];
  *(undefined4 *)(param_1 + 8) = puVar3[2];
  return;
}

