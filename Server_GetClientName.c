
/* public: class CTString __thiscall CCommunicationInterface::Server_GetClientName(long) */

long __thiscall
CCommunicationInterface::Server_GetClientName(CCommunicationInterface *this,long param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  char *in_stack_00000008;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0xfbd50  3374
                       ?Server_GetClientName@CCommunicationInterface@@QAE?AVCTString@@J@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362171e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 1;
  if (in_stack_00000008 == (char *)0x0) {
    pcVar1 = Translate(s_ETRSLocal_machine_362358a4,4);
    pcVar1 = StringDuplicate(pcVar1);
    *(char **)param_1 = pcVar1;
    local_4 = local_4 & 0xffffff00;
    CTSingleLock::~CTSingleLock(local_18);
    ExceptionList = local_c;
    return param_1;
  }
  iVar3 = (int)in_stack_00000008 * 0x100;
  puVar2 = (undefined4 *)AddressToString((ulong)&stack0x00000008);
  local_4._0_1_ = 2;
  pcVar1 = StringDuplicate((char *)*puVar2);
  StringFree(*(char **)(&DAT_362cd154 + iVar3));
  *(char **)(&DAT_362cd154 + iVar3) = pcVar1;
  local_4._0_1_ = 1;
  StringFree(in_stack_00000008);
  pcVar1 = StringDuplicate(*(char **)(&DAT_362cd154 + iVar3));
  *(char **)param_1 = pcVar1;
  local_4 = (uint)local_4._1_3_ << 8;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return param_1;
}

