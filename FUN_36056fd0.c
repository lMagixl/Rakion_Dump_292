
void __thiscall FUN_36056fd0(void *this,float *param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_24[0] = *(float *)((int)this + 8) * param_2[6] +
                *param_2 * *(float *)this + param_2[3] * *(float *)((int)this + 4);
  local_24[1] = param_2[4] * *(float *)((int)this + 4) +
                param_2[1] * *(float *)this + param_2[7] * *(float *)((int)this + 8);
  local_24[2] = *(float *)this * param_2[2] +
                param_2[8] * *(float *)((int)this + 8) + param_2[5] * *(float *)((int)this + 4);
  local_24[3] = *(float *)((int)this + 0xc) * *param_2 +
                param_2[3] * *(float *)((int)this + 0x10) +
                *(float *)((int)this + 0x14) * param_2[6];
  local_14 = param_2[1] * *(float *)((int)this + 0xc) +
             param_2[4] * *(float *)((int)this + 0x10) + param_2[7] * *(float *)((int)this + 0x14);
  local_10 = param_2[5] * *(float *)((int)this + 0x10) +
             param_2[8] * *(float *)((int)this + 0x14) + *(float *)((int)this + 0xc) * param_2[2];
  local_c = *(float *)((int)this + 0x18) * *param_2 +
            *(float *)((int)this + 0x20) * param_2[6] + param_2[3] * *(float *)((int)this + 0x1c);
  local_8 = *(float *)((int)this + 0x18) * param_2[1] +
            param_2[4] * *(float *)((int)this + 0x1c) + param_2[7] * *(float *)((int)this + 0x20);
  local_4 = param_2[5] * *(float *)((int)this + 0x1c) +
            param_2[8] * *(float *)((int)this + 0x20) + *(float *)((int)this + 0x18) * param_2[2];
  pfVar2 = local_24;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

