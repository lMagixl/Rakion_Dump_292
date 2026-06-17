
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl FUN_361949a0(int param_1,undefined4 *param_2,int param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  uVar1 = param_3 / 0xc;
  uVar2 = uVar1;
  if ((param_3 % 0xc == 0) && (uVar2 = param_5, (int)(uVar1 * 0x10) <= param_5)) {
    local_14 = *(uint *)(param_1 + 0x20c);
    iVar3 = 0;
    uVar2 = param_1;
    if (0 < (int)uVar1) {
      do {
        local_10 = *param_2;
        local_c = param_2[1];
        local_8 = param_2[2];
        uVar2 = FUN_36192560(&local_14,param_4,param_1);
        if ((short)uVar2 != 1) {
          return uVar2 & 0xffffff00;
        }
        iVar3 = iVar3 + 1;
        param_2 = param_2 + 3;
        param_4 = param_4 + 4;
      } while (iVar3 < (int)uVar1);
    }
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}

