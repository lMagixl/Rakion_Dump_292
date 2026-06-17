
undefined4 FUN_3603f2f0(void)

{
  CTString *pCVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  CTFileName *unaff_ESI;
  char *local_28 [2];
  char *local_20;
  char *local_1c;
  char *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210acc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CTString *)CTFileName::FileExt(unaff_ESI);
  local_4 = 0;
  iVar2 = CTString::operator==(pCVar1,&DAT_362274cc);
  local_4 = 0xffffffff;
  StringFree(local_28[0]);
  if (iVar2 == 0) {
    pCVar1 = (CTString *)CTFileName::FileExt(unaff_ESI);
    local_4 = 4;
    iVar2 = CTString::operator==(pCVar1,&DAT_362274dc);
    local_4 = 0xffffffff;
    StringFree(local_1c);
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return 1;
    }
    pcVar3 = StringDuplicate(&DAT_362274e4);
    local_4 = 5;
    pCVar1 = (CTString *)CTFileName::NoExt(unaff_ESI);
    local_4._0_1_ = 6;
    puVar4 = (undefined4 *)CTString::operator+(pCVar1,(CTString *)&local_20);
    local_4._0_1_ = 7;
    pcVar5 = StringDuplicate((char *)*puVar4);
    StringFree(*(char **)unaff_ESI);
    *(char **)unaff_ESI = pcVar5;
    *(undefined4 *)(unaff_ESI + 4) = 0;
    local_4._0_1_ = 6;
    StringFree(local_20);
    local_4 = CONCAT31(local_4._1_3_,5);
    StringFree(local_14);
  }
  else {
    pcVar3 = StringDuplicate(&DAT_362274d4);
    local_4 = 1;
    pCVar1 = (CTString *)CTFileName::NoExt(unaff_ESI);
    local_4._0_1_ = 2;
    puVar4 = (undefined4 *)CTString::operator+(pCVar1,(CTString *)local_28);
    local_4._0_1_ = 3;
    pcVar5 = StringDuplicate((char *)*puVar4);
    StringFree(*(char **)unaff_ESI);
    *(char **)unaff_ESI = pcVar5;
    *(undefined4 *)(unaff_ESI + 4) = 0;
    local_4._0_1_ = 2;
    StringFree(local_28[0]);
    local_4 = CONCAT31(local_4._1_3_,1);
    StringFree(local_1c);
  }
  local_4 = 0xffffffff;
  StringFree(pcVar3);
  ExceptionList = local_c;
  return 1;
}

