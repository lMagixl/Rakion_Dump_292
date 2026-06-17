
/* int __cdecl CTDeleteFile(class CTFileName const &) */

int __cdecl CTDeleteFile(CTFileName *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x40710  1114  ?CTDeleteFile@@YAHABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210c7e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = StringDuplicate(&DAT_36222fa0);
  local_10 = 0;
  local_4 = 0;
  lVar2 = ExpandFilePath(2,param_1,(CTFileName *)&local_14);
  pcVar1 = local_14;
  if (lVar2 == 1) {
    iVar3 = remove(local_14);
    local_4 = 0xffffffff;
    StringFree(pcVar1);
    ExceptionList = local_c;
    return (uint)(iVar3 == 0);
  }
  local_4 = 0xffffffff;
  StringFree(local_14);
  ExceptionList = local_c;
  return 0;
}

