
/* public: void __thiscall CTStream::DecommitPage(long) */

void __thiscall CTStream::DecommitPage(CTStream *this,long param_1)

{
  BOOL BVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x3ed10  1455  ?DecommitPage@CTStream@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210a1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  BVar1 = VirtualFree((LPVOID)(DAT_362bef94 * param_1 + *(int *)(this + 0xc)),DAT_362bef94,0x4000);
  if (BVar1 == 0) {
    GetLastError();
    puVar2 = (undefined4 *)GetWindowsError((ulong)&param_1);
    uVar4 = *puVar2;
    local_4._0_1_ = 1;
    pcVar3 = Translate(s_ETRSUnable_to_decommit_page___s_3622716c,4);
    FatalError(pcVar3,uVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree((char *)param_1);
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

