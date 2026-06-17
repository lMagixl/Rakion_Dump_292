
CTString * __cdecl FUN_36037d20(CTString *param_1,CTString *param_2)

{
  CTFileName local_20 [8];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_36210221;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_18 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  CTString::CTString((CTString *)&local_18);
  local_8._0_1_ = 1;
  CTFileName::CTFileName(local_20,param_2);
  local_8._0_1_ = 2;
  CTString::Load_t((CTString *)&local_18,local_20);
  local_8._0_1_ = 1;
  CTFileName::~CTFileName(local_20);
  CTString::CTString(param_1,(CTString *)&local_18);
  local_8 = (uint)local_8._1_3_ << 8;
  CTString::~CTString((CTString *)&local_18);
  ExceptionList = local_10;
  return param_1;
}

