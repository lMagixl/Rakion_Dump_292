
void __cdecl FUN_36047540(CTString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621153e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_36047bd0(0x362bf3fc);
  local_8 = 0;
  FUN_36046f50(param_1);
  ExceptionList = local_10;
  return;
}

