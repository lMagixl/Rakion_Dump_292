
void __thiscall FUN_36105d40(void *this,undefined4 *param_1,ushort param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)((uint)*(ushort *)((int)this + 0x3f8) + (int)this);
    for (uVar1 = (uint)(param_2 >> 2); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *(short *)((int)this + 0x3f8) = *(short *)((int)this + 0x3f8) + param_2;
  }
  return;
}

