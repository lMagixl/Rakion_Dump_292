
void __thiscall FUN_36134600(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 1U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 2U >> 1)) {
    FUN_361343a0(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar3 = uVar2 >> 1;
  if (*(uint *)((int)this + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)((int)this + 8);
  }
  if (*(int *)(*(int *)((int)this + 4) + uVar3 * 4) == 0) {
    uVar1 = FUN_361bf99c(0x10);
    *(undefined4 *)(*(int *)((int)this + 4) + uVar3 * 4) = uVar1;
  }
  FUN_36134230((undefined4 *)(*(int *)(*(int *)((int)this + 4) + uVar3 * 4) + (uVar2 & 1) * 8),
               param_1);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}

