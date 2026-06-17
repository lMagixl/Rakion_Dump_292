
/* public: void __thiscall CSessionState::WriteState_t(class CTStream *) */

void __thiscall CSessionState::WriteState_t(CSessionState *this,CTStream *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x110d20  3994  ?WriteState_t@CSessionState@@QAEXPAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362181b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CWorld::LockAll((CWorld *)(_pNetwork + 0x11e4));
  CWorld::WriteState_net_t((CWorld *)(_pNetwork + 0x11e4),param_1);
  uVar2 = FUN_360a5a70((undefined4 *)(*(int *)(_pNetwork + 0x18) + 0xc));
  **(undefined4 **)(param_1 + 0x14) = uVar2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  iVar1 = *(int *)(_pNetwork + 0x18);
  piVar4 = (int *)(iVar1 + 0xc);
  iVar3 = 0;
  local_4 = 0;
  if (0 < *piVar4) {
    do {
      FUN_36109440((void *)(iVar3 * 0x100 + *(int *)(iVar1 + 0x10)),(int)param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piVar4);
  }
  local_4 = 0xffffffff;
  CWorld::UnlockAll((CWorld *)(_pNetwork + 0x11e4));
  ExceptionList = local_c;
  return;
}

