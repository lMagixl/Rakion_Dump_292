
void __fastcall FUN_36050820(int param_1)

{
  uint uVar1;
  int iVar2;
  size_t _NumOfElements;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  int local_20;
  int local_1c;
  void *local_18;
  size_t local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211a6c;
  local_c = ExceptionList;
  pvVar8 = (void *)(param_1 + 0x3c);
  ExceptionList = &local_c;
  local_1c = param_1;
  iVar2 = FUN_360543c0((int)pvVar8);
  if (iVar2 != 0) {
    _NumOfElements = FUN_360543c0((int)pvVar8);
    iVar2 = 0;
    local_14 = 0;
    local_10 = (void *)0x0;
    local_4 = 0;
    if (_NumOfElements != 0) {
      local_14 = _NumOfElements;
      local_10 = (void *)thunk_FUN_361bf99c(_NumOfElements * 4 + 4);
    }
    if (0 < (int)_NumOfElements) {
      do {
        pvVar9 = local_10;
        uVar3 = FUN_36054380(pvVar8,iVar2);
        *(undefined4 *)((int)pvVar9 + iVar2 * 4) = uVar3;
        uVar3 = FUN_36054380(pvVar8,iVar2);
        iVar4 = FUN_36054380(pvVar8,iVar2);
        *(undefined4 *)(iVar4 + 8) = uVar3;
        iVar4 = FUN_36054380(pvVar8,iVar2);
        *(undefined4 *)(iVar4 + 0xc) = 0;
        puVar5 = (undefined4 *)FUN_36054380(pvVar8,iVar2);
        iVar2 = iVar2 + 1;
        *puVar5 = 0;
      } while (iVar2 < (int)_NumOfElements);
    }
    pvVar8 = local_10;
    qsort(local_10,_NumOfElements,4,(_PtFuncCompare *)&LAB_360501b0);
    iVar2 = 0;
    if (_NumOfElements != 1 && -1 < (int)(_NumOfElements - 1)) {
      do {
        iVar4 = *(int *)((int)pvVar8 + iVar2 * 4 + 4);
        iVar10 = *(int *)((int)pvVar8 + iVar2 * 4);
        if ((((*(uint *)(iVar4 + 0x10) <= *(uint *)(iVar10 + 0x10)) &&
             (*(uint *)(iVar10 + 0x10) == *(uint *)(iVar4 + 0x10))) &&
            (*(uint *)(iVar4 + 0x14) <= *(uint *)(iVar10 + 0x14))) &&
           (*(uint *)(iVar10 + 0x14) == *(uint *)(iVar4 + 0x14))) {
          *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar10 + 8);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(_NumOfElements - 1));
    }
    iVar2 = 0;
    if (0 < (int)_NumOfElements) {
      do {
        uVar1 = *(uint *)((int)pvVar8 + iVar2 * 4);
        if (((*(uint *)(uVar1 + 8) == uVar1) &&
            (iVar4 = FUN_36050270(&local_14,*(undefined1 **)(uVar1 + 0x14),
                                  *(undefined4 *)(uVar1 + 0x10),&local_20), iVar4 != 0)) &&
           (*(uint *)(local_20 + 8) < uVar1)) {
          *(uint *)(uVar1 + 0xc) = *(uint *)(local_20 + 8);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)_NumOfElements);
    }
    pvVar8 = (void *)(local_1c + 0x50);
    iVar2 = 0;
    local_1c = 0;
    local_18 = pvVar8;
    iVar4 = FUN_3604a760((int)pvVar8);
    if (0 < iVar4) {
      do {
        iVar4 = FUN_3604a750(pvVar8,iVar2);
        pvVar9 = (void *)(iVar4 + 0x4c);
        iVar10 = 0;
        iVar4 = FUN_3604aa50((int)pvVar9);
        if (0 < iVar4) {
          do {
            piVar6 = (int *)FUN_3604a700(pvVar9,iVar10);
            iVar2 = *(int *)(*(int *)(*piVar6 + 8) + 0xc);
            iVar4 = *(int *)(*piVar6 + 8);
            if (iVar2 != 0) {
              iVar4 = FUN_3604a700(pvVar9,iVar10);
              iVar4 = *(int *)(iVar4 + 4);
              iVar7 = FUN_3604a700(pvVar9,iVar10);
              *(uint *)(iVar7 + 4) = (uint)(iVar4 == 0);
              pvVar8 = local_18;
              iVar4 = iVar2;
            }
            piVar6 = (int *)FUN_3604a700(pvVar9,iVar10);
            *piVar6 = iVar4;
            iVar10 = iVar10 + 1;
            iVar4 = FUN_3604aa50((int)pvVar9);
            iVar2 = local_1c;
          } while (iVar10 < iVar4);
        }
        iVar2 = iVar2 + 1;
        local_1c = iVar2;
        iVar4 = FUN_3604a760((int)pvVar8);
      } while (iVar2 < iVar4);
    }
    if (local_14 != 0) {
      operator_delete__(local_10);
    }
  }
  ExceptionList = local_c;
  return;
}

