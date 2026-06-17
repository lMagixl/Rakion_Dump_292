
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __cdecl
FUN_3600ae10(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            char *param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620d6f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
           basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                     (local_28,param_2);
  local_4 = 1;
  pbVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
           operator+=(pbVar1,param_3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,pbVar1);
  local_4 = local_4 & 0xffffff00;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  ExceptionList = local_c;
  return param_1;
}

