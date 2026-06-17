
undefined4 __thiscall FUN_360cd680(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  pfVar3 = (float *)((int)this + 0xc);
  iVar2 = 1;
  iVar1 = (int)this - (int)param_1;
  while( true ) {
    if (*(float *)(iVar1 + (int)param_1) < *param_1) {
      return 0;
    }
    if (param_1[3] < *pfVar3) break;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
    pfVar3 = pfVar3 + 1;
    if (3 < iVar2) {
      return 1;
    }
  }
  return 0;
}

