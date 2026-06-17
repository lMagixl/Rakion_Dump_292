
void __cdecl FUN_36033780(CTStream *param_1,CTextureObject *param_2)

{
  char *pcVar1;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fd66;
  local_c = ExceptionList;
  if (*(int *)(param_2 + 0x14) == 0) {
    ExceptionList = &local_c;
    pcVar1 = StringDuplicate(s_ETRSCannot_find_substitution_for_362258a8 + 0x26);
    local_4 = 0;
    local_14 = StringDuplicate(pcVar1);
    local_10 = 0;
    local_4._0_1_ = 1;
    operator<<(param_1,(CTFileName *)&local_14);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_14);
    local_4 = 0xffffffff;
    StringFree(pcVar1);
  }
  else {
    ExceptionList = &local_c;
    operator<<(param_1,(CTFileName *)(*(int *)(param_2 + 0x14) + 0xc));
  }
  CTextureObject::Write_t(param_2,param_1);
  ExceptionList = local_c;
  return;
}

