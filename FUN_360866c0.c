
void FUN_360866c0(void)

{
  CStock_CMesh *this;
  int iVar1;
  CSerial *this_00;
  char *pcVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212076;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  CSoundLibrary::Mute(_pSound,0.0);
  this = _pMeshStock;
  local_4 = 0;
  iVar1 = FUN_3608a5b0((int)_pMeshStock);
  if (0 < iVar1) {
    do {
      this_00 = (CSerial *)FUN_3608a4f0(this,iVar3);
      CSerial::Reload(this_00);
      iVar3 = iVar3 + 1;
      iVar1 = FUN_3608a5b0((int)this);
    } while (iVar3 < iVar1);
  }
  local_4 = 0xffffffff;
  pcVar2 = Translate(s_ETRSAll_meshes_reloaded__3622bda8,4);
  CPrintF(pcVar2);
  ExceptionList = local_c;
  return;
}

