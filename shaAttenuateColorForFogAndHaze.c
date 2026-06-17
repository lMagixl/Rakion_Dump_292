
/* void __cdecl shaAttenuateColorForFogAndHaze(void) */

void __cdecl shaAttenuateColorForFogAndHaze(void)

{
  byte bVar1;
  long lVar2;
  GFXColor *pGVar3;
  GFXColor *pGVar4;
  uint uVar5;
  int iVar6;
  
                    /* 0x8f900  4300  ?shaAttenuateColorForFogAndHaze@@YAXXZ */
  lVar2 = shaGetVertexCount();
  pGVar3 = shaGetColorArray();
  bVar1 = DAT_362c9844;
  if (((DAT_362c9844 & 2) != 0) && (iVar6 = 0, 0 < lVar2)) {
    pGVar4 = pGVar3 + 2;
    do {
      uVar5 = (uint)*(byte *)(DAT_362c9a0c + iVar6);
      pGVar4[-2] = SUB41((byte)pGVar4[-2] * uVar5 >> 8,0);
      pGVar4[-1] = SUB41((byte)pGVar4[-1] * uVar5 >> 8,0);
      *pGVar4 = SUB41((byte)*pGVar4 * uVar5 >> 8,0);
      iVar6 = iVar6 + 1;
      pGVar4 = pGVar4 + 4;
    } while (iVar6 < lVar2);
  }
  if (((bVar1 & 1) != 0) && (iVar6 = 0, 0 < lVar2)) {
    pGVar3 = pGVar3 + 2;
    do {
      uVar5 = (uint)*(byte *)(DAT_362c9a1c + iVar6);
      pGVar3[-2] = SUB41((byte)pGVar3[-2] * uVar5 >> 8,0);
      pGVar3[-1] = SUB41((byte)pGVar3[-1] * uVar5 >> 8,0);
      *pGVar3 = SUB41((byte)*pGVar3 * uVar5 >> 8,0);
      iVar6 = iVar6 + 1;
      pGVar3 = pGVar3 + 4;
    } while (iVar6 < lVar2);
  }
  return;
}

