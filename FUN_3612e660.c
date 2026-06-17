
void __thiscall
FUN_3612e660(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  
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
  *(undefined4 *)((int)this + 0x30) = *param_3;
  *(undefined4 *)((int)this + 0x34) = param_3[1];
  *(undefined4 *)((int)this + 0x38) = param_3[2];
  *(undefined4 *)((int)this + 0x3c) = param_3[3];
  *(undefined4 *)((int)this + 0x40) = param_3[4];
  *(undefined4 *)((int)this + 0x44) = param_3[5];
  *(undefined4 *)((int)this + 0x48) = *param_4;
  *(undefined4 *)((int)this + 0x4c) = param_4[1];
  *(undefined4 *)((int)this + 0x50) = param_4[2];
  *(undefined4 *)((int)this + 0x54) = param_4[3];
  *(undefined4 *)((int)this + 0x58) = param_4[4];
  uVar1 = param_4[5];
  *(undefined8 *)((int)this + 0x60) = param_5;
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  *(undefined8 *)((int)this + 0x68) = param_6;
  *(undefined8 *)((int)this + 0x70) = param_7;
  return;
}

