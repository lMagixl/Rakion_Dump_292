
/* public: class CEntity * __thiscall CNetworkLibrary::GetEntityOfClass(class CTString const &,long)
    */

CEntity * __thiscall
CNetworkLibrary::GetEntityOfClass(CNetworkLibrary *this,CTString *param_1,long param_2)

{
  CNetworkLibrary *this_00;
  int iVar1;
  CEntity *pCVar2;
  CEntity *pCVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf89b0  1855
                       ?GetEntityOfClass@CNetworkLibrary@@QAEPAVCEntity@@ABVCTString@@J@Z */
  puStack_8 = &LAB_36216e4a;
  local_c = ExceptionList;
  this_00 = this + 0x1340;
  iVar5 = 0;
  iVar4 = 0;
  pCVar3 = (CEntity *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360caf20((int)this_00);
  if (0 < iVar1) {
    do {
      pcVar6 = *(char **)param_1;
      pCVar2 = (CEntity *)FUN_360cafb0(this_00,iVar5);
      iVar1 = IsOfClass(pCVar2,pcVar6);
      if (iVar1 != 0) {
        pCVar3 = (CEntity *)FUN_360cafb0(this_00,iVar5);
        if (iVar4 == param_2) {
          ExceptionList = local_c;
          return pCVar3;
        }
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_360caf20((int)this_00);
    } while (iVar5 < iVar1);
  }
  ExceptionList = local_c;
  return pCVar3;
}

