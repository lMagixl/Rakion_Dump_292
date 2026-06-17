
/* void __cdecl shaSetUVMap(long,long) */

void __cdecl shaSetUVMap(long param_1,long param_2)

{
  GFXTexCoord *pGVar1;
  int iVar2;
  
                    /* 0x8eda0  4397  ?shaSetUVMap@@YAXJJ@Z */
  if (param_1 <= DAT_362a4348) {
    if (DAT_362c9850 == 0) {
      pGVar1 = *(GFXTexCoord **)(DAT_362c9818 + param_1 * 4);
      if (pGVar1 != (GFXTexCoord *)0x0) {
        shaSetTexCoordArray(pGVar1,param_2);
        return;
      }
    }
    else {
      iVar2 = *(int *)(DAT_362c981c + param_1 * 4);
      if (-1 < iVar2) {
        shaSetTexCoordBufferID(iVar2,param_2);
        return;
      }
    }
  }
  return;
}

