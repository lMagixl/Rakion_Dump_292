
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl shaClean(void) */

void __cdecl shaClean(void)

{
  int iVar1;
  
                    /* 0x8fb20  4304  ?shaClean@@YAXXZ */
  DAT_362a4338 = 0xffffffff;
  DAT_362a433c = 0xffffffff;
  DAT_362a4340 = 0xffffffff;
  DAT_362a434c = 0xffffffff;
  DAT_362a4344 = 0xffffffff;
  DAT_362a4348 = 0xffffffff;
  _DAT_362a4354 = 0xffffffff;
  _DAT_362a4358 = 0xffffffff;
  _DAT_362a435c = 0xffffffff;
  _DAT_362a4360 = 0xffffffff;
  _DAT_362a4364 = 0xffffffff;
  _DAT_362a436c = 0xffffffff;
  _DAT_362a4370 = 0xffffffff;
  DAT_362a4374 = 0xffffffff;
  DAT_362c9834 = 0;
  _DAT_362c9840 = 0;
  _DAT_362c9844 = 0;
  DAT_362c9854 = 0;
  DAT_362c9804 = 0;
  DAT_362c980c = 0;
  DAT_362c9810 = 0;
  _DAT_362c9814 = 0;
  DAT_362c9830 = 0;
  DAT_362c9818 = 0;
  DAT_362c982c = 0;
  DAT_362c9838 = 0;
  DAT_362c983c = 0;
  DAT_362c9808 = 0;
  DAT_362c9864 = 0;
  DAT_362c981c = 0;
  _DAT_362c9820 = 0;
  _DAT_362c9824 = 0;
  _DAT_362c9828 = 0;
  DAT_362c97f8 = 0;
  DAT_362c97fc = 0;
  DAT_362c9800 = 0;
  DAT_362c97e4 = 0;
  DAT_362a4378 = 1;
  if ((DAT_362c542c != 0) && (DAT_362c9848 != 0)) {
    FUN_3608e180();
  }
  DAT_362c9954 = 0;
  _DAT_362c9964 = 0;
  _DAT_362c9974 = 0;
  _DAT_362c9984 = 0;
  iVar1 = 1;
  DAT_362c9860 = 0;
  if (1 < *(int *)(_pGfx + 0xadc)) {
    do {
      if ((DAT_362c9858 >> ((byte)iVar1 & 0x1f) & 1) != 0) {
        shaDisableTexture(iVar1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(_pGfx + 0xadc));
  }
  DAT_362c9858 = 0;
  FUN_3607b900(0);
  DAT_362c9804 = 0;
  return;
}

