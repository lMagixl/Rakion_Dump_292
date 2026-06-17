
void __thiscall FUN_36058950(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24[0] = *(undefined4 *)this;
  local_24[2] = *(undefined4 *)((int)this + 0x18);
  local_14 = *(undefined4 *)((int)this + 0x10);
  local_24[1] = *(undefined4 *)((int)this + 0xc);
  local_c = *(undefined4 *)((int)this + 8);
  local_24[3] = *(undefined4 *)((int)this + 4);
  local_4 = *(undefined4 *)((int)this + 0x20);
  local_10 = *(undefined4 *)((int)this + 0x1c);
  local_8 = *(undefined4 *)((int)this + 0x14);
  puVar2 = local_24;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

