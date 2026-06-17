
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_36074c60(int param_1)

{
  undefined4 uVar1;
  
  if (0xffff < param_1) {
    param_1 = 0xffff;
  }
  DAT_362c4560 = param_1;
  if (*(int *)(_pGfx + 0xaa8) < param_1) {
    FUN_360731a0(param_1);
  }
  DAT_362a4024 = 1;
  if ((DAT_362c4560 + DAT_362c3c98 < *(int *)(_pGfx + 0xaa8)) &&
     ((*(uint *)(_pGfx + 0xa54) & 0x800) != 0)) {
    DAT_362c3c48 = 0x1000;
  }
  else {
    DAT_362c3c98 = 0;
    DAT_362c3c48 = 0x2000;
    _DAT_362c3c18 = 0x2000;
    _DAT_362c3c30 = 0x2000;
    _DAT_362c3c1c = 0x2000;
    _DAT_362c3c34 = 0x2000;
    _DAT_362c3c20 = 0x2000;
    _DAT_362c3c38 = 0x2000;
    _DAT_362c3c24 = 0x2000;
    _DAT_362c3c3c = 0x2000;
    _DAT_362c3c28 = 0x2000;
    _DAT_362c3c40 = 0x2000;
    _DAT_362c3c2c = 0x2000;
    _DAT_362c3c44 = 0x2000;
  }
  DAT_362c3cb4 = 0;
  _DAT_362c3cbc = 0;
  DAT_362c3ca4 = 0;
  DAT_362c3ca0 = 0;
  DAT_362c3c9c = DAT_362c3c98;
  if ((*(uint *)(_pGfx + 0xa54) & 0x800) != 0) {
    (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x154))
              (*(int **)(_pGfx + 0xa5c),*(undefined4 *)(_pGfx + 0xaa4),DAT_362c3c98);
  }
  DAT_362c3cb4 = DAT_362c3cb4 | 1;
  (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x14c))
            (*(int **)(_pGfx + 0xa5c),0,*(undefined4 *)(_pGfx + 0xa68),0xc);
  uVar1 = DAT_362c3c48;
  (**(code **)(**(int **)(_pGfx + 0xa68) + 0x2c))
            (*(int **)(_pGfx + 0xa68),DAT_362c3c9c * 0xc,DAT_362c4560 * 0xc,&stack0xfffffff4);
  DAT_362c3cd0 = *(undefined4 *)(_pGfx + 0xa68);
  return uVar1;
}

