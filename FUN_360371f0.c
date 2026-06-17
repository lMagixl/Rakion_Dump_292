
undefined4 * __cdecl FUN_360371f0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_28;
  undefined1 local_27;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210139;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  local_24 = StringDuplicate(&DAT_36225bbc);
  pcVar2 = *(char **)param_2;
  local_27 = 0;
  cVar1 = *pcVar2;
  local_4 = 1;
  while (cVar1 != '\0') {
    switch(cVar1) {
    case '\n':
      param_2 = StringDuplicate(&DAT_36225bc0);
      local_4 = CONCAT31(local_4._1_3_,2);
      CTString::operator+=((CTString *)&local_24,(CTString *)&param_2);
      pcVar3 = param_2;
      break;
    default:
      local_28 = cVar1;
      local_14 = StringDuplicate(&local_28);
      local_4 = CONCAT31(local_4._1_3_,6);
      CTString::operator+=((CTString *)&local_24,(CTString *)&local_14);
      pcVar3 = local_14;
      break;
    case '\r':
      local_20 = StringDuplicate(&DAT_36225bc4);
      local_4 = CONCAT31(local_4._1_3_,3);
      CTString::operator+=((CTString *)&local_24,(CTString *)&local_20);
      pcVar3 = local_20;
      break;
    case '\"':
      local_18 = StringDuplicate(&DAT_36225bcc);
      local_4 = CONCAT31(local_4._1_3_,5);
      CTString::operator+=((CTString *)&local_24,(CTString *)&local_18);
      pcVar3 = local_18;
      break;
    case '\\':
      local_1c = StringDuplicate(&DAT_36225bc8);
      local_4 = CONCAT31(local_4._1_3_,4);
      CTString::operator+=((CTString *)&local_24,(CTString *)&local_1c);
      pcVar3 = local_1c;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    StringFree(pcVar3);
    pcVar3 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar3;
  }
  pcVar2 = StringDuplicate(local_24);
  *param_1 = pcVar2;
  local_10 = 1;
  local_4 = local_4 & 0xffffff00;
  StringFree(local_24);
  ExceptionList = local_c;
  return param_1;
}

