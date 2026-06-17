
void __thiscall FUN_3612e8b0(void *this,float *param_1)

{
  *(float *)this = *param_1 + *(float *)this;
  *(float *)((int)this + 4) = param_1[1] + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = param_1[2] + *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) + *param_1;
  *(float *)((int)this + 0x10) = *(float *)((int)this + 0x10) + param_1[1];
  *(float *)((int)this + 0x14) = *(float *)((int)this + 0x14) + param_1[2];
  return;
}

