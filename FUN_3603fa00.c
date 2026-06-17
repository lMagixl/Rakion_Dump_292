
undefined4 __cdecl FUN_3603fa00(char *param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  char *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210b9d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  local_14 = StringDuplicate(&DAT_36222fa0);
  local_4._0_1_ = 1;
  local_1c = StringDuplicate(*(char **)param_1);
  local_4._0_1_ = 2;
  CTString::ToLower((CTString *)&local_1c);
  do {
    local_10 = StringDuplicate(&DAT_362274fc);
    local_4._0_1_ = 3;
    param_1 = StringDuplicate(&DAT_36227500);
    local_4._0_1_ = 4;
    iVar2 = CTString::ReplaceSubstr
                      ((CTString *)&local_1c,(CTString *)&param_1,(CTString *)&local_10);
    local_4._0_1_ = 3;
    StringFree(param_1);
    local_4._0_1_ = 2;
    StringFree(local_10);
  } while (iVar2 != 0);
  param_1 = StringDuplicate(&DAT_36227504);
  local_4._0_1_ = 5;
  lVar3 = CTString::FindSubstr((CTString *)&local_1c,(CTString *)&param_1);
  local_4._0_1_ = 2;
  StringFree(param_1);
  if (lVar3 == -1) {
    local_4._0_1_ = 1;
    StringFree(local_1c);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_14);
  }
  else {
    CTString::Split((CTString *)&local_1c,lVar3,(CTString *)&local_18,(CTString *)&local_14);
    param_1 = StringDuplicate(&DAT_36227508);
    local_4._0_1_ = 6;
    CTString::operator+=((CTString *)&local_18,(CTString *)&param_1);
    local_4._0_1_ = 2;
    StringFree(param_1);
    iVar2 = CTString::Matches((CTString *)&local_18,s_datasetup_xfs_36227510);
    local_4._0_1_ = 1;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 1;
    if (iVar2 != 0) {
      StringFree(local_1c);
      local_4 = (uint)local_4._1_3_ << 8;
      StringFree(local_14);
      local_4 = 0xffffffff;
      StringFree(local_18);
      ExceptionList = local_c;
      return 1;
    }
    local_4._0_1_ = uVar1;
    StringFree(local_1c);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_14);
  }
  local_4 = 0xffffffff;
  StringFree(local_18);
  ExceptionList = local_c;
  return 0;
}

