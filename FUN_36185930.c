
void __fastcall
FUN_36185930(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621ab79;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    ExceptionList = &local_c;
    FUN_3600cd20(*(int **)(param_1 + 0x20));
  }
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1);
  ExceptionList = local_c;
  return;
}

