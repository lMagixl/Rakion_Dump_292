
void __cdecl FUN_36178740(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_1c;
  void *local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621a875;
  local_c = ExceptionList;
  iVar4 = *(int *)(param_1 + 0x50);
  iVar7 = 0;
  iVar3 = *(int *)(param_1 + 0x4c);
  local_1c = 0;
  local_18 = (void *)0x0;
  iVar8 = 0;
  local_10 = 0x10;
  local_4 = 0;
  ExceptionList = &local_c;
  while( true ) {
    iVar8 = iVar8 + 1;
    local_14 = iVar8;
    iVar2 = FUN_361743a0(&local_1c);
    if (iVar2 < iVar8) {
      iVar8 = FUN_361743a0(&local_1c);
      FUN_36179440(&local_1c,iVar8 + local_10);
      iVar8 = local_14;
    }
    piVar1 = (int *)(iVar8 * 0x10 + -0x10 + (int)local_18);
    iVar2 = iVar4 * iVar3;
    *piVar1 = iVar7;
    iVar7 = iVar7 + iVar2;
    piVar1[2] = iVar3;
    piVar1[3] = iVar4;
    piVar1[1] = iVar2;
    if (iVar2 == 1) break;
    iVar3 = iVar3 / 2;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    iVar4 = iVar4 / 2;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
  }
  iVar4 = FUN_36179300((int)&local_1c);
  if (iVar4 != 0) {
    *(int *)(param_1 + 0xf8) = iVar4;
    uVar5 = thunk_FUN_361bf99c((iVar4 + 1) * 0x10);
    *(undefined4 *)(param_1 + 0xfc) = uVar5;
    if (0 < iVar4) {
      iVar3 = 0;
      do {
        puVar6 = (undefined4 *)((int)local_18 + iVar3);
        puVar9 = (undefined4 *)(*(int *)(param_1 + 0xfc) + iVar3);
        *puVar9 = *puVar6;
        puVar9[1] = puVar6[1];
        puVar9[2] = puVar6[2];
        iVar3 = iVar3 + 0x10;
        iVar4 = iVar4 + -1;
        puVar9[3] = puVar6[3];
      } while (iVar4 != 0);
    }
  }
  if (local_1c != 0) {
    operator_delete__(local_18);
  }
  ExceptionList = local_c;
  return;
}

