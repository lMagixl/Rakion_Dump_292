
int * FUN_360748c0(void)

{
  int *piVar1;
  int *piStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  DAT_362c3cb4 = DAT_362c3cb4 | 0x40;
  piStack_14 = *(int **)(_pGfx + 0xa5c);
  uStack_c = *(undefined4 *)(_pGfx + 0xa6c);
  uStack_8 = 0xc;
  uStack_10 = 6;
  (**(code **)(*piStack_14 + 0x14c))();
  piVar1 = *(int **)(_pGfx + 0xa6c);
  (**(code **)(*piVar1 + 0x2c))
            (piVar1,DAT_362c3c9c * 0xc,DAT_362c4560 * 0xc,&piStack_14,DAT_362c3c48);
  DAT_362c3cd4 = *(undefined4 *)(_pGfx + 0xa6c);
  return piVar1;
}

