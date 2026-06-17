
/* public: void __thiscall CSessionState::UpdateAllEntitiesTick(void) */

void __thiscall CSessionState::UpdateAllEntitiesTick(CSessionState *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  CNetworkLibrary *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x111970  3905  ?UpdateAllEntitiesTick@CSessionState@@QAEXXZ */
  puStack_8 = &LAB_3621828f;
  local_c = ExceptionList;
  this_00 = _pNetwork + 0x1340;
  iVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360caf20((int)this_00);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_360cafb0(this_00,iVar3);
      (**(code **)(*piVar2 + 0x120))();
      iVar3 = iVar3 + 1;
      iVar1 = FUN_360caf20((int)this_00);
    } while (iVar3 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

