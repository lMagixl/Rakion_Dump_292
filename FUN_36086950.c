
void FUN_36086950(void)

{
  CStock_CModelData *this;
  int iVar1;
  CSerial *this_00;
  char *pcVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621209a;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  CSoundLibrary::Mute(_pSound,0.0);
  this = _pModelStock;
  local_4 = 0;
  iVar1 = FUN_3608a5c0((int)_pModelStock);
  if (0 < iVar1) {
    do {
      this_00 = (CSerial *)FUN_3608a4b0(this,iVar3);
      CSerial::Reload(this_00);
      iVar3 = iVar3 + 1;
      iVar1 = FUN_3608a5c0((int)this);
    } while (iVar3 < iVar1);
  }
  local_4 = 0xffffffff;
  DAT_362b8cfc = 1;
  pcVar2 = Translate(s_ETRSAll_models_reloaded__3622bdf8,4);
  CPrintF(pcVar2);
  ExceptionList = local_c;
  return;
}

