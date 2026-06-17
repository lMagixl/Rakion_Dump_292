
/* public: class CEntity * __thiscall CNetworkLibrary::GetEntityWithName(class CTString const
   &,long) */

CEntity * __thiscall
CNetworkLibrary::GetEntityWithName(CNetworkLibrary *this,CTString *param_1,long param_2)

{
  CNetworkLibrary *this_00;
  CTString *pCVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  CEntity *pCVar5;
  int iVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xf8680  1858
                       ?GetEntityWithName@CNetworkLibrary@@QAEPAVCEntity@@ABVCTString@@J@Z */
  puStack_8 = &LAB_36216e02;
  local_c = ExceptionList;
  this_00 = this + 0x1340;
  iVar7 = 0;
  iVar6 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_360caf20((int)this_00);
  pCVar1 = param_1;
  if (iVar2 < 1) {
    ExceptionList = local_c;
    return (CEntity *)0x0;
  }
  do {
    piVar3 = (int *)FUN_360cafb0(this_00,iVar7);
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x80))();
    param_1 = (CTString *)StringDuplicate((char *)*puVar4);
    local_4._0_1_ = 1;
    iVar2 = CTString::operator==((CTString *)&param_1,pCVar1);
    if (iVar2 != 0) {
      if (iVar6 == param_2) {
        pCVar5 = (CEntity *)FUN_360cafb0(this_00,iVar7);
        local_4 = (uint)local_4._1_3_ << 8;
        StringFree((char *)param_1);
        ExceptionList = local_c;
        return pCVar5;
      }
      iVar6 = iVar6 + 1;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree((char *)param_1);
    iVar7 = iVar7 + 1;
    iVar2 = FUN_360caf20((int)this_00);
  } while (iVar7 < iVar2);
  ExceptionList = local_c;
  return (CEntity *)0x0;
}

