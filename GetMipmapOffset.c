
/* long __cdecl GetMipmapOffset(long,long,long) */

long __cdecl GetMipmapOffset(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
                    /* 0x8ba70  1982  ?GetMipmapOffset@@YAJJJJ@Z */
  lVar2 = param_2;
  iVar4 = param_2 * param_3;
  lVar5 = 0;
  param_2 = param_3;
  if (lVar2 <= param_3) {
    param_2 = lVar2;
  }
  iVar1 = 0x1f;
  if (param_2 != 0) {
    for (; (uint)param_2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar3 = iVar1 + 1;
  if (param_1 < iVar1 + 1) {
    iVar3 = param_1;
  }
  if (0 < iVar3) {
    do {
      lVar5 = lVar5 + iVar4;
      iVar4 = iVar4 >> 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return lVar5;
}

