
void __thiscall FUN_3605ce90(void *this,undefined4 *param_1,double *param_2)

{
  int iVar1;
  double *pdVar2;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_50 = *(double *)((int)this + 0x10) * param_2[6] +
             *param_2 * *(double *)this + param_2[3] * *(double *)((int)this + 8);
  local_48 = param_2[4] * *(double *)((int)this + 8) +
             param_2[1] * *(double *)this + param_2[7] * *(double *)((int)this + 0x10);
  local_40 = *(double *)this * param_2[2] +
             param_2[8] * *(double *)((int)this + 0x10) + param_2[5] * *(double *)((int)this + 8);
  local_38 = *(double *)((int)this + 0x18) * *param_2 +
             param_2[3] * *(double *)((int)this + 0x20) + *(double *)((int)this + 0x28) * param_2[6]
  ;
  local_30 = *(double *)((int)this + 0x18) * param_2[1] +
             param_2[4] * *(double *)((int)this + 0x20) + param_2[7] * *(double *)((int)this + 0x28)
  ;
  local_28 = param_2[5] * *(double *)((int)this + 0x20) +
             param_2[8] * *(double *)((int)this + 0x28) + *(double *)((int)this + 0x18) * param_2[2]
  ;
  local_20 = *(double *)((int)this + 0x30) * *param_2 +
             *(double *)((int)this + 0x40) * param_2[6] + param_2[3] * *(double *)((int)this + 0x38)
  ;
  local_18 = *(double *)((int)this + 0x30) * param_2[1] +
             *(double *)((int)this + 0x38) * param_2[4] + param_2[7] * *(double *)((int)this + 0x40)
  ;
  local_10 = param_2[8] * *(double *)((int)this + 0x40) +
             param_2[5] * *(double *)((int)this + 0x38) + *(double *)((int)this + 0x30) * param_2[2]
  ;
  pdVar2 = &local_50;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    param_1 = param_1 + 1;
  }
  return;
}

