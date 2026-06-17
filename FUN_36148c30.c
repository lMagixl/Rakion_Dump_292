
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_36148c30(int *param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  
  uVar1 = param_1[0x32];
  if (((((uVar1 & 0x400000) == 0) || ((uVar1 & 0x8020) != 0)) && ((~(uVar1 >> 0xe) & 1) != 0)) &&
     ((~(((uint)((float)param_1[0x6a] - _DAT_362a660c) |
         (uint)(_DAT_362a6610 - (float)param_1[0x65]) | (uint)((float)param_1[0x68] - _DAT_362a6604)
         | (uint)(_DAT_362a6614 - (float)param_1[0x66]) |
         (uint)((float)param_1[0x69] - _DAT_362a6608) | (uint)(_DAT_362a6618 - (float)param_1[0x67])
         ) >> 0x1f) & 1) != 0)) {
    iVar2 = *param_1;
    fVar3 = (DAT_362fdc14 * *(float *)(iVar2 + 4) +
            _DAT_362fdc1c * *(float *)(iVar2 + 0xc) + DAT_362fdc18 * *(float *)(iVar2 + 8)) -
            *(float *)(iVar2 + 0x10);
    if (((fVar3 < _DAT_362fdb30 != (fVar3 == _DAT_362fdb30)) &&
        ((DAT_362fdb34 == 0 || (_DAT_362fdb2c < fVar3)))) &&
       ((DAT_362fdb28 == 2 || (((uVar1 & 0x10000000) == 0 && (DAT_362fdb28 == 1)))))) {
      return 1;
    }
  }
  return 0;
}

