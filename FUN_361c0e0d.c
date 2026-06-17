
int FUN_361c0e0d(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == (int *)0x0) {
    iVar1 = -0x7789f794;
  }
  else if (param_6 == (undefined4 *)0x0) {
    iVar1 = -0x7789f794;
  }
  else {
    puVar2 = (undefined4 *)FUN_361bf99c(0x494);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_361cb85d(puVar2);
    }
    if (puVar2 == (undefined4 *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
    else {
      iVar1 = FUN_361ca12d(puVar2,param_1,param_2,1,param_3,param_4,param_5);
      if (iVar1 < 0) {
        FUN_361c06fa(puVar2,1);
      }
      else {
        *param_6 = puVar2;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

