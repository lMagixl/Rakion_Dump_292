
void __fastcall FUN_360ef0a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36216228;
  local_c = ExceptionList;
  iVar6 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_360efb90(&local_14,param_1 + 3);
  iVar2 = param_1[1];
  param_1[1] = param_1[2] + iVar2;
  FUN_360efae0(param_1 + 3,*param_1 * (param_1[2] + iVar2));
  if (0 < *param_1) {
    piVar3 = (int *)((int)local_10 + 4);
    do {
      iVar5 = 0;
      piVar4 = piVar3;
      if (0 < iVar2) {
        do {
          piVar1 = (int *)(param_1[4] + (param_1[1] * iVar6 + iVar5) * 8);
          if (*piVar4 != 0) {
            piVar1[1] = *piVar4;
            *piVar1 = piVar4[-1];
          }
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar5 < iVar2);
      }
      piVar3 = piVar3 + iVar2 * 2;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *param_1);
  }
  if (local_14 != 0) {
    operator_delete__(local_10);
  }
  ExceptionList = local_c;
  return;
}

