
uint * __thiscall FUN_361a3190(void *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  *(uint *)this = param_1;
  FUN_36018c30();
  uVar2 = FUN_361bf99c(param_1 * 4);
  *(undefined4 *)((int)this + 4) = uVar2;
  uVar3 = 0;
  if (*(int *)this != 0) {
    do {
      puVar1 = (undefined4 *)(*(int *)((int)this + 4) + uVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)this);
  }
  return this;
}

