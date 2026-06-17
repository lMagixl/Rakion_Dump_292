
char * __cdecl FUN_3608daa0(char *param_1,undefined4 param_2)

{
  CTString *pCVar1;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212831;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  CTString::CTString((CTString *)&local_34,(long)&local_34,(char *)0x0,&DAT_3622e0dc,param_2);
  local_4 = 1;
  local_28 = StringDuplicate(s__y__r8_w__c20_w_3622e108);
  local_4._0_1_ = 2;
  local_2c = StringDuplicate(s_mul_oT_3622e100);
  local_4._0_1_ = 3;
  local_30 = StringDuplicate(s__x__r9_w__c20_z_3622e0e8);
  local_4._0_1_ = 4;
  pCVar1 = (CTString *)operator+((char *)&local_14,(CTString *)s_mul_oT_3622e0e0);
  local_4._0_1_ = 5;
  pCVar1 = (CTString *)CTString::operator+(pCVar1,(CTString *)&local_18);
  local_4._0_1_ = 6;
  pCVar1 = (CTString *)CTString::operator+(pCVar1,(CTString *)&local_1c);
  local_4._0_1_ = 7;
  pCVar1 = (CTString *)CTString::operator+(pCVar1,(CTString *)&local_20);
  local_4._0_1_ = 8;
  CTString::operator+(pCVar1,(CTString *)&local_24);
  local_4._0_1_ = 0x10;
  StringFree(local_20);
  local_4._0_1_ = 0xf;
  StringFree(local_1c);
  local_4._0_1_ = 0xe;
  StringFree(local_18);
  local_4._0_1_ = 0xd;
  StringFree(local_14);
  local_4._0_1_ = 0xc;
  StringFree(local_30);
  local_4._0_1_ = 0xb;
  StringFree(local_2c);
  local_4._0_1_ = 10;
  StringFree(local_28);
  operator+(param_1,(CTString *)s_dp3_r10_w__r0_xyz__c18_xyz_dp3_r_362a4f18);
  local_10 = 1;
  local_4._0_1_ = 1;
  StringFree(local_24);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_34);
  ExceptionList = local_c;
  return param_1;
}

