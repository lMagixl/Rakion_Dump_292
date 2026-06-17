
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_360831b0(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_36084140((undefined4 *)&DAT_362c4710);
  if (iVar2 != 0) {
    operator_delete__(DAT_362c4714);
    _DAT_362c4710 = 0;
    DAT_362c4714 = (void *)0x0;
    DAT_362c4718 = 0;
  }
  iVar2 = DAT_362c4718 + 1;
  DAT_362c4718 = iVar2;
  iVar3 = FUN_36084140((undefined4 *)&DAT_362c4710);
  if (iVar3 < iVar2) {
    iVar2 = FUN_36084140((undefined4 *)&DAT_362c4710);
    FUN_36084310(&DAT_362c4710,iVar2 + _DAT_362c471c);
    iVar2 = DAT_362c4718;
  }
  pvVar1 = DAT_362c4714;
  iVar2 = iVar2 * 0xd4;
  *(undefined4 *)((int)DAT_362c4714 + iVar2 + -8) = 0;
  *(undefined4 *)((int)pvVar1 + iVar2 + -0xc) = 0x1f;
  *(undefined4 *)((int)pvVar1 + iVar2 + -4) = 0x69;
  return;
}

