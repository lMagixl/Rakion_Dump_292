
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_360e0940(void *this,float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *(float *)((int)this + 0x10);
  while( true ) {
    if (fVar1 == 1.4013e-45) {
      fVar1 = *param_1;
      if (param_4 < *param_1) {
        fVar1 = param_4;
      }
      *param_1 = fVar1;
      fVar1 = param_1[1];
      if (param_1[1] < param_5) {
        fVar1 = param_5;
      }
      param_1[1] = fVar1;
      return;
    }
    if (fVar1 == 2.8026e-45) break;
    fVar2 = (*param_2 * *(float *)this +
            param_2[2] * *(float *)((int)this + 8) + param_2[1] * *(float *)((int)this + 4)) -
            *(float *)((int)this + 0xc);
    fVar1 = (*param_3 * *(float *)this +
            param_3[2] * *(float *)((int)this + 8) + param_3[1] * *(float *)((int)this + 4)) -
            *(float *)((int)this + 0xc);
    if ((fVar2 < _DAT_3622376c) || (fVar1 < _DAT_3622376c)) {
      if ((_DAT_3622376c <= fVar2) || (_DAT_3622376c <= fVar1)) {
        fVar1 = fVar2 / (fVar2 - fVar1);
        local_18 = *param_2 + (*param_3 - *param_2) * fVar1;
        local_14 = param_2[1] + (param_3[1] - param_2[1]) * fVar1;
        local_10 = param_2[2] + (param_3[2] - param_2[2]) * fVar1;
        fVar1 = (param_5 - param_4) * fVar1 + param_4;
        local_c = local_18;
        local_8 = local_14;
        local_4 = local_10;
        if (fVar2 < _DAT_3622376c) {
          FUN_360e0940(*(void **)((int)this + 0x18),param_1,param_2,&local_18,param_4,fVar1);
          FUN_360e0940(*(void **)((int)this + 0x14),param_1,&local_18,param_3,fVar1,param_5);
          return;
        }
        FUN_360e0940(*(void **)((int)this + 0x14),param_1,param_2,&local_18,param_4,fVar1);
        FUN_360e0940(*(void **)((int)this + 0x18),param_1,&local_18,param_3,fVar1,param_5);
        return;
      }
      this = *(void **)((int)this + 0x18);
    }
    else {
      this = *(void **)((int)this + 0x14);
    }
    fVar1 = *(float *)((int)this + 0x10);
  }
  return;
}

