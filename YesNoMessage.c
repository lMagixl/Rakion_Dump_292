
/* int __cdecl YesNoMessage(char const *,...) */

int __cdecl YesNoMessage(char *param_1,...)

{
  char *lpText;
  char *lpCaption;
  int iVar1;
  UINT uType;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x25d00  4050  ?YesNoMessage@@YAHPBDZZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f1ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  CTString::VPrintF((CTString *)&local_10,param_1,&stack0x00000008);
  CPrintF(&DAT_36224138,local_10);
  lpText = local_10;
  uType = 0x12024;
  lpCaption = Translate(s_ETRSQuestion_3622413c,4);
  iVar1 = MessageBoxA((HWND)0x0,lpText,lpCaption,uType);
  local_4 = 0xffffffff;
  StringFree(local_10);
  ExceptionList = local_c;
  return (uint)(iVar1 == 6);
}

