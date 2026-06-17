
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * __thiscall FUN_3604f9e0(void *this,undefined4 *param_1,double *param_2)

{
  double dVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  dVar1 = SQRT(*(double *)((int)this + 0x10) * *(double *)((int)this + 0x10) +
               *(double *)((int)this + 8) * *(double *)((int)this + 8) +
               *(double *)this * *(double *)this);
  if (_DAT_36223438 <= dVar1) {
    dVar1 = _DAT_36227d28 / dVar1;
    *(double *)this = dVar1 * *(double *)this;
    *(double *)((int)this + 8) = dVar1 * *(double *)((int)this + 8);
    dVar1 = dVar1 * *(double *)((int)this + 0x10);
  }
  else {
    *(double *)this = *(double *)this * _DAT_36227d98;
    *(double *)((int)this + 8) = *(double *)((int)this + 8) * _DAT_36227d98;
    dVar1 = *(double *)((int)this + 0x10) * _DAT_36227d98;
  }
  *(double *)((int)this + 0x10) = dVar1;
  *(double *)((int)this + 0x18) =
       *param_2 * *(double *)this +
       param_2[1] * *(double *)((int)this + 8) + param_2[2] * *(double *)((int)this + 0x10);
  return this;
}

