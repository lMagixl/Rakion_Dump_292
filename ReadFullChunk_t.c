
/* public: void __thiscall CTStream::ReadFullChunk_t(class CChunkID const &,void *,long) */

void __thiscall
CTStream::ReadFullChunk_t(CTStream *this,CChunkID *param_1,void *param_2,long param_3)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3e790  2965  ?ReadFullChunk_t@CTStream@@QAEXABVCChunkID@@PAXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621098c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  ExpectID_t(this,param_1);
  ReadChunk_t(this,param_2,param_3);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

