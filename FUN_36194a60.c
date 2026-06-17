
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl FUN_36194a60(int param_1,uint *param_2,uint param_3,undefined4 *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  uVar1 = param_3 & 0x8000000f;
  bVar4 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar4 = (uVar1 - 1 | 0xfffffff0) == 0xffffffff;
  }
  if (bVar4) {
    iVar2 = (int)(param_3 + ((int)param_3 >> 0x1f & 0xfU)) >> 4;
    if (param_5 < iVar2 * 0xc) {
      return param_5 & 0xffffff00;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        uVar1 = FUN_36193670(param_2,&local_14,param_1);
        if (((short)uVar1 != 1) || (uVar1 = param_1, local_14 != *(uint *)(param_1 + 0x20c))) {
          return uVar1 & 0xffffff00;
        }
        *param_4 = local_10;
        iVar3 = iVar3 + 1;
        param_4[1] = local_c;
        param_2 = param_2 + 4;
        param_4[2] = local_8;
        param_5 = local_c;
        param_4 = param_4 + 3;
      } while (iVar3 < iVar2);
    }
    return CONCAT31((int3)((uint)param_5 >> 8),1);
  }
  return param_3 & 0xffffff00;
}

