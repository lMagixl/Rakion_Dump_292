
int * FUN_36074960(void)

{
  int *piVar1;
  int *piStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  DAT_362c3cb4 = DAT_362c3cb4 | 0x80;
  piStack_14 = *(int **)(_pGfx + 0xa5c);
  uStack_c = *(undefined4 *)(_pGfx + 0xa70);
  uStack_8 = 8;
  uStack_10 = 7;
  (**(code **)(*piStack_14 + 0x14c))();
  piVar1 = *(int **)(_pGfx + 0xa70);
  (**(code **)(*piVar1 + 0x2c))(piVar1,DAT_362c3c9c << 3,DAT_362c4560 << 3,&piStack_14,DAT_362c3c48)
  ;
  DAT_362c3cd8 = *(undefined4 *)(_pGfx + 0xa70);
  return piVar1;
}

