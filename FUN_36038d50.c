
void FUN_36038d50(void)

{
  int iVar1;
  int iVar2;
  CTString *pCVar3;
  CTString *this;
  int iVar4;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362103ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_36039a70((int)(_pShell + 8));
  FUN_36026b40(local_14);
  local_4 = 0;
  FUN_36026b70(local_14,iVar1);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = thunk_FUN_360399b0(_pShell + 8,iVar4);
      pCVar3 = (CTString *)(iVar2 + 4);
      this = (CTString *)FUN_36026b50(local_14,iVar4);
      CTString::operator=(this,pCVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  FUN_36026b50(local_14,0);
  FUN_3603a960(&DAT_362bebfc);
  local_4 = 0xffffffff;
  FUN_36026e30(local_14);
  ExceptionList = local_c;
  return;
}

