
void __cdecl FUN_360336e0(CTStream *param_1)

{
  char *local_2c;
  undefined4 local_28;
  CTextureObject local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fd4c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_2c = StringDuplicate(&DAT_36222fa0);
  local_28 = 0;
  local_4 = 0;
  operator>>(param_1,(CTFileName *)&local_2c);
  CTextureObject::CTextureObject(local_24);
  local_4._0_1_ = 1;
  CTextureObject::Read_t(local_24,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  CAnimObject::~CAnimObject((CAnimObject *)local_24);
  local_4 = 0xffffffff;
  StringFree(local_2c);
  ExceptionList = local_c;
  return;
}

