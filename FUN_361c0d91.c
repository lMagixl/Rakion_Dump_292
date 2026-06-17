
int FUN_361c0d91(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  void *this;
  
  if (param_1 == (int *)0x0) {
    iVar1 = -0x7789f794;
  }
  else if (param_7 == (undefined4 *)0x0) {
    iVar1 = -0x7789f794;
  }
  else {
    puVar2 = (undefined4 *)FUN_361bf99c(0x54);
    if (puVar2 == (undefined4 *)0x0) {
      this = (void *)0x0;
    }
    else {
      this = (void *)FUN_361ca0e7(puVar2);
    }
    if (this == (void *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
    else {
      iVar1 = FUN_361c9c51(this,param_1,param_2,param_3,param_4,param_5,param_6);
      if (iVar1 < 0) {
        FUN_361c06de(this,1);
      }
      else {
        *param_7 = this;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

