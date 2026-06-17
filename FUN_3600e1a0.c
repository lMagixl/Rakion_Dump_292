
void __fastcall FUN_3600e1a0(int *param_1)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620d988;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<unsigned_short,struct_std::char_traits<unsigned_short>_>::_Osfx
              ((basic_ostream<unsigned_short,struct_std::char_traits<unsigned_short>_> *)*param_1);
  }
  iVar1 = *(int *)(*(int *)(*(int *)*param_1 + 4) + 0x28 + *param_1);
  local_4 = 0xffffffff;
  if (iVar1 != 0) {
    std::_Mutex::_Unlock((_Mutex *)(iVar1 + 4));
  }
  ExceptionList = local_c;
  return;
}

