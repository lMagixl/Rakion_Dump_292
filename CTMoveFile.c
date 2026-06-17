
/* int __cdecl CTMoveFile(class CTFileName const &,class CTFileName const &) */

int __cdecl CTMoveFile(CTFileName *param_1,CTFileName *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  char *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x407c0  1115  ?CTMoveFile@@YAHABVCTFileName@@0@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = StringDuplicate(&DAT_36222fa0);
  local_10 = 0;
  local_4 = 0;
  local_1c = StringDuplicate(&DAT_36222fa0);
  local_18 = 0;
  local_4._0_1_ = 1;
  lVar3 = ExpandFilePath(2,param_1,(CTFileName *)&local_14);
  lVar4 = ExpandFilePath(2,param_2,(CTFileName *)&local_1c);
  pcVar2 = local_14;
  pcVar1 = local_1c;
  if ((lVar3 == 1) && (lVar4 == 1)) {
    iVar5 = rename(local_14,local_1c);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(pcVar1);
    local_4 = 0xffffffff;
    StringFree(pcVar2);
    ExceptionList = local_c;
    return (uint)(iVar5 == 0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_1c);
  local_4 = 0xffffffff;
  StringFree(local_14);
  ExceptionList = local_c;
  return 0;
}

