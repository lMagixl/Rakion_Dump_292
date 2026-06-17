
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36197ba0(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 local_34;
  CHAR local_24 [16];
  CHAR local_14 [16];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  local_24[1] = '\0';
  local_24[2] = '\0';
  local_24[3] = '\0';
  local_24[4] = '\0';
  local_24[5] = '\0';
  local_24[6] = '\0';
  local_24[7] = '\0';
  local_24[8] = '\0';
  local_24[9] = '\0';
  local_24[10] = '\0';
  local_24[0xb] = '\0';
  local_24[0xc] = '\0';
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
  local_14[4] = '\0';
  local_14[5] = '\0';
  local_14[6] = '\0';
  local_14[7] = '\0';
  local_14[8] = '\0';
  uVar4 = 0;
  local_14[9] = '\0';
  local_14[10] = '\0';
  local_14[0xb] = '\0';
  local_14[0xc] = '\0';
  cVar1 = *param_1;
  uVar7 = 0;
  uVar8 = 0;
  uVar6 = 0;
  uVar5 = 0;
  cVar2 = '\0';
  local_34 = 0;
  local_24[0] = '\0';
  local_14[0] = '\0';
  if (cVar1 == '\0') {
    cVar2 = param_1[5];
    uVar8 = *(undefined4 *)(param_1 + 1);
    lstrcpyA(local_14,param_1 + 6);
    iVar3 = lstrlenA(local_14);
    uVar6 = *(undefined4 *)(param_1 + (iVar3 + 7U & 0xffff));
    uVar7 = *(undefined2 *)(param_1 + (iVar3 + 0xbU & 0xffff));
    uVar5 = *(undefined4 *)(param_1 + (iVar3 + 0xdU & 0xffff));
    uVar4 = *(undefined4 *)(param_1 + (iVar3 + 0x11U & 0xffff));
    local_34 = *(undefined4 *)(param_1 + (iVar3 + 0x15U & 0xffff));
    lstrcpyA(local_24,param_1 + (iVar3 + 0x19U & 0xffff));
    lstrlenA(local_24);
  }
  (**(code **)(*DAT_3637fb00 + 0x198))
            (cVar1,uVar8,cVar2,local_14,uVar6,uVar7,uVar5,uVar4,local_34,local_24);
  return;
}

