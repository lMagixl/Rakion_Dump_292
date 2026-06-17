
float * __thiscall FUN_360bbab0(void *this,float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [16];
  
  local_1c = (param_1[2] - param_2[2]) * (param_3[1] - param_2[1]) -
             (param_1[1] - param_2[1]) * (param_3[2] - param_2[2]);
  local_18 = (*param_1 - *param_2) * (param_3[2] - param_2[2]) -
             (*param_3 - *param_2) * (param_1[2] - param_2[2]);
  local_14 = (*param_3 - *param_2) * (param_1[1] - param_2[1]) -
             (*param_1 - *param_2) * (param_3[1] - param_2[1]);
  pfVar1 = FUN_3605f8b0(local_10,&local_1c,param_1);
  *(float *)this = *pfVar1;
  *(float *)((int)this + 4) = pfVar1[1];
  *(float *)((int)this + 8) = pfVar1[2];
  *(float *)((int)this + 0xc) = pfVar1[3];
  return this;
}

