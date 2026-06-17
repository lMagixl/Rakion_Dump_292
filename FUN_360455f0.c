
undefined4 * __cdecl FUN_360455f0(undefined4 *param_1)

{
  uint uVar1;
  char *pcVar2;
  int unaff_ESI;
  char local_1c;
  undefined1 local_1b;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621133b;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  local_18 = StringDuplicate(&DAT_36222fa0);
  local_4 = 1;
  uVar1 = FUN_360454c0(unaff_ESI);
  while (uVar1 != 0) {
    local_1c = (char)uVar1;
    local_1b = 0;
    local_14 = StringDuplicate(&local_1c);
    local_4._0_1_ = 2;
    CTString::operator+=((CTString *)&local_18,(CTString *)&local_14);
    local_4 = CONCAT31(local_4._1_3_,1);
    StringFree(local_14);
    uVar1 = FUN_360454c0(unaff_ESI);
  }
  pcVar2 = StringDuplicate(local_18);
  *param_1 = pcVar2;
  local_10 = 1;
  local_4 = local_4 & 0xffffff00;
  StringFree(local_18);
  ExceptionList = local_c;
  return param_1;
}

