
/* public: void __thiscall CTMemoryStream::LockBuffer(void * *,long *) */

void __thiscall CTMemoryStream::LockBuffer(CTMemoryStream *this,void **param_1,long *param_2)

{
  CTSingleLock local_c [12];
  
                    /* 0x3f140  2567  ?LockBuffer@CTMemoryStream@@QAEXPAPAXPAJ@Z */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362bf07c,1);
  *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
  if (*(uint *)(this + 0x1c) < *(uint *)(this + 0x14)) {
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x14);
  }
  *param_1 = *(void **)(this + 0xc);
  *param_2 = *(int *)(this + 0x1c) - *(int *)(this + 0xc);
  CTSingleLock::~CTSingleLock(local_c);
  return;
}

