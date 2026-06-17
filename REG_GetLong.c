
/* int __cdecl REG_GetLong(class CTString const &,unsigned long &) */

int __cdecl REG_GetLong(CTString *param_1,ulong *param_2)

{
  char *pcVar1;
  char *pcVar2;
  LSTATUS LVar3;
  char *local_28;
  char *local_24;
  HKEY local_20;
  HKEY local_1c;
  DWORD local_18;
  ulong local_14;
  DWORD local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x32160  2898  ?REG_GetLong@@YAHABVCTString@@AAK@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fb15;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_24 = StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  local_28 = StringDuplicate(&DAT_36222fa0);
  local_4._0_1_ = 1;
  FUN_36031ce0(&local_28,(undefined4 *)param_1,(int *)&local_1c,&local_24);
  pcVar2 = local_24;
  LVar3 = RegOpenKeyExA(local_1c,local_24,0,0x20019,&local_20);
  pcVar1 = local_28;
  if (LVar3 != 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_28);
    local_4 = 0xffffffff;
    StringFree(pcVar2);
    ExceptionList = local_c;
    return 0;
  }
  local_18 = 4;
  LVar3 = RegQueryValueExA(local_20,local_28,(LPDWORD)0x0,&local_10,(LPBYTE)&local_14,&local_18);
  if (LVar3 != 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(pcVar1);
    local_4 = 0xffffffff;
    StringFree(pcVar2);
    ExceptionList = local_c;
    return 0;
  }
  RegCloseKey(local_20);
  *param_2 = local_14;
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(pcVar1);
  local_4 = 0xffffffff;
  StringFree(pcVar2);
  ExceptionList = local_c;
  return 1;
}

