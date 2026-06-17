
CTString * __cdecl FUN_3608dc40(CTString *param_1,char *param_2)

{
  char *pcVar1;
  CTString *pCVar2;
  char *unaff_EDI;
  char *local_64;
  char *local_60;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212904;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  local_4 = 1;
  local_60 = pcVar1;
  if (DAT_362c5428 != 0) {
    local_60 = StringDuplicate(s_mov_oD0__r1_3622e120);
    StringFree(pcVar1);
  }
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  local_4._0_1_ = 2;
  local_64 = pcVar1;
  if ((((uint)param_2 & 0x40) != 0) && (DAT_362a4144 != 0)) {
    local_64 = StringDuplicate(s_dp3_r8_w__r1__r1_rsq_r7_w__r8_w_m_3622e148);
    StringFree(pcVar1);
  }
  switch(DAT_362c9854) {
  case 0:
    pcVar1 = StringDuplicate(unaff_EDI);
    local_4._0_1_ = 3;
    param_2 = StringDuplicate(s_vs_1_1_mov_r0__v0_mov_r1__v1_362a43a0);
    local_4._0_1_ = 4;
    pCVar2 = (CTString *)CTString::operator+((CTString *)&param_2,(CTString *)&local_30);
    local_4._0_1_ = 5;
    pCVar2 = (CTString *)CTString::operator+(pCVar2,(CTString *)&local_34);
    local_4._0_1_ = 6;
    CTString::operator+(pCVar2,param_1);
    local_4._0_1_ = 5;
    StringFree(local_34);
    local_4._0_1_ = 4;
    StringFree(local_30);
    local_4 = CONCAT31(local_4._1_3_,3);
    StringFree(param_2);
    break;
  case 1:
    local_50 = StringDuplicate(unaff_EDI);
    local_4._0_1_ = 7;
    local_54 = StringDuplicate(s_vs_1_1_mul_r3__v3_zyxw__c4_wwww_m_362a4408);
    local_4._0_1_ = 8;
    pCVar2 = (CTString *)CTString::operator+((CTString *)&local_54,(CTString *)&local_28);
    local_4._0_1_ = 9;
    pCVar2 = (CTString *)CTString::operator+(pCVar2,(CTString *)&local_2c);
    local_4._0_1_ = 10;
    CTString::operator+(pCVar2,param_1);
    local_4._0_1_ = 9;
    StringFree(local_2c);
    local_4._0_1_ = 8;
    StringFree(local_28);
    local_4 = CONCAT31(local_4._1_3_,7);
    StringFree(local_54);
    pcVar1 = local_50;
    break;
  case 2:
    local_48 = StringDuplicate(unaff_EDI);
    local_4._0_1_ = 0xb;
    local_4c = StringDuplicate(s_vs_1_1_mul_r3__v3_zyxw__c4_wwww_s_362a4528);
    local_4._0_1_ = 0xc;
    pCVar2 = (CTString *)CTString::operator+((CTString *)&local_4c,(CTString *)&local_20);
    local_4._0_1_ = 0xd;
    pCVar2 = (CTString *)CTString::operator+(pCVar2,(CTString *)&local_24);
    local_4._0_1_ = 0xe;
    CTString::operator+(pCVar2,param_1);
    local_4._0_1_ = 0xd;
    StringFree(local_24);
    local_4._0_1_ = 0xc;
    StringFree(local_20);
    local_4 = CONCAT31(local_4._1_3_,0xb);
    StringFree(local_4c);
    pcVar1 = local_48;
    break;
  case 3:
    local_40 = StringDuplicate(unaff_EDI);
    local_4._0_1_ = 0xf;
    local_44 = StringDuplicate(s_vs_1_1_mul_r3__v3_zyxw__c4_wwww_a_362a4788);
    local_4._0_1_ = 0x10;
    pCVar2 = (CTString *)CTString::operator+((CTString *)&local_44,(CTString *)&local_18);
    local_4._0_1_ = 0x11;
    pCVar2 = (CTString *)CTString::operator+(pCVar2,(CTString *)&local_1c);
    local_4._0_1_ = 0x12;
    CTString::operator+(pCVar2,param_1);
    local_4._0_1_ = 0x11;
    StringFree(local_1c);
    local_4._0_1_ = 0x10;
    StringFree(local_18);
    local_4 = CONCAT31(local_4._1_3_,0xf);
    StringFree(local_44);
    pcVar1 = local_40;
    break;
  case 4:
    local_38 = StringDuplicate(unaff_EDI);
    local_4._0_1_ = 0x13;
    local_3c = StringDuplicate(s_vs_1_1_mul_r3__v3_zyxw__c4_wwww_a_362a4ad8);
    local_4._0_1_ = 0x14;
    pCVar2 = (CTString *)CTString::operator+((CTString *)&local_3c,(CTString *)&local_10);
    local_4._0_1_ = 0x15;
    pCVar2 = (CTString *)CTString::operator+(pCVar2,(CTString *)&local_14);
    local_4._0_1_ = 0x16;
    CTString::operator+(pCVar2,param_1);
    local_4._0_1_ = 0x15;
    StringFree(local_14);
    local_4._0_1_ = 0x14;
    StringFree(local_10);
    local_4 = CONCAT31(local_4._1_3_,0x13);
    StringFree(local_3c);
    pcVar1 = local_38;
    break;
  default:
    pcVar1 = StringDuplicate(&DAT_3622e1a9);
    *(char **)param_1 = pcVar1;
    local_4._0_1_ = 1;
    StringFree(local_64);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_60);
    ExceptionList = local_c;
    return param_1;
  }
  local_4._0_1_ = 2;
  StringFree(pcVar1);
  local_4._0_1_ = 1;
  StringFree(local_64);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_60);
  ExceptionList = local_c;
  return param_1;
}

