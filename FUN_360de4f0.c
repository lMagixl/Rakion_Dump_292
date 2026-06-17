
void __thiscall FUN_360de4f0(void *this,float param_1,float param_2,float param_3)

{
  *(float *)((int)this + 0xc) = ABS(param_1) * *(float *)((int)this + 0xc);
  *(float *)this = ABS(param_1) * *(float *)this;
  *(float *)((int)this + 0x10) = ABS(param_2) * *(float *)((int)this + 0x10);
  *(float *)((int)this + 4) = ABS(param_2) * *(float *)((int)this + 4);
  *(float *)((int)this + 0x14) = ABS(param_3) * *(float *)((int)this + 0x14);
  *(float *)((int)this + 8) = ABS(param_3) * *(float *)((int)this + 8);
  return;
}

