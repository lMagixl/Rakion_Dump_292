
undefined4 __thiscall FUN_360fe9e0(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  *(undefined2 *)((int)this + 4) = *(undefined2 *)param_1;
  *(undefined4 *)this = *(undefined4 *)((int)param_1 + 2);
  *(undefined2 *)((int)this + 0x422) = *(undefined2 *)((int)param_1 + 6);
  *(undefined4 *)((int)this + 0xc) = param_1[2];
  *(uint *)((int)this + 8) = param_2;
  puVar2 = (undefined4 *)((int)this + 0x20);
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

