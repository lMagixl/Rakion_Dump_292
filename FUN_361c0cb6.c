
int FUN_361c0cb6(int *param_1,LOGFONTA *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *this;
  int iVar2;
  
  if (((param_1 == (int *)0x0) || (param_2 == (LOGFONTA *)0x0)) || (param_3 == (undefined4 *)0x0)) {
    iVar2 = -0x7789f794;
  }
  else {
    puVar1 = (undefined4 *)FUN_361bf99c(0x50);
    if (puVar1 == (undefined4 *)0x0) {
      this = (void *)0x0;
    }
    else {
      this = (void *)FUN_361c9173(puVar1);
    }
    if (this == (void *)0x0) {
      iVar2 = -0x7ff8fff2;
    }
    else {
      iVar2 = FUN_361c8fcd(this,param_1,param_2);
      if (iVar2 < 0) {
        FUN_361c06a6(this,1);
      }
      else {
        *param_3 = this;
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

