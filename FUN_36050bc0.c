
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36050bc0(void *this,int param_1,int param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  size_t _NumOfElements;
  int iVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined4 *puVar7;
  double *pdVar8;
  size_t local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_36211a7e;
  local_14 = ExceptionList;
  if ((param_2 <= param_3) && (_NumOfElements = (param_3 - param_2) * 2 + 2, _NumOfElements != 0)) {
    local_34 = (undefined4 *)0x0;
    local_c = 0;
    ExceptionList = &local_14;
    local_38 = _NumOfElements;
    local_34 = (undefined4 *)thunk_FUN_361bf99c(_NumOfElements * 4 + 4);
    iVar6 = param_2;
    puVar7 = local_34;
    do {
      iVar3 = **(int **)(*(int *)(param_1 + 4) + iVar6 * 4);
      *puVar7 = *(undefined4 *)(iVar3 + 0x10);
      puVar7[1] = *(undefined4 *)(iVar3 + 0x14);
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 2;
    } while (iVar6 <= param_3);
    iVar6 = *(int *)(*(int *)(param_1 + 4) + param_2 * 4);
    pdVar8 = (double *)(iVar6 + 8);
    local_30 = *(undefined4 *)pdVar8;
    uStack_2c = *(undefined4 *)(iVar6 + 0xc);
    pdVar1 = (double *)(iVar6 + 0x10);
    local_28 = *(undefined4 *)pdVar1;
    uStack_24 = *(undefined4 *)(iVar6 + 0x14);
    pdVar2 = (double *)(iVar6 + 0x18);
    local_20 = *(undefined4 *)pdVar2;
    uStack_1c = *(undefined4 *)(iVar6 + 0x1c);
    dVar4 = _DAT_36227d98;
    if (ABS(_DAT_36227d98) < ABS(*pdVar8)) {
      dVar4 = *pdVar8;
    }
    DAT_362bf664 = (uint)(ABS(_DAT_36227d98) < ABS(*pdVar8));
    if (ABS(dVar4) < ABS(*pdVar1)) {
      DAT_362bf664 = 2;
      dVar4 = *pdVar1;
    }
    if (ABS(dVar4) < ABS(*pdVar2)) {
      DAT_362bf664 = 3;
      dVar4 = *pdVar2;
    }
    dVar5 = _DAT_36227d28;
    if ((dVar4 <= _DAT_36227d98) && (dVar5 = _DAT_36227d98, dVar4 < _DAT_36227d98)) {
      dVar5 = _DAT_36227d30;
    }
    if (((_DAT_36225648 * (double)_DAT_362a29a0 < dVar5) ||
        (dVar5 < _DAT_36228090 * (double)_DAT_362a29a0)) && (0 < (int)_NumOfElements)) {
      qsort(local_34,_NumOfElements,4,(_PtFuncCompare *)&LAB_36050210);
    }
    do {
      FUN_36055e30(this,**(int **)(*(int *)(param_1 + 4) + param_2 * 4),(int)&local_38);
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
    operator_delete__(local_34);
  }
  ExceptionList = local_14;
  return;
}

