
void __cdecl FUN_361789e0(int param_1)

{
  int *piVar1;
  int iVar2;
  void **ppvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_34;
  int local_30;
  int local_2c;
  int local_24;
  int local_1c;
  void *local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  puStack_8 = &LAB_3621a887;
  local_c = ExceptionList;
  iVar7 = 0;
  iVar6 = 0;
  local_1c = 0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0x10;
  iVar5 = *(int *)(*(int *)(param_1 + 0xfc) + 4);
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (0 < iVar5) {
    do {
      ExceptionList = ppvVar3;
      iVar6 = iVar6 + 1;
      local_14 = iVar6;
      iVar4 = FUN_36179430(&local_1c);
      if (iVar4 < iVar6) {
        iVar6 = FUN_36179430(&local_1c);
        FUN_361799b0(&local_1c,iVar6 + local_10);
        iVar6 = local_14;
      }
      iVar4 = iVar6 * 0x2c;
      *(int *)((int)local_18 + iVar4 + -0x14) = iVar7;
      iVar7 = iVar7 + 1;
      *(undefined4 *)((int)local_18 + iVar4 + -0x10) = 0xffffffff;
      *(undefined4 *)((int)local_18 + iVar4 + -0xc) = 0xffffffff;
      *(undefined4 *)((int)local_18 + iVar4 + -8) = 0xffffffff;
      *(undefined4 *)((int)local_18 + iVar4 + -4) = 0xffffffff;
      ppvVar3 = ExceptionList;
    } while (iVar7 < iVar5);
  }
  local_24 = FUN_361743a0((undefined4 *)(param_1 + 0xf8));
  if (1 < local_24) {
    local_24 = local_24 + -1;
    local_2c = 0x10;
    do {
      iVar5 = *(int *)(local_2c + -8 + *(int *)(param_1 + 0xfc));
      piVar1 = (int *)(local_2c + -0x10 + *(int *)(param_1 + 0xfc));
      iVar6 = piVar1[3];
      local_34 = 0;
      if (0 < iVar6) {
        local_30 = 0;
        do {
          iVar7 = 0;
          if (0 < iVar5) {
            do {
              iVar8 = *piVar1 + local_30 + iVar7;
              local_14 = local_14 + 1;
              iVar4 = FUN_36179430(&local_1c);
              if (iVar4 < local_14) {
                iVar4 = FUN_36179430(&local_1c);
                FUN_361799b0(&local_1c,iVar4 + local_10);
              }
              iVar4 = local_14 * 0x2c;
              *(undefined4 *)((int)local_18 + iVar4 + -0x14) = 0xffffffff;
              *(undefined4 *)((int)local_18 + iVar4 + -0xc) = 0xffffffff;
              *(undefined4 *)((int)local_18 + iVar4 + -8) = 0xffffffff;
              *(undefined4 *)((int)local_18 + iVar4 + -4) = 0xffffffff;
              *(int *)((int)local_18 + iVar4 + -0x10) = iVar8;
              if (iVar7 + 1 < iVar5) {
                *(int *)((int)local_18 + iVar4 + -0xc) = iVar8 + 1;
              }
              if ((local_34 + 1 < iVar6) &&
                 (*(int *)((int)local_18 + iVar4 + -8) = iVar8 + iVar5, iVar7 + 1 < iVar5)) {
                *(int *)((int)local_18 + iVar4 + -4) = iVar8 + 1 + iVar5;
              }
              iVar7 = iVar7 + 2;
            } while (iVar7 < iVar5);
          }
          local_34 = local_34 + 2;
          local_30 = local_30 + iVar5 * 2;
        } while (local_34 < iVar6);
      }
      local_2c = local_2c + 0x10;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  iVar5 = FUN_36179320((int)&local_1c);
  if (iVar5 != 0) {
    *(int *)(param_1 + 0xf0) = iVar5;
    iVar6 = thunk_FUN_361bf99c((iVar5 + 1) * 0x2c);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else if (-1 < iVar5) {
      param_1 = iVar5 + 1;
      puVar9 = (undefined4 *)(iVar6 + 0xc);
      do {
        iVar7 = 3;
        puVar10 = puVar9;
        do {
          puVar10[-3] = 0x7f61b1e6;
          *puVar10 = 0xff61b1e6;
          puVar10 = puVar10 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        puVar9 = puVar9 + 0xb;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    *(int *)(iVar2 + 0xf4) = iVar6;
    if (0 < iVar5) {
      iVar6 = 0;
      do {
        puVar9 = (undefined4 *)(iVar6 + (int)local_18);
        puVar10 = (undefined4 *)(*(int *)(iVar2 + 0xf4) + iVar6);
        iVar6 = iVar6 + 0x2c;
        iVar5 = iVar5 + -1;
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      } while (iVar5 != 0);
    }
  }
  if (local_1c != 0) {
    operator_delete__(local_18);
  }
  ExceptionList = local_c;
  return;
}

