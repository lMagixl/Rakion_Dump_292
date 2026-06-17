
/* public: void __thiscall CPlayerSource::SetAction(class CPlayerAction const &) */

void __thiscall CPlayerSource::SetAction(CPlayerSource *this,CPlayerAction *param_1)

{
  int iVar1;
  CPlayerSource *pCVar2;
  CTSingleLock local_c [12];
  
                    /* 0x107c50  3390  ?SetAction@CPlayerSource@@QAEXABVCPlayerAction@@@Z */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)(this + 0x4c),1);
  pCVar2 = this + 0x58;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pCVar2 = pCVar2 + 4;
  }
  CTSingleLock::~CTSingleLock(local_c);
  return;
}

