
/* public: long __thiscall CNetworkLibrary::GetNumberOfPlayerEntitiesWithName(class CTString const
   &) */

long __thiscall
CNetworkLibrary::GetNumberOfPlayerEntitiesWithName(CNetworkLibrary *this,CTString *param_1)

{
  CNetworkLibrary *this_00;
  int iVar1;
  int *piVar2;
  CTString *this_01;
  long lVar3;
  int iVar4;
  CTString *pCVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf8790  2022
                       ?GetNumberOfPlayerEntitiesWithName@CNetworkLibrary@@QAEJABVCTString@@@Z */
  puStack_8 = &LAB_36216e14;
  local_c = ExceptionList;
  iVar4 = 0;
  this_00 = this + 0x1340;
  lVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360caf20((int)this_00);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_360cafb0(this_00,iVar4);
      iVar1 = (**(code **)(*piVar2 + 0x70))();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_360cafb0(this_00,iVar4);
        pCVar5 = param_1;
        this_01 = (CTString *)(**(code **)(*piVar2 + 0x80))();
        iVar1 = CTString::operator==(this_01,pCVar5);
        if (iVar1 != 0) {
          lVar3 = lVar3 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_360caf20((int)this_00);
    } while (iVar4 < iVar1);
  }
  ExceptionList = local_c;
  return lVar3;
}

