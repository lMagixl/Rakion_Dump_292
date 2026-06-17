
/* public: class CPlayerEntity * __thiscall CNetworkLibrary::GetNthPlayerEntity(long) */

CPlayerEntity * __thiscall CNetworkLibrary::GetNthPlayerEntity(CNetworkLibrary *this,long param_1)

{
  CNetworkLibrary *this_00;
  int iVar1;
  int *piVar2;
  CPlayerEntity *pCVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf8910  2019  ?GetNthPlayerEntity@CNetworkLibrary@@QAEPAVCPlayerEntity@@J@Z
                        */
  puStack_8 = &LAB_36216e38;
  local_c = ExceptionList;
  this_00 = this + 0x1340;
  iVar5 = 0;
  iVar4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360caf20((int)this_00);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_360cafb0(this_00,iVar5);
      iVar1 = (**(code **)(*piVar2 + 0x70))();
      if (iVar1 != 0) {
        if (iVar4 == param_1) {
          pCVar3 = (CPlayerEntity *)FUN_360cafb0(this_00,iVar5);
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
  return (CPlayerEntity *)0x0;
}

