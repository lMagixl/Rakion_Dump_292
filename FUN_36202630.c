
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36202630(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_4;
  
  piVar1 = param_2;
  local_4 = (int *)0x0;
  if (0 < param_2[1]) {
    do {
      iVar2 = *piVar1;
      iVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = iVar2 * (int)local_4 + iVar5;
          iVar4 = iVar5;
          if (iVar5 < 0) {
            iVar4 = 0;
          }
          param_2 = local_4;
          if ((int)local_4 < 0) {
            param_2 = (int *)0x0;
          }
          if (iVar2 <= iVar4) {
            iVar4 = iVar2 + -1;
          }
          if (piVar1[1] <= (int)param_2) {
            param_2 = (int *)(piVar1[1] + -1);
          }
          iVar4 = iVar2 * (int)param_2 + iVar4;
          *(float *)(*(int *)piVar1[3] + iVar4 * 4) =
               (float)*(byte *)(param_1 + iVar3 * 4) * _DAT_3624cf78;
          *(float *)(*(int *)piVar1[4] + iVar4 * 4) =
               (float)*(byte *)(param_1 + 1 + iVar3 * 4) * _DAT_3624cf78;
          *(float *)(*(int *)piVar1[5] + iVar4 * 4) =
               (float)*(byte *)(param_1 + 2 + iVar3 * 4) * _DAT_3624cf78;
          iVar5 = iVar5 + 1;
          *(float *)(*(int *)piVar1[6] + iVar4 * 4) =
               (float)*(byte *)(param_1 + 3 + iVar3 * 4) * _DAT_3624cf78;
          iVar2 = *piVar1;
        } while (iVar5 < iVar2);
      }
      local_4 = (int *)((int)local_4 + 1);
    } while ((int)local_4 < piVar1[1]);
  }
  return;
}

