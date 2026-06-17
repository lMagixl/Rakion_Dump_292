
/* public: void __thiscall CTStream::WriteID_t(class CChunkID const &) */

void __thiscall CTStream::WriteID_t(CTStream *this,CChunkID *param_1)

{
  CTSingleLock local_c [12];
  
                    /* 0x3e900  3969  ?WriteID_t@CTStream@@QAEXABVCChunkID@@@Z */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362bf07c,1);
  **(undefined4 **)(this + 0x14) = *(undefined4 *)param_1;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 4;
  CTSingleLock::~CTSingleLock(local_c);
  return;
}

