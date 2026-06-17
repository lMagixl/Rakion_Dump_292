
void __thiscall FUN_3605cc10(void *this,float *param_1,float param_2)

{
  *(float *)this = *param_1 - param_2;
  *(float *)((int)this + 0xc) = param_2 + *param_1;
  *(float *)((int)this + 4) = param_1[1] - param_2;
  *(float *)((int)this + 0x10) = param_2 + param_1[1];
  *(float *)((int)this + 8) = param_1[2] - param_2;
  *(float *)((int)this + 0x14) = param_2 + param_1[2];
  return;
}

