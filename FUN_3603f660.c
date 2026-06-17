
void FUN_3603f660(void)

{
  bool bVar1;
  CTString *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *unaff_ESI;
  CTFileName *unaff_EDI;
  char *local_20;
  char *local_1c;
  char *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210b29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar2 = (CTString *)CTFileName::FileExt(unaff_EDI);
  local_4 = 0;
  iVar3 = CTString::operator==(pCVar2,&DAT_362274ec);
  if ((iVar3 == 0) || (DAT_362c5424 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_4 = 0xffffffff;
  StringFree(local_1c);
  if (bVar1) {
    pcVar4 = StringDuplicate(&DAT_362274f4);
    local_4 = 1;
    pCVar2 = (CTString *)CTFileName::NoExt(unaff_EDI);
    local_4._0_1_ = 2;
    puVar5 = (undefined4 *)CTString::operator+(pCVar2,(CTString *)&local_20);
    local_4._0_1_ = 3;
    pcVar6 = StringDuplicate((char *)*puVar5);
    *unaff_ESI = pcVar6;
    unaff_ESI[1] = 0;
    local_4._0_1_ = 2;
    StringFree(local_20);
    local_4 = CONCAT31(local_4._1_3_,1);
    StringFree(local_14);
    local_4 = 0xffffffff;
    StringFree(pcVar4);
    ExceptionList = local_c;
    return;
  }
  pcVar4 = StringDuplicate(*(char **)unaff_EDI);
  *unaff_ESI = pcVar4;
  unaff_ESI[1] = *(undefined4 *)(unaff_EDI + 4);
  ExceptionList = local_c;
  return;
}

