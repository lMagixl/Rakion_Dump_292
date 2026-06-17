
undefined4 * FUN_3611a680(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  size_t _NumOfElements;
  void *_Base;
  int iVar3;
  undefined4 *puVar4;
  size_t _SizeOfElements;
  _PtFuncCompare *_PtFuncCompare;
  
  if (param_1 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  do {
    iVar1 = FUN_3611f9d0(0x362fcb48);
    if (iVar1 - DAT_362fcb5c < 1) {
      FUN_36122100(&DAT_362fcb48,DAT_362fcb60);
    }
    iVar1 = DAT_362fcb5c;
    DAT_362fcb5c = DAT_362fcb5c + 1;
    puVar2 = (undefined4 *)FUN_3611ffd0(&DAT_362fcb48,iVar1);
    puVar2[1] = param_1;
    *puVar2 = *(undefined4 *)(**(int **)param_1[0x36] + 0x40);
    param_1 = (int *)*param_1;
  } while (param_1 != (int *)0x0);
  _PtFuncCompare = (_PtFuncCompare *)&LAB_36114280;
  _SizeOfElements = 4;
  _NumOfElements = FUN_3611f570(0x362fcb48);
  _Base = (void *)FUN_3611f580(0x362fcb48);
  qsort(_Base,_NumOfElements,_SizeOfElements,_PtFuncCompare);
  puVar2 = (undefined4 *)0x0;
  iVar1 = FUN_3611f570(0x362fcb48);
  if (0 < iVar1) {
    iVar1 = 0;
    puVar4 = puVar2;
    do {
      iVar3 = FUN_3611ffd0(&DAT_362fcb48,iVar1);
      puVar2 = *(undefined4 **)(iVar3 + 4);
      *puVar2 = puVar4;
      iVar1 = iVar1 + 1;
      iVar3 = FUN_3611f570(0x362fcb48);
      puVar4 = puVar2;
    } while (iVar1 < iVar3);
  }
  FUN_36122150((undefined4 *)&DAT_362fcb48);
  DAT_362fcb5c = 0;
  return puVar2;
}

