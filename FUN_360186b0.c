
void __thiscall FUN_360186b0(void *this,uint param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620e200;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x1ffffff < param_1) {
    ExceptionList = &local_10;
    param_1 = FUN_36009f20();
  }
  iVar4 = 0;
  if (*(int *)((int)this + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 7;
  }
  if (uVar3 < param_1) {
    puVar2 = (undefined4 *)FUN_361bf99c(param_1 * 0x80);
    local_8 = 0;
    FUN_36014600(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      iVar4 = *(int *)((int)this + 8) - (int)pvVar1 >> 7;
      operator_delete(pvVar1);
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1 * 0x20;
    *(undefined4 **)((int)this + 8) = puVar2 + iVar4 * 0x20;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}

