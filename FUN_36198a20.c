
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36198a20(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 local_60 [10];
  char local_38 [52];
  undefined4 local_4;
  
  pcVar3 = param_1;
  local_4 = DAT_362abd90;
  cVar1 = *param_1;
  uVar7 = 0;
  if (cVar1 == '\0') {
    uVar7 = *(uint *)(param_1 + 1);
    uVar5 = 0;
    uVar4 = 5;
    if (uVar7 != 0) {
      param_1 = local_38;
      do {
        local_60[uVar5] = *(undefined4 *)(pcVar3 + (uVar4 & 0xffff));
        pcVar6 = pcVar3 + (uVar4 + 4 & 0xffff);
        cVar2 = pcVar6[4];
        *(undefined4 *)param_1 = *(undefined4 *)pcVar6;
        uVar4 = uVar4 + 9;
        param_1[4] = cVar2;
        uVar5 = uVar5 + 1;
        param_1 = param_1 + 5;
      } while (uVar5 < uVar7);
    }
  }
  (**(code **)(*DAT_3637fb00 + 0x224))(cVar1,uVar7,local_60,local_38);
  return;
}

