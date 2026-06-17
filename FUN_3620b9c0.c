
/* WARNING: Removing unreachable block (ram,0x3620b9dc) */
/* WARNING: Removing unreachable block (ram,0x3620b9dd) */
/* WARNING: Removing unreachable block (ram,0x3620b9eb) */

void __thiscall
FUN_3620b9c0(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(int *)((int)this + 0x2c) = param_2;
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(undefined4 *)((int)this + 0x18) = param_4;
  *(undefined4 *)((int)this + 0xc) = param_6;
  *(undefined4 *)((int)this + 8) = param_7;
  *(undefined4 *)((int)this + 0x24) = param_5;
  *(undefined4 *)((int)this + 4) = param_8;
  return;
}

