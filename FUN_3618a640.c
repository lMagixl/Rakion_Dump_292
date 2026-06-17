
void __thiscall FUN_3618a640(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    FUN_36189e40(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*(int *)(*(int *)((int)this + 4) + uVar2 * 4) == 0) {
    uVar1 = FUN_361bf99c(0xc);
    *(undefined4 *)(*(int *)((int)this + 4) + uVar2 * 4) = uVar1;
  }
  FUN_3618a2a0(*(void **)(*(int *)((int)this + 4) + uVar2 * 4),param_1);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}

