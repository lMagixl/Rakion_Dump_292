
void __thiscall FUN_361b3da0(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = (*(float *)((int)this + 0xc) - *(float *)this) * param_1;
  *(float *)((int)this + 0xc) = fVar1 + *(float *)((int)this + 0xc);
  *(float *)this = *(float *)this - fVar1;
  fVar1 = (*(float *)((int)this + 0x10) - *(float *)((int)this + 4)) * param_1;
  *(float *)((int)this + 0x10) = fVar1 + *(float *)((int)this + 0x10);
  *(float *)((int)this + 4) = *(float *)((int)this + 4) - fVar1;
  fVar1 = (*(float *)((int)this + 0x14) - *(float *)((int)this + 8)) * param_1;
  *(float *)((int)this + 0x14) = fVar1 + *(float *)((int)this + 0x14);
  *(float *)((int)this + 8) = *(float *)((int)this + 8) - fVar1;
  return;
}

