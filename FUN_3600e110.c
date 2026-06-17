
undefined4 * __thiscall FUN_3600e110(void *this,int *param_1)

{
  int iVar1;
  basic_ostream<unsigned_short,struct_std::char_traits<unsigned_short>_> *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620d968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int **)this = param_1;
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
  if (iVar1 != 0) {
    std::_Mutex::_Lock((_Mutex *)(iVar1 + 4));
  }
  local_4 = 0;
  if ((*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0) &&
     (this_00 = *(basic_ostream<unsigned_short,struct_std::char_traits<unsigned_short>_> **)
                 ((int)param_1 + *(int *)(*param_1 + 4) + 0x2c),
     this_00 != (basic_ostream<unsigned_short,struct_std::char_traits<unsigned_short>_> *)0x0)) {
    std::basic_ostream<unsigned_short,struct_std::char_traits<unsigned_short>_>::flush(this_00);
  }
  *(bool *)((int)this + 4) = *(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0;
  ExceptionList = local_c;
  return this;
}

