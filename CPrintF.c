
/* void __cdecl CPrintF(char const *,...) */

void __cdecl CPrintF(char *param_1,...)

{
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x222a0  1102  ?CPrintF@@YAXPBDZZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ee34;
  local_c = ExceptionList;
  if (_pConsole != (CConsole *)0x0) {
    ExceptionList = &local_c;
    local_10 = StringDuplicate(&DAT_36222fa0);
    local_4 = 0;
    CTString::VPrintF((CTString *)&local_10,param_1,&stack0x00000008);
    FUN_36022150(_pConsole,local_10);
    local_4 = 0xffffffff;
    StringFree(local_10);
  }
  ExceptionList = local_c;
  return;
}

