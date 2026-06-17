
/* long __cdecl GetMipmapOfSize(long,unsigned long * &,long &,long &) */

long __cdecl GetMipmapOfSize(long param_1,ulong **param_2,long *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  
                    /* 0x8a850  1981  ?GetMipmapOfSize@@YAJJAAPAKAAJ1@Z */
  iVar2 = *param_3;
  iVar1 = 0;
  while (((1 < iVar2 && (1 < *param_4)) &&
         (iVar2 = *param_3 * *param_4, iVar2 - param_1 != 0 && param_1 <= iVar2))) {
    *param_2 = *param_2 + iVar2;
    *param_3 = *param_3 >> 1;
    *param_4 = *param_4 >> 1;
    iVar2 = *param_3;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

