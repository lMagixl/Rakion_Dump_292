
void __fastcall FUN_360d0c30(void *param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_36214b46;
  local_c = ExceptionList;
  fVar1 = *(float *)(*(int *)(*(int *)((int)param_1 + 0xf0) + 4) + 0xc);
  piVar2 = *(int **)((int)param_1 + 0xec);
  local_1c = 0;
  uStack_3 = 0;
  ExceptionList = &local_c;
  if (0 < *piVar2) {
    do {
      fVar6 = (float)(local_1c * 0x40 + piVar2[1]);
      piVar3 = *(int **)((int)param_1 + 0xf0);
      iVar5 = 0;
      local_4 = 1;
      if (0 < *piVar3) {
        do {
          pfVar4 = (float *)(iVar5 * 0x40 + piVar3[1]);
          if (-1 < (int)((uint)((fVar1 + *(float *)(iVar5 * 0x40 + piVar3[1])) -
                               *(float *)((int)fVar6 + 0x28)) |
                         (uint)(*(float *)((int)fVar6 + 0x34) - (*pfVar4 - fVar1)) |
                         (uint)((fVar1 + pfVar4[1]) - *(float *)((int)fVar6 + 0x2c)) |
                         (uint)(*(float *)((int)fVar6 + 0x38) - (pfVar4[1] - fVar1)) |
                         (uint)((fVar1 + pfVar4[2]) - *(float *)((int)fVar6 + 0x30)) |
                        (uint)(*(float *)((int)fVar6 + 0x3c) - (pfVar4[2] - fVar1)))) {
            FUN_360cee20(param_1,fVar6,pfVar4);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *piVar3);
      }
      local_1c = local_1c + 1;
    } while (local_1c < *piVar2);
  }
  ExceptionList = local_c;
  return;
}

