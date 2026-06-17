
/* int __cdecl REG_SetString(class CTString const &,class CTString const &) */

int __cdecl REG_SetString(CTString *param_1,CTString *param_2)

{
  BYTE BVar1;
  BYTE *lpData;
  char *pcVar2;
  char *pcVar3;
  LSTATUS LVar4;
  BYTE *pBVar5;
  char *local_20;
  char *local_1c;
  HKEY local_18;
  HKEY local_14;
  DWORD local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x322b0  2900  ?REG_SetString@@YAHABVCTString@@0@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fb2f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  local_20 = StringDuplicate(&DAT_36222fa0);
  local_4._0_1_ = 1;
  FUN_36031ce0(&local_20,(undefined4 *)param_1,(int *)&local_14,&local_1c);
  pcVar3 = local_1c;
  LVar4 = RegCreateKeyExA(local_14,local_1c,0,&DAT_362256c0,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,
                          &local_18,&local_10);
  pcVar2 = local_20;
  if (LVar4 != 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_20);
    local_4 = 0xffffffff;
    StringFree(pcVar3);
    ExceptionList = local_c;
    return 0;
  }
  lpData = *(BYTE **)param_2;
  pBVar5 = lpData;
  do {
    BVar1 = *pBVar5;
    pBVar5 = pBVar5 + 1;
  } while (BVar1 != '\0');
  LVar4 = RegSetValueExA(local_18,local_20,0,1,lpData,(int)pBVar5 - (int)(lpData + 1));
  RegCloseKey(local_18);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(pcVar2);
  local_4 = 0xffffffff;
  StringFree(pcVar3);
  ExceptionList = local_c;
  return (uint)(LVar4 == 0);
}

