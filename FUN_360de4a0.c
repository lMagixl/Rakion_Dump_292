
undefined4 __thiscall FUN_360de4a0(void *this,float *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  pfVar3 = (float *)((int)this + 0xc);
  iVar2 = 1;
  iVar1 = (int)this - (int)param_1;
  while( true ) {
    if (param_2 + *param_1 < *(float *)(iVar1 + (int)param_1)) {
      return 0;
    }
    if (*pfVar3 < *param_1 - param_2) break;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
    pfVar3 = pfVar3 + 1;
    if (3 < iVar2) {
      return 1;
    }
  }
  return 0;
}

