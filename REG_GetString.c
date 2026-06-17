
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* int __cdecl REG_GetString(class CTString const &,class CTString &) */

int __cdecl REG_GetString(CTString *param_1,CTString *param_2)

{
  char *pcVar1;
  LSTATUS LVar2;
  uint uVar3;
  HKEY pHVar4;
  char *pcVar5;
  char *local_428;
  HKEY local_424;
  HKEY local_420;
  char *local_41c;
  DWORD local_418;
  DWORD local_414;
  BYTE local_410 [1024];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x31fa0  2899  ?REG_GetString@@YAHABVCTString@@AAV1@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fafb;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  local_41c = StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  local_428 = StringDuplicate(&DAT_36222fa0);
  local_4._0_1_ = 1;
  FUN_36031ce0(&local_428,(undefined4 *)param_1,(int *)&local_424,&local_41c);
  pcVar1 = local_41c;
  LVar2 = RegOpenKeyExA(local_424,local_41c,0,0x20019,&local_420);
  pcVar5 = local_428;
  if (LVar2 == 0) {
    local_418 = 0x400;
    LVar2 = RegQueryValueExA(local_420,local_428,(LPDWORD)0x0,&local_414,local_410,&local_418);
    if (LVar2 == 0) {
      RegCloseKey(local_420);
      pHVar4 = (HKEY)StringDuplicate((char *)local_410);
      local_4._0_1_ = 2;
      local_424 = pHVar4;
      pcVar5 = StringDuplicate((char *)pHVar4);
      StringFree(*(char **)param_2);
      *(char **)param_2 = pcVar5;
      local_4._0_1_ = 1;
      StringFree((char *)pHVar4);
      local_4 = (uint)local_4._1_3_ << 8;
      StringFree(local_428);
      local_4 = 0xffffffff;
      StringFree(pcVar1);
    }
    else {
      local_4 = (uint)local_4._1_3_ << 8;
      StringFree(pcVar5);
      local_4 = 0xffffffff;
      StringFree(pcVar1);
    }
    uVar3 = (uint)(LVar2 == 0);
  }
  else {
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_428);
    local_4 = 0xffffffff;
    StringFree(pcVar1);
    uVar3 = 0;
  }
  ExceptionList = local_c;
  return uVar3;
}

