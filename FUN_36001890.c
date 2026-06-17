
exception * __thiscall
FUN_36001890(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620d0e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception::exception(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_36222fb4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xc),param_1);
  ExceptionList = local_c;
  return this;
}

