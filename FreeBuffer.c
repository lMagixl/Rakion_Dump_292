
/* public: void __thiscall CTStream::FreeBuffer(void) */

void __thiscall CTStream::FreeBuffer(CTStream *this)

{
  BOOL BVar1;
  char *pcVar2;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3eb20  1666  ?FreeBuffer@CTStream@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362109d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  if (*(LPVOID *)(this + 0xc) != (LPVOID)0x0) {
    BVar1 = VirtualFree(*(LPVOID *)(this + 0xc),0,0x8000);
    if (BVar1 == 0) {
      pcVar2 = Translate(s_ETRSUnable_to_release_virtual_me_36227100,4);
      FatalError(pcVar2);
    }
    *(undefined4 *)(this + 0xc) = 0;
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

