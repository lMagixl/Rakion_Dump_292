
int __thiscall FUN_36018840(void *this,int param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620e210;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
      uVar1 = FUN_3600a370();
    }
    puVar2 = (undefined2 *)FUN_361bf99c(uVar1 * 2);
    *(undefined2 **)((int)this + 4) = puVar2;
    *(undefined2 **)((int)this + 8) = puVar2;
    *(undefined2 **)((int)this + 0xc) = puVar2 + uVar1;
    local_8 = 0;
    uVar3 = FUN_36014640(*(undefined2 **)(param_1 + 4),*(undefined2 **)(param_1 + 8),puVar2);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  ExceptionList = local_10;
  return (int)this;
}

