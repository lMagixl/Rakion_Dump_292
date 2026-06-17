
void __thiscall FUN_360de880(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = *param_2;
  *(undefined4 *)((int)this + 0x1c) = param_2[1];
  *(undefined4 *)((int)this + 0x20) = param_2[2];
  *(undefined4 *)((int)this + 0x24) = param_2[3];
  *(undefined4 *)((int)this + 0x28) = param_2[4];
  *(undefined4 *)((int)this + 0x2c) = param_2[5];
  *(undefined4 *)((int)this + 0x30) = param_3;
  return;
}

