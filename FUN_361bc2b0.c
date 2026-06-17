
void __thiscall FUN_361bc2b0(void *this,undefined4 *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  
  pfVar1 = (float *)((int)this + 4);
  iVar3 = 3;
  pfVar2 = pfVar1;
  do {
    iVar3 = iVar3 + -1;
    *pfVar2 = *(float *)((param_2 - (int)this) + (int)pfVar2) + *pfVar2;
    pfVar2 = pfVar2 + 1;
  } while (iVar3 != 0);
  param_1[1] = *pfVar1;
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  param_1[1] = *pfVar1;
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  *param_1 = &PTR_FUN_3623dc04;
  return;
}

