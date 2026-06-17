
void FUN_36086760(void)

{
  CTextureData *pCVar1;
  CStock_CTextureData *this;
  int iVar2;
  CSerial *this_00;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212088;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CSoundLibrary::Mute(_pSound,0.0);
  FUN_360942b0();
  this = _pTextureStock;
  iVar4 = 0;
  local_4 = 0;
  iVar2 = FUN_3608a5a0((int)_pTextureStock);
  if (0 < iVar2) {
    do {
      this_00 = (CSerial *)FUN_3608a4e0(this,iVar4);
      CSerial::Reload(this_00);
      iVar4 = iVar4 + 1;
      *(undefined4 *)(this_00 + 0x38) = 0;
      *(undefined4 *)(this_00 + 0x3c) = 0;
      *(undefined4 *)(this_00 + 0x48) = 0;
      *(undefined4 *)(this_00 + 0x44) = 0;
      iVar2 = FUN_3608a5a0((int)this);
    } while (iVar4 < iVar2);
  }
  pCVar1 = _ptdFlat;
  DAT_362c3b34 = 0;
  DAT_362c3b38 = 0;
  DAT_362c3b4c = 0;
  *(undefined4 *)(_ptdFlat + 0x38) = 0;
  *(undefined4 *)(pCVar1 + 0x3c) = 0;
  *(undefined4 *)(pCVar1 + 0x48) = 0;
  *(undefined4 *)(pCVar1 + 0x44) = 0;
  local_4 = 0xffffffff;
  CTextureData::Unbind(_ptdFlat);
  *(undefined4 *)(_ptdFlat + 0x1c) = 0x103;
  *(undefined4 *)(_ptdFlat + 0x20) = 1;
  *(undefined4 *)(_ptdFlat + 0x24) = 1;
  *(undefined4 *)(_ptdFlat + 0x28) = 0;
  *(undefined4 *)(_ptdFlat + 0x2c) = 1;
  *(undefined4 *)(_ptdFlat + 0x30) = 4;
  *(undefined4 *)(_ptdFlat + 0x34) = 1;
  *(undefined4 *)(_ptdFlat + 0x4c) = DAT_362c9b54;
  *(undefined **)(_ptdFlat + 0x60) = &DAT_362a4058;
  CTextureData::SetAsCurrent(_ptdFlat,0,0);
  for (piVar5 = *(int **)(_pGfx + 0xb24); *piVar5 != 0; piVar5 = (int *)*piVar5) {
    TR_BindTerrainTextures((CTerrain *)(piVar5 + -8));
  }
  DAT_362b8cfc = 1;
  pcVar3 = Translate(s_ETRSAll_textures_reloaded__3622bdc4,4);
  CPrintF(pcVar3);
  ExceptionList = local_c;
  return;
}

