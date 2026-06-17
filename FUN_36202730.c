
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36202730(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_14;
  
  local_14 = 0;
  if (0 < param_2[1]) {
    do {
      local_1c = 0;
      if (0 < *param_2) {
        do {
          iVar1 = ftol();
          iVar2 = ftol();
          iVar3 = ftol();
          iVar4 = ftol();
          iVar4 = iVar4 + iVar1 + iVar2 + iVar3;
          iVar1 = ftol();
          iVar2 = ftol();
          iVar3 = ftol();
          iVar5 = ftol();
          iVar5 = iVar5 + iVar1 + iVar2 + iVar3;
          iVar1 = ftol();
          iVar2 = ftol();
          iVar3 = ftol();
          iVar6 = ftol();
          iVar6 = iVar6 + iVar1 + iVar2 + iVar3;
          iVar1 = FUN_36202ab0();
          iVar2 = FUN_36202ab0();
          iVar3 = FUN_36202ab0();
          iVar7 = ftol();
          iVar7 = iVar7 + iVar1 + iVar2 + iVar3;
          iVar1 = FUN_36202f50(param_2,local_1c,local_14);
          *(float *)(*(int *)param_2[3] + iVar1 * 4) =
               (float)((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) * _DAT_3624cf78;
          *(float *)(*(int *)param_2[4] + iVar1 * 4) =
               (float)((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) * _DAT_3624cf78;
          local_1c = local_1c + 1;
          *(float *)(*(int *)param_2[5] + iVar1 * 4) =
               (float)((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) * _DAT_3624cf78;
          *(float *)(*(int *)param_2[6] + iVar1 * 4) =
               (float)((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2) * _DAT_3624cf78;
        } while (local_1c < *param_2);
      }
      local_14 = local_14 + 1;
    } while (local_14 < param_2[1]);
  }
  return;
}

