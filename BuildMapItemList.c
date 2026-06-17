
/* public: int __thiscall CSessionState::BuildMapItemList(void) */

int __thiscall CSessionState::BuildMapItemList(CSessionState *this)

{
  CSessionState *this_00;
  int iVar1;
  CEntity *pCVar2;
  undefined4 uVar3;
  CNetworkLibrary *this_01;
  int iVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x111d30  1094  ?BuildMapItemList@CSessionState@@QAEHXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362182a1;
  local_c = ExceptionList;
  if (*(int *)(this + 0x295c) == -1) {
    this_00 = this + 0x2960;
    ExceptionList = &local_c;
    FUN_360ccbb0((undefined4 *)this_00);
    this_01 = _pNetwork + 0x1340;
    iVar4 = 0;
    local_4 = 0;
    iVar1 = FUN_360caf20((int)this_01);
    if (0 < iVar1) {
      do {
        pcVar5 = s_MapItem_3623793c;
        pCVar2 = (CEntity *)FUN_360cafb0(this_01,iVar4);
        iVar1 = IsDerivedFromClass(pCVar2,pcVar5);
        if (iVar1 == 0) {
          pcVar5 = s_BoxItem_36237944;
          pCVar2 = (CEntity *)FUN_360cafb0(this_01,iVar4);
          iVar1 = IsDerivedFromClass(pCVar2,pcVar5);
          if (iVar1 != 0) goto LAB_36111dc4;
        }
        else {
LAB_36111dc4:
          uVar3 = FUN_360cafb0(this_01,iVar4);
          FUN_360ccb70(this_00,uVar3);
        }
        iVar4 = iVar4 + 1;
        iVar1 = FUN_360caf20((int)this_01);
      } while (iVar4 < iVar1);
    }
    uVar3 = FUN_360caf20((int)this_00);
    *(undefined4 *)(this + 0x295c) = uVar3;
  }
  ExceptionList = local_c;
  return (uint)(*(int *)(this + 0x295c) != -1);
}

