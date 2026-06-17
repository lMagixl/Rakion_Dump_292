
undefined4 __thiscall
FUN_360fe960(void *this,undefined4 *param_1,uint param_2,undefined2 param_3,undefined4 param_4,
            undefined2 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  
  *(undefined2 *)((int)this + 0x422) = param_5;
  *(undefined4 *)this = param_4;
  *(uint *)((int)this + 8) = param_2 + 0xc;
  *(undefined4 *)((int)this + 0xc) = param_6;
  *(undefined2 *)((int)this + 4) = param_3;
  *(undefined2 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x22) = *(undefined4 *)this;
  *(undefined2 *)((int)this + 0x26) = *(undefined2 *)((int)this + 0x422);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0xc);
  puVar2 = (undefined4 *)((int)this + 0x2c);
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return 1;
}

