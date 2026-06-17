
/* public: class CEntity * __thiscall CNetworkLibrary::GetLocalPlayerEntity(class CPlayerSource *)
    */

CEntity * __thiscall
CNetworkLibrary::GetLocalPlayerEntity(CNetworkLibrary *this,CPlayerSource *param_1)

{
  CEntity *pCVar1;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf4aa0  1961
                       ?GetLocalPlayerEntity@CNetworkLibrary@@QAEPAVCEntity@@PAVCPlayerSource@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36216721;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)(this + 0x1c),1);
  local_4 = 0xffffffff;
  if (*(int *)param_1 < 0) {
    CTSingleLock::~CTSingleLock(local_18);
    ExceptionList = local_c;
    return (CEntity *)0x0;
  }
  pCVar1 = *(CEntity **)(*(int *)param_1 * 0x100 + 4 + *(int *)(*(int *)(this + 0x18) + 0x10));
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return pCVar1;
}

