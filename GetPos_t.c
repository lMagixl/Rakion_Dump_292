
/* public: long __thiscall CTStream::GetPos_t(void) */

long __thiscall CTStream::GetPos_t(CTStream *this)

{
  int iVar1;
  int iVar2;
  CTSingleLock local_c [12];
  
                    /* 0x3e0b0  2060  ?GetPos_t@CTStream@@QAEJXZ */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362bf07c,1);
  iVar1 = *(int *)(this + 0x14);
  iVar2 = *(int *)(this + 0xc);
  CTSingleLock::~CTSingleLock(local_c);
  return iVar1 - iVar2;
}

