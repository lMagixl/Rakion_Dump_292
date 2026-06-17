
uint * __thiscall FUN_360605c0(void *this,uint param_1)

{
  *(uint *)this =
       param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
  return this;
}

