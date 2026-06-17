
/* int __cdecl IFeel_LoadFile(class CTFileName) */

int __cdecl IFeel_LoadFile(char *param_1,undefined4 param_2)

{
  int iVar1;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x27550  2273  ?IFeel_LoadFile@@YAHVCTFileName@@@Z */
  puStack_8 = &LAB_3620f40b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  local_14 = StringDuplicate(&DAT_36222fa0);
  local_10 = 0;
  local_4._0_1_ = 1;
  ExpandFilePath(0x80000001,(CTFileName *)&param_1,(CTFileName *)&local_14);
  if (DAT_362b931c == (code *)0x0) {
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_14);
    local_4 = 0xffffffff;
    StringFree(param_1);
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = (*DAT_362b931c)();
  if (iVar1 != 0) {
    CPrintF(s_IFeel_project_file___s__loaded_362244c8,param_1,param_2);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_14);
    local_4 = 0xffffffff;
    StringFree(param_1);
    ExceptionList = local_c;
    return 1;
  }
  CPrintF(s_Error_loading_IFeel_project_file_362244e8,param_1,param_2);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_14);
  local_4 = 0xffffffff;
  StringFree(param_1);
  ExceptionList = local_c;
  return 0;
}

