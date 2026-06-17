
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float __cdecl Cos(float) */

float __cdecl Cos(float param_1)

{
  int iVar1;
  float10 fVar2;
  ulonglong uVar3;
  
                    /* 0x48c70  1403  ?Cos@@YAMM@Z */
  _CIfmod();
  _CIfmod();
  uVar3 = FUN_361bfd6c();
  iVar1 = (int)uVar3 * 0x10;
  fVar2 = (float10)_CIfmod();
  fVar2 = (float10)fsin((fVar2 + (float10)*(double *)(&DAT_362a27d0 + iVar1)) *
                        (float10)_DAT_36227cf8);
  return (float)(fVar2 * (float10)*(double *)(&DAT_362a27c8 + iVar1));
}

