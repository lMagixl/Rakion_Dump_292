
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_361d578e(void *this,uint param_1)

{
  float fVar1;
  
  fVar1 = _DAT_362287a4;
  *(float *)this = (float)(param_1 >> 0x10 & 0xff) * _DAT_362287a4;
  *(float *)((int)this + 4) = (float)(param_1 >> 8 & 0xff) * fVar1;
  *(float *)((int)this + 8) = (float)(param_1 & 0xff) * fVar1;
  *(float *)((int)this + 0xc) = (float)(param_1 >> 0x18) * fVar1;
  return;
}

