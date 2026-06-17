
/* void __cdecl InfoMessage(char const *,...) */

void __cdecl InfoMessage(char *param_1,...)

{
  char *lpText;
  char *lpCaption;
  UINT uType;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x25c60  2285  ?InfoMessage@@YAXPBDZZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f1dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  CTString::VPrintF((CTString *)&local_10,param_1,&stack0x00000008);
  CPrintF(&DAT_36224124,local_10);
  lpText = local_10;
  uType = 0x12040;
  lpCaption = Translate(s_ETRSInformation_36224128,4);
  MessageBoxA((HWND)0x0,lpText,lpCaption,uType);
  local_4 = 0xffffffff;
  StringFree(local_10);
  ExceptionList = local_c;
  return;
}

