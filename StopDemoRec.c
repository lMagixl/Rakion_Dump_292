
/* public: void __thiscall CNetworkLibrary::StopDemoRec(void) */

void __thiscall CNetworkLibrary::StopDemoRec(CNetworkLibrary *this)

{
  undefined4 local_1d;
  undefined1 local_19;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf38b0  3683  ?StopDemoRec@CNetworkLibrary@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36216618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)(this + 0x1c),1);
  local_4 = 0;
  if (*(int *)(this + 0x874) == 0) {
    local_4 = 0xffffffff;
    CTSingleLock::~CTSingleLock(local_18);
    ExceptionList = local_c;
    return;
  }
  local_1d = DAT_36234df8;
  local_19 = DAT_36234dfc;
  CTStream::WriteID_t((CTStream *)(this + 0x878),(CChunkID *)&local_1d);
  CTFileStream::Close((CTFileStream *)(this + 0x878));
  *(undefined4 *)(this + 0x874) = 0;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

