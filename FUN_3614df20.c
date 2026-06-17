
undefined4 __cdecl FUN_3614df20(int param_1,uint param_2,char *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != s_1_2_1_362a67e8[0])) || (param_4 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(code **)(param_1 + 0x20) = FUN_36152130;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(code **)(param_1 + 0x24) = FUN_36152150;
    }
    iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x1ba8);
    if (iVar1 == 0) {
      return 0xfffffffc;
    }
    *(int *)(param_1 + 0x1c) = iVar1;
    if ((int)param_2 < 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
      param_2 = -param_2;
    }
    else {
      *(int *)(iVar1 + 8) = ((int)param_2 >> 4) + 1;
      if ((int)param_2 < 0x30) {
        param_2 = param_2 & 0xf;
      }
    }
    if ((7 < (int)param_2) && ((int)param_2 < 0x10)) {
      *(uint *)(iVar1 + 0x1c) = param_2;
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      uVar2 = FUN_3614ded0(param_1);
      return uVar2;
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return 0xfffffffe;
}

