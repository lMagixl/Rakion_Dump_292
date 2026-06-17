
int * __thiscall FUN_3620b2a0(void *this,int *param_1)

{
  int *piVar1;
  int *_Base;
  undefined4 *puVar2;
  int *piVar3;
  size_t _NumOfElements;
  
  if (*(int *)((int)this + 0x14) <= *(int *)((int)this + 4)) {
    return param_1;
  }
  do {
    piVar1 = FUN_3620b360(this,param_1);
    _Base = malloc(*(int *)((int)this + 0x10) << 4);
    puVar2 = FUN_3620b510(this,piVar1,_Base);
    _NumOfElements = (int)puVar2 - (int)_Base >> 4;
    qsort(_Base,_NumOfElements,0x10,(_PtFuncCompare *)&LAB_3620b680);
    piVar3 = (int *)(*(int *)((int)this + 0x14) - *(int *)((int)this + 4));
    param_1 = (int *)((int)(_NumOfElements - ((int)puVar2 - (int)_Base >> 0x1f)) >> 1);
    if ((int)piVar3 < (int)param_1) {
      param_1 = piVar3;
    }
    piVar3 = _Base;
    if (0 < (int)param_1) {
      do {
        FUN_3620b6a0(this,piVar3);
        param_1 = (int *)((int)param_1 + -1);
        piVar3 = piVar3 + 4;
      } while (param_1 != (int *)0x0);
    }
    free(_Base);
    param_1 = piVar1;
  } while (*(int *)((int)this + 4) < *(int *)((int)this + 0x14));
  return piVar1;
}

