
int __cdecl FUN_36046060(undefined4 *param_1,undefined4 *param_2)

{
  CTString *this;
  CTString *this_00;
  char *pcVar1;
  CTString *pCVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  char *local_20;
  char *local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211445;
  local_c = ExceptionList;
  this = (CTString *)*param_1;
  this_00 = (CTString *)*param_2;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(s_Mods__36227bb0);
  local_4 = 0;
  pCVar2 = (CTString *)CTString::operator+((CTString *)&_fnmApplicationPath,(CTString *)&local_20);
  local_4._0_1_ = 1;
  iVar3 = CTString::HasPrefix(this,pCVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_20);
  local_4 = 0xffffffff;
  StringFree(pcVar1);
  local_14 = CTString::HasPrefix(this,(CTString *)&_fnmCDPath);
  pcVar1 = StringDuplicate(s_Mods__36227bb8);
  local_4 = 2;
  pCVar2 = (CTString *)CTString::operator+((CTString *)&_fnmCDPath,(CTString *)&local_20);
  local_4._0_1_ = 3;
  local_18 = CTString::HasPrefix(this,pCVar2);
  local_4 = CONCAT31(local_4._1_3_,2);
  StringFree(local_20);
  local_4 = 0xffffffff;
  StringFree(pcVar1);
  pcVar1 = StringDuplicate(s_Mods__36227bc0);
  local_4 = 4;
  pCVar2 = (CTString *)CTString::operator+((CTString *)&_fnmApplicationPath,(CTString *)&local_20);
  local_4._0_1_ = 5;
  local_10 = CTString::HasPrefix(this_00,pCVar2);
  local_4 = CONCAT31(local_4._1_3_,4);
  StringFree(local_20);
  local_4 = 0xffffffff;
  StringFree(pcVar1);
  local_20 = (char *)CTString::HasPrefix(this_00,(CTString *)&_fnmCDPath);
  pcVar1 = StringDuplicate(s_Mods__36227bc8);
  local_4 = 6;
  pCVar2 = (CTString *)CTString::operator+((CTString *)&_fnmCDPath,(CTString *)&local_1c);
  local_4._0_1_ = 7;
  iVar4 = CTString::HasPrefix(this_00,pCVar2);
  local_4 = CONCAT31(local_4._1_3_,6);
  StringFree(local_1c);
  local_4 = 0xffffffff;
  StringFree(pcVar1);
  if (iVar3 == 0) {
    if (local_18 == 0) {
      bVar5 = local_14 == 0;
    }
    else {
      bVar5 = 2;
    }
  }
  else {
    bVar5 = 3;
  }
  if (local_10 == 0) {
    if (iVar4 == 0) {
      bVar6 = local_20 == (char *)0x0;
    }
    else {
      bVar6 = 2;
    }
  }
  else {
    bVar6 = 3;
  }
  if (bVar5 < bVar6) {
    ExceptionList = local_c;
    return 1;
  }
  if (bVar6 < bVar5) {
    ExceptionList = local_c;
    return -1;
  }
  iVar3 = _stricmp(*(char **)this,*(char **)this_00);
  ExceptionList = local_c;
  return -iVar3;
}

