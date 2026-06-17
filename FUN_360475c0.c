
void FUN_360475c0(void)

{
  int iVar1;
  size_t _NumOfElements;
  int iVar2;
  CTString *pCVar3;
  size_t _SizeOfElements;
  code *_PtFuncCompare;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_36211560;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  iVar1 = FUN_36047bf0(0x362bf41c);
  if (iVar1 != 0) {
    _PtFuncCompare = FUN_36046060;
    _SizeOfElements = 4;
    _NumOfElements = FUN_36047bf0(0x362bf41c);
    qsort(DAT_362bf428,_NumOfElements,_SizeOfElements,_PtFuncCompare);
    FUN_360465a0(&DAT_362bf438);
    local_18 = StringDuplicate(&DAT_36227bce);
    iVar1 = 0;
    while( true ) {
      local_8 = 0;
      iVar2 = FUN_36047bf0(0x362bf41c);
      if (iVar2 <= iVar1) break;
      local_8 = CONCAT31(local_8._1_3_,1);
      pCVar3 = (CTString *)FUN_36047e70(&DAT_362bf41c,iVar1);
      FUN_36047540(pCVar3);
      iVar1 = iVar1 + 1;
    }
    iVar1 = CTString::operator!=((CTString *)&local_18,&DAT_36227bd2);
    if (iVar1 != 0) {
      ThrowF_t(&DAT_36227bd4,local_18);
    }
    local_8 = 0xffffffff;
    StringFree(local_18);
  }
  ExceptionList = local_10;
  return;
}

