
undefined4 * __cdecl FUN_360846f0(undefined4 *param_1,char *param_2)

{
  CTString *this;
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  CTString *extraout_ECX;
  CTString *extraout_ECX_00;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_36211fd1;
  local_c = ExceptionList;
  local_10 = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  local_14 = StringDuplicate(&DAT_36222fa0);
  local_4._0_1_ = 2;
  local_18 = StringDuplicate(&DAT_3622b584);
  local_4 = CONCAT31(local_4._1_3_,3);
  pcVar1 = strchr(param_2,0x20);
  pcVar3 = param_2;
  this = extraout_ECX;
  while (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
    CTString::PrintF(this,(char *)&local_14,s__s_3622b588,pcVar3);
    CTString::operator+=((CTString *)&local_18,(CTString *)&local_14);
    pcVar3 = pcVar1 + 1;
    *pcVar1 = ' ';
    pcVar1 = strchr(pcVar3,0x20);
    this = extraout_ECX_00;
  }
  iVar2 = CTString::operator==((CTString *)&local_18,&DAT_3622b590);
  if (iVar2 != 0) {
    pcVar3 = StringDuplicate(s_none_3622b594);
    StringFree(local_18);
    local_18 = pcVar3;
  }
  pcVar3 = StringDuplicate(local_18);
  *param_1 = pcVar3;
  local_10 = 1;
  local_4._0_1_ = 2;
  StringFree(local_18);
  local_4._0_1_ = 1;
  StringFree(local_14);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(param_2);
  ExceptionList = local_c;
  return param_1;
}

