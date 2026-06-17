
void __thiscall FUN_361a8230(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_3621bc30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    puVar1 = FUN_361a8020(param_1,*(undefined4 *)(param_1 + 4),(_String_base *)(param_2 + 2));
    FUN_361a6c10(this,1);
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(undefined4 **)puVar1[1] = puVar1;
  }
  ExceptionList = local_10;
  return;
}

