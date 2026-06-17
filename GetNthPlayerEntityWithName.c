
/* public: class CPlayerEntity * __thiscall CNetworkLibrary::GetNthPlayerEntityWithName(class
   CTString const &,long) */

CPlayerEntity * __thiscall
CNetworkLibrary::GetNthPlayerEntityWithName(CNetworkLibrary *this,CTString *param_1,long param_2)

{
  CNetworkLibrary *this_00;
  int iVar1;
  int *piVar2;
  CTString *this_01;
  CPlayerEntity *pCVar3;
  int iVar4;
  int iVar5;
  CTString *pCVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf8830  2020
                       ?GetNthPlayerEntityWithName@CNetworkLibrary@@QAEPAVCPlayerEntity@@ABVCTString@@J@Z
                        */
  puStack_8 = &LAB_36216e26;
  local_c = ExceptionList;
  iVar5 = 0;
  this_00 = this + 0x1340;
  iVar4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360caf20((int)this_00);
  if (iVar1 < 1) {
    ExceptionList = local_c;
    return (CPlayerEntity *)0x0;
  }
  do {
    piVar2 = (int *)FUN_360cafb0(this_00,iVar5);
    iVar1 = (**(code **)(*piVar2 + 0x70))();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_360cafb0(this_00,iVar5);
      pCVar6 = param_1;
      this_01 = (CTString *)(**(code **)(*piVar2 + 0x80))();
      iVar1 = CTString::operator==(this_01,pCVar6);
      if (iVar1 != 0) {
        if (iVar4 == param_2) {
          pCVar3 = (CPlayerEntity *)FUN_360cafb0(this_00,iVar5);
          ExceptionList = local_c;
          return pCVar3;
        }
        iVar4 = iVar4 + 1;
      }
    }
    iVar5 = iVar5 + 1;
    iVar1 = FUN_360caf20((int)this_00);
  } while (iVar5 < iVar1);
  ExceptionList = local_c;
  return (CPlayerEntity *)0x0;
}

