
void __fastcall FUN_36050650(void *param_1)

{
  int iVar1;
  size_t _NumOfElements;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  void *this;
  int local_1c;
  size_t local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211a5a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_3604aa70((int)param_1);
  if (iVar1 != 0) {
    _NumOfElements = FUN_3604aa70((int)param_1);
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
        uVar2 = FUN_3604a710(param_1,iVar1);
        *(undefined4 *)((int)local_10 + iVar1 * 4) = uVar2;
        uVar2 = FUN_3604a710(param_1,iVar1);
        iVar3 = FUN_3604a710(param_1,iVar1);
        iVar1 = iVar1 + 1;
        *(undefined4 *)(iVar3 + 0x18) = uVar2;
      } while (iVar1 < (int)_NumOfElements);
    }
    if (DAT_362a299c == 0) {
      local_1c = 0;
      if (0 < (int)_NumOfElements) {
        do {
          pdVar4 = (double *)FUN_3604a710(param_1,local_1c);
          iVar1 = local_1c;
          if (*(double **)(pdVar4 + 3) == pdVar4) {
            while (iVar1 = iVar1 + 1, iVar1 < (int)_NumOfElements) {
              pdVar5 = (double *)FUN_3604a710(param_1,iVar1);
              iVar3 = FUN_36054ae0(pdVar4,pdVar5);
              if (iVar3 == 0) {
                *(undefined4 *)(pdVar5 + 3) = *(undefined4 *)(pdVar4 + 3);
              }
            }
          }
          local_1c = local_1c + 1;
        } while (local_1c < (int)_NumOfElements);
      }
    }
    else {
      qsort(local_10,_NumOfElements,4,(_PtFuncCompare *)&LAB_360501f0);
      iVar1 = 0;
      if (0 < (int)(_NumOfElements - 1)) {
        do {
          pdVar4 = *(double **)((int)local_10 + iVar1 * 4 + 4);
          iVar3 = FUN_36054ae0(*(double **)((int)local_10 + iVar1 * 4),pdVar4);
          if (iVar3 == 0) {
            *(undefined4 *)(pdVar4 + 3) =
                 *(undefined4 *)(*(int *)((int)local_10 + iVar1 * 4) + 0x18);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(_NumOfElements - 1));
      }
    }
    this = (void *)((int)param_1 + 0x3c);
    iVar3 = 0;
    iVar1 = FUN_360543c0((int)this);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_36054380(this,iVar3);
        iVar1 = *(int *)(iVar1 + 0x10);
        iVar6 = FUN_36054380(this,iVar3);
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar1 + 0x18);
        iVar1 = FUN_36054380(this,iVar3);
        iVar1 = *(int *)(iVar1 + 0x14);
        iVar6 = FUN_36054380(this,iVar3);
        *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar1 + 0x18);
        iVar3 = iVar3 + 1;
        iVar1 = FUN_360543c0((int)this);
      } while (iVar3 < iVar1);
    }
    if (local_14 != 0) {
      operator_delete__(local_10);
    }
  }
  ExceptionList = local_c;
  return;
}

