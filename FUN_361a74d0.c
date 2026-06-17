
void __thiscall FUN_361a74d0(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621bb30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_361a70a0(this,param_1);
  if ((char)uVar2 != '\0') {
    puVar1 = *(undefined4 **)((int)this + 4);
    local_8 = 0;
    FUN_361a6bb0(puVar1,param_1,param_2);
    *(undefined4 **)((int)this + 8) = puVar1 + param_1;
  }
  ExceptionList = local_10;
  return;
}

