
/* public: void __thiscall CWorld::DestroyEntities(class CSelection<class CEntity,1> &) */

void __thiscall CWorld::DestroyEntities(CWorld *this,CSelection<class_CEntity,1> *param_1)

{
  int iVar1;
  int *piVar2;
  CEntity *pCVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xc98a0  1487  ?DestroyEntities@CWorld@@QAEXAAV?$CSelection@VCEntity@@$00@@@Z
                        */
  puStack_8 = &LAB_3621453c;
  pvStack_c = ExceptionList;
  iVar4 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_360caf20((int)param_1);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_360cafb0(param_1,iVar4);
      iVar1 = (**(code **)(*piVar2 + 0x8c))();
      if (iVar1 != 0) {
        pCVar3 = (CEntity *)FUN_360cafb0(param_1,iVar4);
        UntargetEntity(this,pCVar3);
      }
      piVar2 = (int *)FUN_360cafb0(param_1,iVar4);
      (**(code **)(*piVar2 + 0x58))(1);
      iVar4 = iVar4 + 1;
      iVar1 = FUN_360caf20((int)param_1);
    } while (iVar4 < iVar1);
  }
  FUN_360ccbb0((undefined4 *)param_1);
  ExceptionList = pvStack_c;
  return;
}

