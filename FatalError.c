
/* void __cdecl FatalError(char const *,...) */

void __cdecl FatalError(char *param_1,...)

{
  char *pcVar1;
  char *lpCaption;
  UINT uType;
  char *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x25ac0  1608  ?FatalError@@YAXPBDZZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f1b8;
  pvStack_c = ExceptionList;
  if (DAT_362b91f0 == 0) {
    DAT_362b91f0 = 1;
    ExceptionList = &pvStack_c;
    local_10 = StringDuplicate(&DAT_36222fa0);
    local_4 = 0;
    CTString::VPrintF((CTString *)&local_10,param_1,&stack0x00000008);
    FUN_36060580();
    if (DAT_362b2a98 != 0) {
      ShowWindow(DAT_362b2a94,6);
      ShowWindow(DAT_362b2a94,0);
    }
    if (_pConsole != (CConsole *)0x0) {
      pcVar1 = Translate(s_ETRSFatalError__362240f0,4);
      CPutString(pcVar1);
      CPutString(local_10);
      FUN_36021f90((int)_pConsole);
    }
    pcVar1 = local_10;
    uType = 0x12010;
    lpCaption = Translate(s_ETRSFatal_Error_36224104,4);
    MessageBoxA((HWND)0x0,pcVar1,lpCaption,uType);
    DAT_362b91f0 = 0;
    FUN_36084650();
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}

