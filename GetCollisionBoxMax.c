
/* public: class Vector<float,3> __thiscall CModelInstance::GetCollisionBoxMax(long) */

void __thiscall CModelInstance::GetCollisionBoxMax(CModelInstance *this,long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000008;
  
                    /* 0x15c840  1776  ?GetCollisionBoxMax@CModelInstance@@QAE?AV?$Vector@M$02@@J@Z
                        */
  iVar2 = FUN_36035f90((undefined4 *)(this + 0x1c));
  if (in_stack_00000008 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar2 + -1;
    if (in_stack_00000008 <= iVar2 + -1) {
      iVar3 = in_stack_00000008;
    }
  }
  puVar1 = (undefined4 *)(iVar3 * 0x20 + 0xc + *(int *)(this + 0x20));
  *(undefined4 *)param_1 = *puVar1;
  *(undefined4 *)(param_1 + 4) = puVar1[1];
  *(undefined4 *)(param_1 + 8) = puVar1[2];
  return;
}

