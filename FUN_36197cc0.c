
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36197cc0(undefined1 *param_1)

{
  LPCSTR lpString2;
  CHAR local_28 [36];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  local_28[0x14] = '\0';
  local_28[0x15] = '\0';
  local_28[0x16] = '\0';
  local_28[0x17] = '\0';
  local_28[0x18] = '\0';
  local_28[0x19] = '\0';
  local_28[0x1a] = '\0';
  local_28[0x1b] = '\0';
  local_28[0x1c] = '\0';
  local_28[0x1d] = '\0';
  local_28[0x1e] = '\0';
  local_28[0x1f] = '\0';
  local_28[0x20] = '\0';
  lpString2 = param_1 + 1;
  local_28[0] = '\0';
  param_1 = (undefined1 *)(uint)(byte)*param_1;
  lstrcpyA(local_28,lpString2);
  lstrlenA(local_28);
  (**(code **)(*DAT_3637fb00 + 0x19c))(param_1,local_28);
  return;
}

