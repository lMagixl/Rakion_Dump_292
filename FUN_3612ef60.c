
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_3612ef60(void *this,float *param_1)

{
  undefined4 *puVar1;
  float local_c [3];
  
  puVar1 = (undefined4 *)FUN_3605cd80(param_1,local_c);
  *(undefined4 *)this = *puVar1;
  *(undefined4 *)((int)this + 4) = puVar1[1];
  *(undefined4 *)((int)this + 8) = puVar1[2];
  *(undefined4 *)((int)this + 0xc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x3f800000;
  *(float *)((int)this + 0x30) = (param_1[3] - *param_1) * _DAT_36227cf0;
  *(float *)((int)this + 0x34) = (param_1[4] - param_1[1]) * _DAT_36227cf0;
  *(float *)((int)this + 0x38) = (param_1[5] - param_1[2]) * _DAT_36227cf0;
  return this;
}

