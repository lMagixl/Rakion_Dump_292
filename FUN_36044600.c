
void __fastcall FUN_36044600(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36211218;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  Xenesis2::Foundation::File::xFileManager::~xFileManager((xFileManager *)(param_1 + 2));
  local_4 = 0xffffffff;
  StringFree((char *)*param_1);
  ExceptionList = local_c;
  return;
}

