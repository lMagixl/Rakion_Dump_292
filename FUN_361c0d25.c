
int FUN_361c0d25(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *this;
  
  if (param_1 == (int *)0x0) {
    iVar1 = -0x7789f794;
  }
  else if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7789f794;
  }
  else {
    puVar2 = (undefined4 *)FUN_361bf99c(0x20);
    if (puVar2 == (undefined4 *)0x0) {
      this = (void *)0x0;
    }
    else {
      this = (void *)FUN_361c9c33(puVar2);
    }
    if (this == (void *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
    else {
      iVar1 = FUN_361c91db(this,param_1);
      if (iVar1 < 0) {
        FUN_361c06c2(this,1);
      }
      else {
        *param_2 = this;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

