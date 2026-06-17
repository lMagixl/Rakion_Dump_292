
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36198330(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  CHAR local_98;
  undefined4 local_97 [34];
  undefined4 local_c;
  
  local_c = DAT_362abd90;
  local_98 = '\0';
  puVar3 = local_97;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = *param_1;
  lstrcpyA(&local_98,param_1 + 1);
  (**(code **)(*DAT_3637fb00 + 0x1d0))(uVar1,&local_98);
  return;
}

