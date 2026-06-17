
/* public: long __thiscall CTStream::DictionaryReadBegin_t(void) */

long __thiscall CTStream::DictionaryReadBegin_t(CTStream *this)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  CTStream *pCVar4;
  long lVar5;
  undefined4 local_99;
  undefined1 local_95;
  char *local_94;
  undefined4 local_90;
  CTSingleLock local_8c [12];
  CTFileStream local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x43100  1495  ?DictionaryReadBegin_t@CTStream@@QAEJXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211118;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_8c,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  FUN_360e4670(*(void **)(this + 0x30),100,5,5);
  iVar2 = DAT_36226ffc;
  lVar5 = 0;
  local_95 = DAT_36227000;
  piVar3 = (int *)PeekID_t(this);
  if (*piVar3 == iVar2) {
    local_99 = DAT_36227004;
    local_95 = DAT_36227008;
    ExpectID_t(this,(CChunkID *)&local_99);
    local_94 = StringDuplicate(&DAT_36222fa0);
    local_90 = 0;
    local_4._0_1_ = 1;
    pCVar4 = ::operator>>(this,(CTFileName *)&local_94);
    lVar5 = **(long **)(pCVar4 + 0x14);
    *(long **)(pCVar4 + 0x14) = *(long **)(pCVar4 + 0x14) + 1;
    CTFileStream::CTFileStream(local_80);
    local_4._0_1_ = 2;
    CTFileStream::Open_t(local_80,(CTFileName *)&local_94,1);
    ReadDictionary_intenal_t((CTStream *)local_80,lVar5);
    CopyDictionary(this,(CTStream *)local_80);
    local_4._0_1_ = 1;
    CTFileStream::~CTFileStream(local_80);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_94);
  }
  iVar2 = DAT_3622700c;
  local_90 = CONCAT31(local_90._1_3_,DAT_36227010);
  piVar3 = (int *)PeekID_t(this);
  if (*piVar3 != iVar2) {
    local_4 = 0xffffffff;
    CTSingleLock::~CTSingleLock(local_8c);
    ExceptionList = local_c;
    return 0;
  }
  local_99 = DAT_36227014;
  local_95 = DAT_36227018;
  ExpectID_t(this,(CChunkID *)&local_99);
  lVar1 = **(long **)(this + 0x14);
  *(long **)(this + 0x14) = *(long **)(this + 0x14) + 1;
  ReadDictionary_intenal_t(this,lVar1);
  *(undefined4 *)(this + 0x24) = 1;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_8c);
  if (lVar5 == 0) {
    lVar5 = lVar1;
  }
  ExceptionList = local_c;
  return lVar5;
}

