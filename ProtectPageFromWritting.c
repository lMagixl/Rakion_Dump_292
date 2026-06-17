
/* public: void __thiscall CTStream::ProtectPageFromWritting(long) */

void __thiscall CTStream::ProtectPageFromWritting(CTStream *this,long param_1)

{
  BOOL BVar1;
  char *pcVar2;
  DWORD local_1c;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3edd0  2874  ?ProtectPageFromWritting@CTStream@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210a2c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  BVar1 = VirtualProtect((LPVOID)(DAT_362bef94 * param_1 + *(int *)(this + 0xc)),DAT_362bef94,2,
                         &local_1c);
  if (BVar1 == 0) {
    pcVar2 = Translate(s_ETRSUnable_to_protect_page_36227190,4);
    FatalError(pcVar2);
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

