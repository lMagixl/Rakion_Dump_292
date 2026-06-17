
void __thiscall FUN_361bb0c0(void *this,undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  uVar3 = (uVar1 ^ 0xdeadbeef) & *(uint *)((int)this + 0x20);
  if (*(uint *)((int)this + 0x24) <= uVar3) {
    uVar3 = uVar3 + (-1 - (*(uint *)((int)this + 0x20) >> 1));
  }
  puVar2 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar3 * 4);
  while( true ) {
    if (puVar2 == *(undefined4 **)(*(int *)((int)this + 0x14) + 4 + uVar3 * 4)) {
      *param_1 = *(undefined4 *)((int)this + 8);
      return;
    }
    if ((int)uVar1 <= (int)puVar2[2]) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  if ((int)uVar1 < (int)puVar2[2]) {
    *param_1 = *(undefined4 *)((int)this + 8);
    return;
  }
  *param_1 = puVar2;
  return;
}

