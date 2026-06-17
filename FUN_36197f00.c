
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36197f00(undefined1 *param_1)

{
  LPCSTR lpString2;
  undefined1 *puVar1;
  int iVar2;
  CHAR local_28 [20];
  CHAR local_14 [16];
  undefined4 local_4;
  
  puVar1 = param_1;
  lpString2 = param_1 + 1;
  local_4 = DAT_362abd90;
  param_1 = (undefined1 *)(uint)(byte)*param_1;
  lstrcpyA(local_28,lpString2);
  iVar2 = lstrlenA(local_28);
  lstrcpyA(local_14,puVar1 + (iVar2 + 2U & 0xffff));
  (**(code **)(*DAT_3637fb00 + 0x1ac))(param_1,local_28,local_14);
  return;
}

