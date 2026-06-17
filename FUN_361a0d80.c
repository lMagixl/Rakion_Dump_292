
void __thiscall FUN_361a0d80(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621b610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    uVar1 = param_1;
    if (0x3fffffff < param_1) {
      uVar1 = FUN_3619fc70();
    }
    puVar2 = (undefined4 *)FUN_361bf99c(uVar1 * 4);
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1;
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    local_8 = 0;
    FUN_361a05e0(puVar2,param_1,param_2);
    *(undefined4 **)((int)this + 8) = puVar2 + uVar1;
  }
  ExceptionList = local_10;
  return;
}

