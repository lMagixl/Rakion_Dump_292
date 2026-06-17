
void __cdecl FUN_36037de0(CTString *param_1,CTString *param_2)

{
  CTFileName local_1c [8];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_36210233;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  CTFileName::CTFileName(local_1c,param_1);
  local_8._0_1_ = 1;
  CTString::Save_t(param_2,local_1c);
  local_8 = (uint)local_8._1_3_ << 8;
  CTFileName::~CTFileName(local_1c);
  ExceptionList = local_10;
  return;
}

