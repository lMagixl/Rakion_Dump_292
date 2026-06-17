
undefined4 __cdecl FUN_361e5feb(int *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  
  uVar1 = param_1[0x28];
  for (; uVar1 < param_2; param_2 = param_2 - uVar1) {
    FUN_361e571b(param_1,(byte *)param_1[0x27],param_1[0x28]);
  }
  if (param_2 != 0) {
    FUN_361e571b(param_1,(byte *)param_1[0x27],param_2);
  }
  bVar2 = FUN_361e5735(param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    uVar3 = 0;
  }
  else {
    if ((((*(byte *)(param_1 + 0x43) & 0x20) == 0) || ((*(byte *)((int)param_1 + 0x5d) & 2) != 0))
       && (((*(byte *)(param_1 + 0x43) & 0x20) != 0 || ((*(byte *)((int)param_1 + 0x5d) & 4) == 0)))
       ) {
      FUN_361de374(param_1,(undefined4 *)s_CRC_error_3624bc44);
    }
    else {
      FUN_361de399((int)param_1,(undefined4 *)s_CRC_error_3624bc44);
    }
    uVar3 = 1;
  }
  return uVar3;
}

