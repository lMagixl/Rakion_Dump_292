
/* public: void __thiscall CTMemoryStream::UnlockBuffer(void) */

void __thiscall CTMemoryStream::UnlockBuffer(CTMemoryStream *this)

{
  CTSingleLock local_c [12];
  
                    /* 0x3f1a0  3878  ?UnlockBuffer@CTMemoryStream@@QAEXXZ */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362bf07c,1);
  *(int *)(this + 0x58) = *(int *)(this + 0x58) + -1;
  CTSingleLock::~CTSingleLock(local_c);
  return;
}

