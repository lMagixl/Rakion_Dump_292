
undefined4 * FUN_36074a00(void)

{
  int *piVar1;
  int *piVar2;
  CGfxLibrary *pCVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_14;
  
  pCVar3 = _pGfx;
  uVar5 = *(undefined4 *)(&DAT_362c3c30 + DAT_362c3ca4 * 4);
  iVar4 = DAT_362c3ca4;
  if (*(int *)(_pGfx + 0xab0) <= DAT_362c3ca4) {
    uVar5 = 0x2000;
    iVar4 = DAT_362c3ca4 % *(int *)(_pGfx + 0xab0);
  }
  *(undefined4 *)(&DAT_362c3c30 + iVar4 * 4) = 0x1000;
  piVar1 = *(int **)(pCVar3 + iVar4 * 4 + 0xa74);
  uStack_14 = 4;
  DAT_362c3cb4 = DAT_362c3cb4 | 2;
  DAT_362c3ca4 = DAT_362c3ca4 + 1;
  piVar2 = *(int **)(pCVar3 + 0xa5c);
  (**(code **)(*piVar2 + 0x14c))(piVar2,1,piVar1);
  puVar6 = &uStack_14;
  (**(code **)(*piVar1 + 0x2c))(piVar1,DAT_362c3c9c * 4,DAT_362c4560 * 4,puVar6,uVar5);
  DAT_362c3cdc = piVar1;
  return puVar6;
}

