
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36115700(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  int _Base;
  size_t _NumOfElements;
  int iVar3;
  int iVar4;
  _PtFuncCompare *_PtFuncCompare;
  float local_18 [6];
  
  _Base = DAT_362fcae4;
  iVar4 = *(int *)**(undefined4 **)(param_1 + 0xe8);
  iVar3 = 1;
  fVar1 = ABS(*(float *)(iVar4 + 0x3c) * *(float *)((int)this + 0xd80) -
              *(float *)(iVar4 + 0x38) * *(float *)((int)this + 0xd84));
  fVar2 = ABS(*(float *)(iVar4 + 0x34) * *(float *)((int)this + 0xd84) -
              *(float *)(iVar4 + 0x3c) * *(float *)((int)this + 0xd7c));
  if (fVar1 < fVar2) {
    iVar3 = 2;
    fVar1 = fVar2;
  }
  if (fVar1 < ABS(*(float *)((int)this + 0xd7c) * *(float *)(iVar4 + 0x38) -
                  *(float *)(iVar4 + 0x34) * *(float *)((int)this + 0xd80))) {
    iVar3 = 3;
  }
  DAT_362fa9e4 = *(int *)((int)this + 0xe0c) + -4 + iVar3 * 4;
  _NumOfElements = FUN_36026a70(0x362fcae0);
  if (_DAT_3622376c <= *(float *)(&stack0xffffffe4 + iVar3 * 4)) {
    _PtFuncCompare = (_PtFuncCompare *)&LAB_36114100;
  }
  else {
    _PtFuncCompare = (_PtFuncCompare *)&LAB_36114130;
  }
  qsort((void *)_Base,_NumOfElements,4,_PtFuncCompare);
  iVar4 = 0;
  if (0 < (int)_NumOfElements) {
    do {
      DAT_362fcb08 = DAT_362fcb08 + 1;
      iVar3 = FUN_3600bef0(&DAT_362fcb00);
      if (iVar3 < DAT_362fcb08) {
        iVar3 = FUN_3600bef0(&DAT_362fcb00);
        FUN_36026aa0(&DAT_362fcb00,iVar3 + _DAT_362fcb0c);
      }
      *(undefined4 *)(DAT_362fcb04 + -4 + DAT_362fcb08 * 4) = *(undefined4 *)(_Base + iVar4 * 4);
      DAT_362fcb08 = DAT_362fcb08 + 1;
      iVar3 = FUN_3600bef0(&DAT_362fcb00);
      if (iVar3 < DAT_362fcb08) {
        iVar3 = FUN_3600bef0(&DAT_362fcb00);
        FUN_36026aa0(&DAT_362fcb00,iVar3 + _DAT_362fcb0c);
      }
      iVar3 = iVar4 * 4;
      iVar4 = iVar4 + 2;
      *(undefined4 *)(DAT_362fcb04 + -4 + DAT_362fcb08 * 4) = *(undefined4 *)(_Base + 4 + iVar3);
    } while (iVar4 < (int)_NumOfElements);
  }
  DAT_362fcae8 = 0;
  return;
}

