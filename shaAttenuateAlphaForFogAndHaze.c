
/* void __cdecl shaAttenuateAlphaForFogAndHaze(void) */

void __cdecl shaAttenuateAlphaForFogAndHaze(void)

{
  byte bVar1;
  long lVar2;
  GFXColor *pGVar3;
  int iVar4;
  GFXColor *pGVar5;
  
                    /* 0x8f9c0  4299  ?shaAttenuateAlphaForFogAndHaze@@YAXXZ */
  lVar2 = shaGetVertexCount();
  pGVar3 = shaGetColorArray();
  bVar1 = DAT_362c9844;
  if (((DAT_362c9844 & 2) != 0) && (iVar4 = 0, 0 < lVar2)) {
    pGVar5 = pGVar3 + 3;
    do {
      *pGVar5 = SUB41((uint)*(byte *)(DAT_362c9a0c + iVar4) * (uint)(byte)*pGVar5 >> 8,0);
      iVar4 = iVar4 + 1;
      pGVar5 = pGVar5 + 4;
    } while (iVar4 < lVar2);
  }
  if (((bVar1 & 1) != 0) && (iVar4 = 0, 0 < lVar2)) {
    pGVar3 = pGVar3 + 3;
    do {
      *pGVar3 = SUB41((uint)*(byte *)(DAT_362c9a1c + iVar4) * (uint)(byte)*pGVar3 >> 8,0);
      iVar4 = iVar4 + 1;
      pGVar3 = pGVar3 + 4;
    } while (iVar4 < lVar2);
  }
  return;
}

