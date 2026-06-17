
void __thiscall FUN_3605ccc0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)((int)this + 0x10);
  fVar4 = *(float *)((int)this + 0x14);
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 8);
  *param_1 = *(float *)((int)this + 0xc) - *(float *)this;
  param_1[1] = fVar3 - fVar1;
  param_1[2] = fVar4 - fVar2;
  return;
}

