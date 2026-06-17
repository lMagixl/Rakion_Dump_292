
undefined4 FUN_36176bb0(void)

{
  CTextureData *this;
  int iVar1;
  undefined4 extraout_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a851;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (CTextureData *)FUN_361bf99c(0x80);
  iVar1 = 0;
  local_4 = 0;
  if (this != (CTextureData *)0x0) {
    iVar1 = CTextureData::CTextureData(this);
  }
  DAT_36300a84 = DAT_36300a84 + 1;
  FUN_36175510(iVar1);
  ExceptionList = local_c;
  return extraout_ECX;
}

