
void __thiscall FUN_360d6d20(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = *(undefined8 *)this;
  local_48 = *(undefined8 *)((int)this + 0x18);
  local_40 = *(undefined8 *)((int)this + 0x30);
  local_38 = *(undefined8 *)((int)this + 8);
  local_30 = *(undefined8 *)((int)this + 0x20);
  local_28 = *(undefined8 *)((int)this + 0x38);
  local_20 = *(undefined8 *)((int)this + 0x10);
  local_18 = *(undefined8 *)((int)this + 0x28);
  local_10 = *(undefined8 *)((int)this + 0x40);
  puVar2 = &local_50;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *(undefined4 *)puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + 4);
    param_1 = param_1 + 1;
  }
  return;
}

