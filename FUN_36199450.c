
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36199450(char *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  char local_18;
  char local_10;
  undefined2 local_c [4];
  undefined4 local_4;
  
  pcVar3 = param_1;
  local_4 = DAT_362abd90;
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    local_10 = param_1[2];
    local_18 = param_1[1];
    bVar2 = param_1[3];
    param_1 = (char *)(uint)bVar2;
    uVar6 = 4;
    if (bVar2 != 0) {
      puVar4 = local_c;
      uVar5 = (uint)bVar2;
      do {
        *puVar4 = *(undefined2 *)(pcVar3 + (uVar6 & 0xffff));
        uVar6 = uVar6 + 2;
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  (**(code **)(*DAT_3637fb00 + 0x2a0))(cVar1,local_18,local_10,param_1,local_c);
  return;
}

