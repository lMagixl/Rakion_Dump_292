
int __fastcall FUN_3619e690(int param_1)

{
  basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this;
  basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b488;
  local_c = ExceptionList;
  this = (basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
         (param_1 + 8);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  std::basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this,2);
  local_4 = 0;
  this_00 = (basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            (param_1 + 0x88);
  std::basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this_00,2);
  this_00[*(int *)(*(int *)this_00 + 4) + 0x30] =
       (basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x30;
  this[*(int *)(*(int *)this + 4) + 0x30] =
       (basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x30;
  ExceptionList = local_c;
  return param_1;
}

