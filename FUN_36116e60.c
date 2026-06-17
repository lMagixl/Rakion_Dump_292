
void __fastcall FUN_36116e60(int param_1)

{
  int *piVar1;
  void *this;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_8;
  
  piVar1 = (int *)(param_1 + 0x20);
  *piVar1 = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x24) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x28) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  this = (void *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  local_8 = 0;
  iVar3 = FUN_3611f700((int)this);
  if (0 < iVar3) {
    do {
      iVar4 = FUN_3611f3b0(this,local_8);
      iVar3 = *(int *)(iVar4 + 0x114);
      iVar6 = *(int *)(iVar4 + 0x118);
      iVar5 = *piVar1;
      if (iVar3 < *piVar1) {
        iVar5 = iVar3;
      }
      *piVar1 = iVar5;
      if (iVar3 <= *(int *)(param_1 + 0x28)) {
        iVar3 = *(int *)(param_1 + 0x28);
      }
      *(int *)(param_1 + 0x28) = iVar3;
      iVar3 = *(int *)(param_1 + 0x24);
      if (iVar6 < *(int *)(param_1 + 0x24)) {
        iVar3 = iVar6;
      }
      *(int *)(param_1 + 0x24) = iVar3;
      if (iVar6 <= *(int *)(param_1 + 0x2c)) {
        iVar6 = *(int *)(param_1 + 0x2c);
      }
      *(int *)(param_1 + 0x2c) = iVar6;
      iVar3 = *(int *)(iVar4 + 0x11c);
      iVar6 = *(int *)(iVar4 + 0x120);
      iVar5 = *piVar1;
      if (iVar3 < *piVar1) {
        iVar5 = iVar3;
      }
      *piVar1 = iVar5;
      if (iVar3 <= *(int *)(param_1 + 0x28)) {
        iVar3 = *(int *)(param_1 + 0x28);
      }
      *(int *)(param_1 + 0x28) = iVar3;
      iVar3 = *(int *)(param_1 + 0x24);
      if (iVar6 < *(int *)(param_1 + 0x24)) {
        iVar3 = iVar6;
      }
      *(int *)(param_1 + 0x24) = iVar3;
      iVar3 = *(int *)(param_1 + 0x2c);
      if (*(int *)(param_1 + 0x2c) < iVar6) {
        iVar3 = iVar6;
      }
      *(int *)(param_1 + 0x2c) = iVar3;
      *(float *)(param_1 + 0x30) = (float)*(int *)(iVar4 + 0x124) + *(float *)(param_1 + 0x30);
      fVar2 = (float)*(int *)(iVar4 + 0x124);
      if ((float)*(int *)(iVar4 + 0x124) <= *(float *)(param_1 + 0x34)) {
        fVar2 = *(float *)(param_1 + 0x34);
      }
      *(float *)(param_1 + 0x34) = fVar2;
      local_8 = local_8 + 1;
      iVar3 = FUN_3611f700((int)this);
    } while (local_8 < iVar3);
  }
  return;
}

