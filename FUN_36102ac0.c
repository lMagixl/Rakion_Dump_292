
void __fastcall FUN_36102ac0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  local_4 = 0;
  if (0 < *param_1) {
    do {
      if (0 < param_1[1]) {
        iVar3 = param_1[1] * local_4 * 8;
        iVar2 = 0;
        do {
          if (*(int *)(param_1[4] + 4 + iVar3) != 0) {
            pvVar1 = *(void **)(param_1[4] + 4 + iVar3);
            if (pvVar1 != (void *)0x0) {
              operator_delete(pvVar1);
            }
            *(undefined4 *)(param_1[4] + 4 + iVar3) = 0;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 8;
        } while (iVar2 < param_1[1]);
      }
      local_4 = local_4 + 1;
    } while (local_4 < *param_1);
  }
  return;
}

