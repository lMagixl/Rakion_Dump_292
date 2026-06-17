
/* public: int __thiscall CTStream::AtEOF(void) */

int __thiscall CTStream::AtEOF(CTStream *this)

{
  uint uVar1;
  uint uVar2;
  CTSingleLock local_c [12];
  
                    /* 0x3e0e0  1068  ?AtEOF@CTStream@@QAEHXZ */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362bf07c,1);
  uVar1 = *(uint *)(this + 0x18);
  uVar2 = *(uint *)(this + 0x14);
  CTSingleLock::~CTSingleLock(local_c);
  return (uint)(uVar1 <= uVar2);
}

