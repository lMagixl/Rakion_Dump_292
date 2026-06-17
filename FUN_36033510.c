
void __cdecl FUN_36033510(CTextureObject *param_1,CTFileName *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_3620fd18;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  CTextureObject::SetData_t(param_1,param_2);
  ExceptionList = local_10;
  return;
}

