
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36197e80(undefined1 *param_1)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  int iVar3;
  CHAR local_14 [16];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  uVar2 = *param_1;
  lstrcpyA(local_14,param_1 + 1);
  iVar3 = lstrlenA(local_14);
  puVar1 = (undefined2 *)(param_1 + (iVar3 + 3U & 0xffff));
  param_1 = (undefined1 *)(uint)(byte)param_1[iVar3 + 2U & 0xffff];
  (**(code **)(*DAT_3637fb00 + 0x1b8))(uVar2,local_14,param_1,*puVar1);
  return;
}

