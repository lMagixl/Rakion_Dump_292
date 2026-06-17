
undefined4 __thiscall FUN_3619e570(void *this,undefined4 param_1)

{
  basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this_00;
  undefined4 *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  char *pcVar4;
  undefined1 local_38 [8];
  undefined1 auStack_30 [8];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b472;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_3619e420(this);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_28,&DAT_3624300e);
  this_00 = (basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            ((int)this + 0x88);
  local_4 = 0;
  std::basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::str
            (this_00,local_28);
  local_4 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28);
  puVar1 = (undefined4 *)std::setw((int)local_38);
  pcVar4 = &DAT_36243014;
  pbVar2 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,struct_std::char_traits<char>_> *)this_00,
                      *(int *)(*(int *)((int)this + 4) + 8));
  pbVar3 = std::operator<<<struct_std::char_traits<char>_>(pbVar2,pcVar4);
  pbVar2 = pbVar3;
  if (pbVar3 != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0) {
    pbVar2 = pbVar3 + *(int *)(*(int *)pbVar3 + 4);
  }
  (*(code *)*puVar1)(pbVar2,puVar1[1]);
  puVar1 = (undefined4 *)std::setw((int)auStack_30);
  pcVar4 = &DAT_36243010;
  pbVar2 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                     (pbVar3,*(int *)(*(int *)((int)this + 4) + 4));
  pbVar3 = std::operator<<<struct_std::char_traits<char>_>(pbVar2,pcVar4);
  pbVar2 = pbVar3;
  if (pbVar3 != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0) {
    pbVar2 = pbVar3 + *(int *)(*(int *)pbVar3 + 4);
  }
  (*(code *)*puVar1)(pbVar2,puVar1[1]);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
            (pbVar3,**(int **)((int)this + 4));
  std::basic_ostringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::str
            (this_00);
  ExceptionList = pvStack_c;
  return param_1;
}

