
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_3617d160(undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  float *unaff_ESI;
  float10 fVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = 3e+38;
  local_8 = 3e+38;
  DAT_36300c2c = 0x7f61b1e6;
  DAT_36300c30 = 0x7f61b1e6;
  local_4 = 3e+38;
  DAT_36300c34 = 0x7f61b1e6;
  iVar1 = FUN_3617c0c0((float *)&DAT_362a6c38,unaff_ESI,&local_c,&local_18);
  if (iVar1 != 0) {
    if (((local_c == local_18) && (local_8 == local_14)) && (local_4 == local_10)) {
      local_8 = local_8 + _DAT_362280f0;
    }
    fVar2 = FUN_3617cdb0(&local_c,&local_18,param_3);
    return SQRT((float10)(*unaff_ESI - local_c) * (float10)(*unaff_ESI - local_c) +
                (float10)(unaff_ESI[1] - local_8) * (float10)(unaff_ESI[1] - local_8) +
                (float10)(unaff_ESI[2] - local_4) * (float10)(unaff_ESI[2] - local_4)) + fVar2;
  }
  return (float10)3e+38;
}

