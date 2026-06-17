
/* public: class CPlayerSource * __thiscall CNetworkLibrary::GetPlayerSource(class CEntity *) */

CPlayerSource * __thiscall CNetworkLibrary::GetPlayerSource(CNetworkLibrary *this,CEntity *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf8a50  2052
                       ?GetPlayerSource@CNetworkLibrary@@QAEPAVCPlayerSource@@PAVCEntity@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36216e64;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)(this + 0x1c),1);
  iVar2 = 0;
  if (0 < *(int *)(this + 0x28)) {
    piVar1 = *(int **)(this + 0x2c);
    piVar3 = piVar1;
    do {
      if ((-1 < *piVar3) &&
         (*(CEntity **)(*piVar3 * 0x100 + *(int *)(*(int *)(this + 0x18) + 0x10) + 4) == param_1)) {
        local_4 = 0xffffffff;
        CTSingleLock::~CTSingleLock(local_18);
        ExceptionList = local_c;
        return (CPlayerSource *)(piVar1 + iVar2 * 0xdc);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0xdc;
    } while (iVar2 < *(int *)(this + 0x28));
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return (CPlayerSource *)0x0;
}

