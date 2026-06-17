
/* public: class CEntity * __thiscall CNetworkLibrary::GetPlayerEntityByName(class CTString const &)
    */

CEntity * __thiscall CNetworkLibrary::GetPlayerEntityByName(CNetworkLibrary *this,CTString *param_1)

{
  int *piVar1;
  int iVar2;
  CEntity *pCVar3;
  int iVar4;
  CTString *this_00;
  int iVar5;
  int iVar6;
  CTString *pCVar7;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf4b30  2049
                       ?GetPlayerEntityByName@CNetworkLibrary@@QAEPAVCEntity@@ABVCTString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36216733;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)(this + 0x1c),1);
  iVar2 = *(int *)(this + 0x18);
  local_4 = 0;
  iVar6 = 0;
  iVar4 = FUN_360a5a70((undefined4 *)(iVar2 + 0xc));
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      piVar1 = (int *)(*(int *)(iVar2 + 0x10) + iVar4);
      if (*piVar1 != 0) {
        pCVar7 = param_1;
        this_00 = CPlayerCharacter::GetName((CPlayerCharacter *)(piVar1[1] + 0x368));
        iVar5 = CTString::operator==(this_00,pCVar7);
        if (iVar5 != 0) {
          pCVar3 = *(CEntity **)(iVar6 * 0x100 + 4 + *(int *)(iVar2 + 0x10));
          local_4 = 0xffffffff;
          CTSingleLock::~CTSingleLock(local_18);
          ExceptionList = local_c;
          return pCVar3;
        }
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x100;
      iVar5 = FUN_360a5a70((undefined4 *)(iVar2 + 0xc));
    } while (iVar6 < iVar5);
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return (CEntity *)0x0;
}

