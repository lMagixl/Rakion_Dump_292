
/* void __cdecl DitherMipmaps(long,unsigned long *,unsigned long *,long,long) */

void __cdecl DitherMipmaps(long param_1,ulong *param_2,ulong *param_3,long param_4,long param_5)

{
  int iVar1;
  
  for (; (0 < param_4 && (0 < param_5)); param_5 = param_5 >> 1) {
    DitherBitmap(param_1,param_2,param_3,param_4,param_5,0,0);
    iVar1 = param_4 * param_5;
    param_4 = param_4 >> 1;
    param_2 = param_2 + iVar1;
    param_3 = param_3 + iVar1;
  }
  return;
}

