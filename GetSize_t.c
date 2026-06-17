
/* public: long __thiscall CTStream::GetSize_t(void) */

long __thiscall CTStream::GetSize_t(CTStream *this)

{
  long lVar1;
  CTSingleLock local_c [12];
  
                    /* 0x3e650  2125  ?GetSize_t@CTStream@@QAEJXZ */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362bf07c,1);
  lVar1 = **(long **)(this + 0x14);
  *(long **)(this + 0x14) = *(long **)(this + 0x14) + 1;
  CTSingleLock::~CTSingleLock(local_c);
  return lVar1;
}

