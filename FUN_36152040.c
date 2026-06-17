
int __cdecl FUN_36152040(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int local_38;
  int local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  undefined4 local_14;
  
  local_34 = param_4;
  local_38 = param_3;
  local_28 = *param_2;
  local_2c = param_1;
  local_18 = 0;
  local_14 = 0;
  iVar1 = FUN_3614dff0((int)&local_38,s_1_2_1_362a6b04,0x38);
  if (iVar1 == 0) {
    iVar1 = FUN_3614e150(&local_38,4);
    if (iVar1 != 1) {
      FUN_3614f5a0((int)&local_38);
      if ((iVar1 != 2) && ((iVar1 != -5 || (local_34 != 0)))) {
        return iVar1;
      }
      return -3;
    }
    *param_2 = local_24;
    iVar1 = FUN_3614f5a0((int)&local_38);
  }
  return iVar1;
}

