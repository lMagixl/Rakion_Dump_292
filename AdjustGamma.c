
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned long __cdecl AdjustGamma(unsigned long,float) */

ulong __cdecl AdjustGamma(ulong param_1,float param_2)

{
  uint uVar1;
  undefined1 uVar2;
  float10 fVar3;
  
                    /* 0x631a0  1044  ?AdjustGamma@@YAKKM@Z */
  if ((param_2 != _DAT_36223384) && (_DAT_362287a8 <= param_2)) {
    fVar3 = (float10)_CIpow();
    param_2._0_1_ = (undefined1)(int)ROUND((float)fVar3 * 255.0);
    if (0xff < (uint)(int)ROUND((float)fVar3 * 255.0)) {
      param_2._0_1_ = 0xff;
    }
    fVar3 = (float10)_CIpow();
    if ((uint)(int)ROUND((float)fVar3 * 255.0) < 0x100) {
      uVar2 = (undefined1)(int)ROUND((float)fVar3 * 255.0);
    }
    else {
      uVar2 = 0xff;
    }
    fVar3 = (float10)_CIpow();
    uVar1 = (uint)ROUND((float)fVar3 * 255.0);
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    return ((uint)CONCAT11(param_2._0_1_,uVar2) << 8 | uVar1 & 0xff) << 8 | param_1 & 0xff;
  }
  return param_1;
}

