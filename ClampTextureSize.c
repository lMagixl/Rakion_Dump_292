
/* WARNING: Removing unreachable block (ram,0x3608ba38) */
/* long __cdecl ClampTextureSize(long,long,long,long) */

long __cdecl ClampTextureSize(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x8ba00  1198  ?ClampTextureSize@@YAJJJJJ@Z */
  lVar2 = (longlong)param_3 * (longlong)param_4;
  if (param_3 < param_4) {
    param_3 = param_4;
  }
  iVar1 = 0;
  for (; ((param_1 < lVar2 || (param_2 < param_3)) && (1 < param_3)); param_3 = param_3 >> 1) {
    iVar1 = iVar1 + 1;
    lVar2 = __allshr(2,(int)((ulonglong)lVar2 >> 0x20));
  }
  return iVar1;
}

