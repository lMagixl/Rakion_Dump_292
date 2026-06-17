
void __cdecl FUN_36031970(undefined4 param_1)

{
  CTSingleLock local_2c [12];
  undefined4 local_20 [4];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fa2a;
  local_c = ExceptionList;
  if (DAT_362be2ac != (code *)0x0) {
    ExceptionList = &local_c;
    FUN_36031510(local_20);
    local_4 = 0;
    CTSingleLock::CTSingleLock(local_2c,(CTCriticalSection *)&DAT_362be3a4,1);
    local_4._0_1_ = 1;
    FUN_36031c80(local_20,&DAT_362be3ac);
    local_4 = (uint)local_4._1_3_ << 8;
    CTSingleLock::~CTSingleLock(local_2c);
    local_10 = param_1;
    (*DAT_362be2ac)(local_20);
    local_4 = 0xffffffff;
    FUN_36031570(local_20);
  }
  ExceptionList = local_c;
  return;
}

