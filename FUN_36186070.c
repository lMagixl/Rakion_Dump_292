
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
FUN_36186070(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            undefined4 *param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621abe9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(this,param_1);
  *(undefined4 *)((int)this + 0x1c) = *param_2;
  iVar1 = param_2[1];
  local_4 = 0;
  *(int *)((int)this + 0x20) = iVar1;
  if (iVar1 != 0) {
    FUN_36010d50(iVar1);
  }
  ExceptionList = local_c;
  return this;
}

