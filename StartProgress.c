
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl StartProgress(void) */

void __cdecl StartProgress(void)

{
  char *pcVar1;
  char *pcVar2;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x31b90  3664  ?StartProgress@@YAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fa68;
  local_c = ExceptionList;
  _DAT_362be3c4 = 0xffffffff;
  _DAT_362be3a8 = 0xffffffff;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362be3a4,1);
  local_4 = 0;
  _DAT_362be3bc = 0;
  _DAT_362be3b0 = 0;
  pcVar1 = StringDuplicate(&DAT_36225636);
  StringFree(DAT_362be3ac);
  DAT_362be3ac = pcVar1;
  pcVar1 = StringDuplicate(&DAT_36225637);
  local_4._0_1_ = 1;
  pcVar2 = StringDuplicate(pcVar1);
  StringFree(DAT_362be3b4);
  _DAT_362be3b8 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  DAT_362be3b4 = pcVar2;
  StringFree(pcVar1);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  FUN_36031970(0);
  ExceptionList = local_c;
  return;
}

