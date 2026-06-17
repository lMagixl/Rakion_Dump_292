
/* int __cdecl FileExistsForWriting(class CTFileName const &) */

int __cdecl FileExistsForWriting(CTFileName *param_1)

{
  char *pcVar1;
  int iVar2;
  FILE *_File;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x40420  1614  ?FileExistsForWriting@@YAHABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210c40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = CTString::operator==((CTString *)param_1,&DAT_36227499);
  if (iVar2 == 0) {
    local_14 = StringDuplicate(&DAT_36222fa0);
    local_10 = 0;
    local_4 = 0;
    ExpandFilePath(2,param_1,(CTFileName *)&local_14);
    pcVar1 = local_14;
    _File = fopen(local_14,&DAT_3622749c);
    if (_File != (FILE *)0x0) {
      fclose(_File);
      local_4 = 0xffffffff;
      StringFree(pcVar1);
      ExceptionList = local_c;
      return 1;
    }
    local_4 = 0xffffffff;
    StringFree(pcVar1);
  }
  ExceptionList = local_c;
  return 0;
}

