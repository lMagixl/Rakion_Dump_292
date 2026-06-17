
int __cdecl FUN_36037b90(CTString *param_1)

{
  CTString *this;
  int iVar1;
  CTString local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_362101f5;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd8;
  local_8 = 0;
  ExceptionList = &local_10;
  this = FUN_36037960(local_18,param_1);
  local_8._0_1_ = 1;
  iVar1 = CTString::operator!=(this,&DAT_36225e8f);
  local_8 = (uint)local_8._1_3_ << 8;
  CTString::~CTString(local_18);
  ExceptionList = local_10;
  return iVar1;
}

