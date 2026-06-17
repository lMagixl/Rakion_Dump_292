
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36198fd0(undefined1 *param_1)

{
  undefined1 uVar1;
  CHAR local_88 [132];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  uVar1 = *param_1;
  lstrcpyA(local_88,param_1 + 1);
  (**(code **)(*DAT_3637fb00 + 0x270))(uVar1,local_88);
  return;
}

