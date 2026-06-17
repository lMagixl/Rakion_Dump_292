
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36198240(char *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 auStack_54 [6];
  undefined4 uStack_3c;
  char local_28 [2];
  undefined2 local_26;
  CHAR local_24 [13];
  char local_17;
  char local_16;
  undefined4 local_14;
  undefined4 local_4;
  
  pcVar4 = param_1;
  local_4 = DAT_362abd90;
  bVar1 = *param_1;
  param_1 = (char *)(uint)bVar1;
  if (bVar1 == 0) {
    local_28[0] = pcVar4[1];
    local_26 = *(undefined2 *)(pcVar4 + 2);
    uStack_3c = 0x3619827b;
    lstrcpyA(local_24,pcVar4 + 4);
    iVar2 = lstrlenA(local_24);
    local_17 = pcVar4[iVar2 + 5U & 0xffff];
    local_16 = pcVar4[iVar2 + 6U & 0xffff];
    local_14 = *(undefined4 *)(pcVar4 + (iVar2 + 7U & 0xffff));
  }
  iVar2 = *DAT_3637fb00;
  pcVar4 = local_28;
  puVar5 = auStack_54;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  (**(code **)(iVar2 + 0x1c4))(param_1);
  return;
}

