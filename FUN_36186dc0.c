
void __thiscall FUN_36186dc0(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_3621acb0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    puVar1 = FUN_36186780(param_1,*(undefined4 *)(param_1 + 4),
                          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)(param_2 + 2));
    FUN_36185d90(this,1);
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(undefined4 **)puVar1[1] = puVar1;
  }
  ExceptionList = local_10;
  return;
}

