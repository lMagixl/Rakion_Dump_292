
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl TRS_EndShadowMapUpdate(class CTerrain *) */

void __cdecl TRS_EndShadowMapUpdate(CTerrain *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  
                    /* 0x183220  3738  ?TRS_EndShadowMapUpdate@@YAXPAVCTerrain@@@Z */
  iVar2 = *(int *)(param_1 + 0x2c);
  if (DAT_363016e0 != 0) {
    iVar3 = *(int *)(iVar2 + 0x28);
    iVar1 = *(int *)(iVar2 + 0x18) + -1;
    bVar4 = (byte)iVar3;
    if (iVar3 < 0) {
      lVar6 = iVar1 >> (-bVar4 & 0x1f);
    }
    else {
      lVar6 = iVar1 << (bVar4 & 0x1f);
    }
    iVar1 = *(int *)(iVar2 + 0x1c) + -1;
    if (iVar3 < 0) {
      lVar5 = iVar1 >> (-bVar4 & 0x1f);
    }
    else {
      lVar5 = iVar1 << (bVar4 & 0x1f);
    }
    FUN_361754e0(*(CTextureData **)(iVar2 + 0x10),lVar6,lVar5);
  }
  DAT_363016e0 = 0;
  DAT_363016ec = 0;
  DAT_363016fc = 0;
  _DAT_363016dc = 0;
  return;
}

