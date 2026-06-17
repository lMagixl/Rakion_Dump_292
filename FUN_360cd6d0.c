
undefined4 __thiscall FUN_360cd6d0(void *this,int param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  
  iVar1 = 1;
  pfVar2 = (float *)(param_1 + 0xc);
  iVar3 = param_1 - (int)this;
  while( true ) {
    if (param_2 + *(float *)((int)this + 0xc) < *(float *)(iVar3 + (int)this)) {
      return 0;
    }
    if (*pfVar2 < *(float *)this - param_2) break;
    iVar1 = iVar1 + 1;
    this = (void *)((int)this + 4);
    pfVar2 = pfVar2 + 1;
    if (3 < iVar1) {
      return 1;
    }
  }
  return 0;
}

