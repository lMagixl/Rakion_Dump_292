
/* public: void __thiscall CTStream::WriteSize_t(long) */

void __thiscall CTStream::WriteSize_t(CTStream *this,long param_1)

{
  CTSingleLock local_c [12];
  
                    /* 0x3e940  3989  ?WriteSize_t@CTStream@@QAEXJ@Z */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362bf07c,1);
  **(long **)(this + 0x14) = param_1;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 4;
  CTSingleLock::~CTSingleLock(local_c);
  return;
}

