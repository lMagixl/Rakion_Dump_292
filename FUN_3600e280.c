
undefined4 * __thiscall FUN_3600e280(void *this,int *param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620d9c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int **)this = param_1;
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
  if (iVar1 != 0) {
    std::_Mutex::_Lock((_Mutex *)(iVar1 + 4));
  }
  local_4 = 0;
  bVar2 = std::basic_istream<char,struct_std::char_traits<char>_>::_Ipfx
                    (*(basic_istream<char,struct_std::char_traits<char>_> **)this,param_2);
  *(bool *)((int)this + 4) = bVar2;
  ExceptionList = local_c;
  return this;
}

