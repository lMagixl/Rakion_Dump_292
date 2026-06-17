
/* public: int __thiscall CCommunicationInterface::Client_Receive_Reliable(class CTStream &) */

int __thiscall
CCommunicationInterface::Client_Receive_Reliable(CCommunicationInterface *this,CTStream *param_1)

{
  int iVar1;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfc250  1327
                       ?Client_Receive_Reliable@CCommunicationInterface@@QAEHAAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217286;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  iVar1 = FUN_360f2050(&DAT_362cf250,(int)param_1,'\x01');
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return iVar1;
}

