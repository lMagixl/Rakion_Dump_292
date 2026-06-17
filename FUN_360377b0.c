
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_360377b0(void)

{
  CTString *pCVar1;
  int iVar2;
  char *pcVar3;
  CTFileStream local_b4 [120];
  CTString local_3c [4];
  CTFileName local_38 [8];
  char local_30 [12];
  char local_24 [12];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_36210170;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff40;
  local_18 = DAT_362abd90;
  local_8 = 0;
  ExceptionList = &local_10;
  CTFileStream::CTFileStream(local_b4);
  local_8._0_1_ = 1;
  CTFileName::CTFileName(local_38);
  local_8._0_1_ = 2;
  do {
    pCVar1 = DAT_362a2634;
    DAT_362a2634 = DAT_362a2634 + 1;
    pCVar1 = (CTString *)
             CTString::CTString(pCVar1,(long)local_3c,(char *)0x0,s_Temp_MemReport__03d_txt_36225dc8
                                ,pCVar1);
    local_8._0_1_ = 3;
    CTFileName::operator=(local_38,pCVar1);
    local_8._0_1_ = 2;
    CTString::~CTString(local_3c);
    iVar2 = FileExists(local_38);
  } while (iVar2 != 0);
  CTFileStream::Create_t(local_b4,local_38,2);
  FUN_360f3800();
  _strtime(local_30);
  _strdate(local_24);
  FUN_36037460((char *)local_b4,&DAT_36225de0);
  FUN_36037460((char *)local_b4,&DAT_36225de4);
  FUN_360374f0((char *)local_b4);
  FUN_360f56c0((char *)local_b4);
  FUN_360f35f0((CTStream *)local_b4);
  pcVar3 = CTString::operator_char_const_((CTString *)local_38);
  CPrintF(s_Reported_to___s__36225de8,pcVar3);
  local_8._0_1_ = 1;
  CTFileName::~CTFileName(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  CTFileStream::~CTFileStream(local_b4);
  ExceptionList = local_10;
  return;
}

