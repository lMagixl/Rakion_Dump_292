
void __fastcall FUN_36143340(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = FUN_36143930(param_1 + 0xec);
  iVar7 = 0;
  if (*(int *)(param_1 + 0x110) != 0) {
    operator_delete__(*(void **)(param_1 + 0x114));
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x110) = iVar2;
    uVar3 = thunk_FUN_361bf99c(iVar2 * 4 + 4);
    *(undefined4 *)(param_1 + 0x114) = uVar3;
    if (0 < iVar2) {
      do {
        piVar4 = (int *)FUN_36143af0((void *)(param_1 + 0xec),iVar7);
        iVar1 = *piVar4;
        iVar6 = 0;
        iVar5 = FUN_360cb7c0(param_1 + 0x100);
        if (0 < iVar5) {
          piVar4 = *(int **)(param_1 + 0x104);
          do {
            if (*piVar4 == iVar1) {
              *(int *)(*(int *)(param_1 + 0x114) + iVar7 * 4) = iVar6;
              break;
            }
            iVar6 = iVar6 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar6 < iVar5);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
  }
  return;
}

