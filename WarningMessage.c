
/* void __cdecl WarningMessage(char const *,...) */

void __cdecl WarningMessage(char *param_1,...)

{
  char *lpText;
  char *lpCaption;
  UINT uType;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x25bc0  3945  ?WarningMessage@@YAXPBDZZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f1ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  CTString::VPrintF((CTString *)&local_10,param_1,&stack0x00000008);
  CPrintF(&DAT_36224114,local_10);
  lpText = local_10;
  if (DAT_362b91ec == 0) {
    uType = 0x12030;
    lpCaption = Translate(s_ETRSWarning_36224118,4);
    MessageBoxA((HWND)0x0,lpText,lpCaption,uType);
  }
  local_4 = 0xffffffff;
  StringFree(local_10);
  ExceptionList = local_c;
  return;
}

