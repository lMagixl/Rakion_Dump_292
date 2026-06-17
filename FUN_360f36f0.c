
void FUN_360f36f0(void)

{
  char *pcVar1;
  CTFileStream local_98 [120];
  char *local_20;
  char *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_36216606;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff5c;
  local_8 = 0;
  ExceptionList = &local_10;
  CTFileStream::CTFileStream(local_98);
  local_8._0_1_ = 1;
  pcVar1 = StringDuplicate(s_Temp_StockDump_txt_36233a84);
  local_8._0_1_ = 2;
  local_20 = pcVar1;
  local_1c = StringDuplicate(pcVar1);
  local_18 = 0;
  local_8._0_1_ = 4;
  StringFree(pcVar1);
  CTFileStream::Create_t(local_98,(CTFileName *)&local_1c,2);
  FUN_360f35f0((CTStream *)local_98);
  pcVar1 = StringDuplicate(local_1c);
  local_8._0_1_ = 5;
  local_20 = pcVar1;
  CPrintF(s_Dumped_to___s__36233a98,pcVar1);
  local_8._0_1_ = 4;
  StringFree(pcVar1);
  local_8._0_1_ = 1;
  StringFree(local_1c);
  local_8 = (uint)local_8._1_3_ << 8;
  CTFileStream::~CTFileStream(local_98);
  ExceptionList = local_10;
  return;
}

