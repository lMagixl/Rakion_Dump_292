
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_361825c0(void)

{
  int iVar1;
  int unaff_EDI;
  CTerrain local_18 [24];
  
  iVar1 = *(int *)(unaff_EDI + 0x2c);
  FUN_36162680((float *)&DAT_36300ce8,(float *)&DAT_36300c88,(float *)&DAT_36300cb8);
  _DAT_36300c58 = *(undefined4 *)(iVar1 + 0x34);
  _DAT_36300c5c = 0;
  _DAT_36300c60 = 0;
  _DAT_36300c64 = 0;
  _DAT_36300c68 = 0;
  _DAT_36300c6c = *(undefined4 *)(iVar1 + 0x38);
  _DAT_36300c70 = 0;
  _DAT_36300c74 = 0;
  _DAT_36300c78 = 0;
  _DAT_36300c7c = 0;
  _DAT_36300c80 = *(undefined4 *)(iVar1 + 0x3c);
  _DAT_36300c84 = 0;
  FUN_36162680((float *)&DAT_36300d18,(float *)&DAT_36300ce8,(float *)&DAT_36300c58);
  FUN_36162680((float *)&DAT_36300d48,(float *)&DAT_36300cb8,(float *)&DAT_36300c58);
  TR_GetStretchedTerrainBBox(local_18);
  TR_AddTerrainViewer();
  return;
}

