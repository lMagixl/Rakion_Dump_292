
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36197d40(undefined1 *param_1)

{
  LPCSTR lpString2;
  CHAR local_14 [16];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  lpString2 = param_1 + 1;
  param_1 = (undefined1 *)(uint)(byte)*param_1;
  lstrcpyA(local_14,lpString2);
  (**(code **)(*DAT_3637fb00 + 0x1a0))(param_1,local_14);
  return;
}

