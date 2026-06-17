
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_361995d0(LPCSTR param_1)

{
  CHAR local_88 [132];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  lstrcpyA(local_88,param_1);
  (**(code **)(*DAT_3637fb00 + 0x2b4))(local_88);
  return;
}

