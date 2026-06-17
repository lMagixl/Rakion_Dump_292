
undefined4 __thiscall FUN_361a70a0(void *this,uint param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x1000000 < param_1) {
    FUN_361a4da0();
  }
  FUN_36018c30();
  iVar1 = FUN_361bf99c(param_1 * 4);
  *(uint *)((int)this + 0xc) = param_1 * 4 + iVar1;
  *(int *)((int)this + 4) = iVar1;
  *(int *)((int)this + 8) = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

