
void __thiscall FUN_361bf730(void *this,float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 4;
  pfVar1 = this;
  do {
    iVar3 = 4;
    pfVar2 = pfVar1;
    do {
      pfVar1 = pfVar2 + 1;
      iVar3 = iVar3 + -1;
      *pfVar2 = *pfVar2 * *param_2;
      pfVar2 = pfVar1;
    } while (iVar3 != 0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *(float *)this;
    this = (float *)((int)this + 4);
    param_1 = param_1 + 1;
  }
  return;
}

