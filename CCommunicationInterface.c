
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall CCommunicationInterface::CCommunicationInterface(void) */

CCommunicationInterface * __thiscall
CCommunicationInterface::CCommunicationInterface(CCommunicationInterface *this)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfc820  67  ??0CCommunicationInterface@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362172e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CListHead::Clear((CListHead *)(this + 0x20));
  FUN_360ff140((undefined4 *)(this + 0x18));
  local_4 = 0;
  CListHead::Clear((CListHead *)(this + 0x58));
  FUN_360ff140((undefined4 *)(this + 0x50));
  local_4 = CONCAT31(local_4._1_3_,1);
  _DAT_362cd14c = 0xffffffff;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  DAT_362cf260 = 0;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return this;
}

