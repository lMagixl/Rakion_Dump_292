
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_361983a0(LPCSTR param_1)

{
  CHAR local_30 [44];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  lstrcpyA(local_30,param_1);
  (**(code **)(*DAT_3637fb00 + 0x1d4))(local_30);
  return;
}

