
void __cdecl FUN_36033840(CTStream *param_1,CAnimObject *param_2)

{
  char *local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620fd80;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  ExceptionList = &local_10;
  local_20 = StringDuplicate(&DAT_36222fa0);
  local_1c = 0;
  local_8 = 0;
  operator>>(param_1,(CTFileName *)&local_20);
  local_8._0_1_ = 1;
  CAnimObject::SetData_t(param_2,(CTFileName *)&local_20);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_360203c0(param_2,param_1);
  local_8 = 0xffffffff;
  StringFree(local_20);
  ExceptionList = local_10;
  return;
}

