
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_361998c0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte local_10 [12];
  undefined4 local_4;
  
  pbVar5 = param_1;
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  local_10[4] = 0;
  local_10[5] = 0;
  local_10[6] = 0;
  local_10[7] = 0;
  local_10[8] = 0;
  local_10[9] = 0;
  bVar1 = *param_1;
  local_4 = DAT_362abd90;
  iVar6 = 0;
  bVar2 = 0;
  bVar3 = 0;
  bVar4 = 0;
  local_10[0] = 0;
  param_1 = (byte *)(uint)bVar1;
  if (bVar1 < 6) {
    bVar2 = pbVar5[1];
    bVar3 = pbVar5[2];
    bVar4 = pbVar5[3];
    uVar8 = 4;
    if (bVar4 != 0) {
      do {
        uVar7 = uVar8 & 0xffff;
        uVar8 = uVar8 + 1;
        local_10[iVar6] = pbVar5[uVar7];
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(uint)bVar4);
    }
  }
  (**(code **)(*DAT_3637fb00 + 0x2b8))(param_1,bVar2,bVar3,bVar4,local_10);
  return;
}

