
void __fastcall FUN_3619e3c0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621b44c;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _vbase_destructor_((basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      *)(param_1 + 0x88));
  local_4 = 0xffffffff;
  std::basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _vbase_destructor_((basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      *)(param_1 + 8));
  ExceptionList = local_c;
  return;
}

