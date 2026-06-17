
void __fastcall FUN_360504a0(int param_1)

{
  int iVar1;
  size_t _NumOfElements;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  void *pvVar7;
  int local_1c;
  size_t local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211a48;
  local_c = ExceptionList;
  pvVar7 = (void *)(param_1 + 0x14);
  ExceptionList = &local_c;
  iVar1 = FUN_3604aaa0((int)pvVar7);
  if (iVar1 != 0) {
    _NumOfElements = FUN_3604aaa0((int)pvVar7);
    iVar1 = 0;
    local_14 = 0;
    local_10 = (void *)0x0;
    local_4 = 0;
    if (_NumOfElements != 0) {
      local_10 = (void *)thunk_FUN_361bf99c(_NumOfElements * 4 + 4);
      local_14 = _NumOfElements;
    }
    if (0 < (int)_NumOfElements) {
      do {
        uVar2 = FUN_3604a740(pvVar7,iVar1);
        *(undefined4 *)((int)local_10 + iVar1 * 4) = uVar2;
        uVar2 = FUN_3604a740(pvVar7,iVar1);
        iVar3 = FUN_3604a740(pvVar7,iVar1);
        iVar1 = iVar1 + 1;
        *(undefined4 *)(iVar3 + 0x20) = uVar2;
      } while (iVar1 < (int)_NumOfElements);
    }
    if (DAT_362a299c == 0) {
      local_1c = 0;
      if (0 < (int)_NumOfElements) {
        do {
          pdVar4 = (double *)FUN_3604a740(pvVar7,local_1c);
          iVar1 = local_1c;
          if (*(double **)(pdVar4 + 4) == pdVar4) {
            while (iVar1 = iVar1 + 1, iVar1 < (int)_NumOfElements) {
              pdVar5 = (double *)FUN_3604a740(pvVar7,iVar1);
              iVar3 = FUN_36054be0(pdVar4,pdVar5);
              if (iVar3 == 0) {
                *(undefined4 *)(pdVar5 + 4) = *(undefined4 *)(pdVar4 + 4);
              }
            }
          }
          local_1c = local_1c + 1;
        } while (local_1c < (int)_NumOfElements);
      }
    }
    else {
      qsort(local_10,_NumOfElements,4,(_PtFuncCompare *)&LAB_36050230);
      iVar1 = 0;
      if (0 < (int)(_NumOfElements - 1)) {
        do {
          pdVar4 = *(double **)((int)local_10 + iVar1 * 4 + 4);
          pdVar5 = *(double **)((int)local_10 + iVar1 * 4);
          iVar3 = FUN_36054be0(pdVar5,pdVar4);
          if (iVar3 == 0) {
            *(undefined4 *)(pdVar4 + 4) = *(undefined4 *)(pdVar5 + 4);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(_NumOfElements - 1));
      }
    }
    pvVar7 = (void *)(param_1 + 0x50);
    iVar3 = 0;
    iVar1 = FUN_3604a760((int)pvVar7);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_3604a750(pvVar7,iVar3);
        iVar1 = *(int *)(iVar1 + 0x48);
        iVar6 = FUN_3604a750(pvVar7,iVar3);
        *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(iVar1 + 0x20);
        iVar3 = iVar3 + 1;
        iVar1 = FUN_3604a760((int)pvVar7);
      } while (iVar3 < iVar1);
    }
    if (local_14 != 0) {
      operator_delete__(local_10);
    }
  }
  ExceptionList = local_c;
  return;
}

