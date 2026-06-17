
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36197d90(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  CHAR local_a8 [16];
  CHAR local_98;
  undefined4 local_97 [34];
  undefined4 local_c;
  
  local_c = DAT_362abd90;
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = '\0';
  local_98 = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  puVar3 = local_97;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  cVar1 = *param_1;
  local_a8[0] = '\0';
  if (cVar1 == '\0') {
    lstrcpyA(local_a8,param_1 + 1);
    iVar2 = lstrlenA(local_a8);
    lstrcpyA(&local_98,param_1 + (iVar2 + 2U & 0xffff));
  }
  (**(code **)(*DAT_3637fb00 + 0x1a4))(cVar1,local_a8,&local_98);
  return;
}

