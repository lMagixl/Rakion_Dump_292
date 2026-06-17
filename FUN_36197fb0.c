
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36197fb0(char *param_1)

{
  byte bVar1;
  char *pcVar2;
  undefined4 uVar3;
  CHAR local_14 [16];
  undefined4 local_4;
  
  pcVar2 = param_1;
  local_4 = DAT_362abd90;
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
  local_14[4] = '\0';
  local_14[5] = '\0';
  local_14[6] = '\0';
  local_14[7] = '\0';
  local_14[8] = '\0';
  local_14[9] = '\0';
  local_14[10] = '\0';
  local_14[0xb] = '\0';
  local_14[0xc] = '\0';
  bVar1 = *param_1;
  uVar3 = 0;
  local_14[0] = '\0';
  param_1 = (char *)(uint)bVar1;
  if (bVar1 == 0) {
    uVar3 = *(undefined4 *)(pcVar2 + 1);
    lstrcpyA(local_14,pcVar2 + 5);
    lstrlenA(local_14);
  }
  (**(code **)(*DAT_3637fb00 + 0x1b4))(param_1,uVar3,local_14);
  return;
}

