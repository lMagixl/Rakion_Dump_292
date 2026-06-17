
/* public: void __thiscall CSessionState::WriteWorldAndState_t(class CTStream *) */

void __thiscall CSessionState::WriteWorldAndState_t(CSessionState *this,CTStream *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  CListHead *pCVar5;
  int *piVar6;
  int local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x110df0  4000  ?WriteWorldAndState_t@CSessionState@@QAEXPAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362181c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CNetworkLibrary::WriteVersion_t(_pNetwork,param_1);
  ::operator<<(param_1,(CTFileName *)(_pNetwork + 0x3c));
  CWorld::LockAll((CWorld *)(_pNetwork + 0x11e4));
  CWorld::WriteState_t((CWorld *)(_pNetwork + 0x11e4),param_1,1);
  local_14 = DAT_36237814;
  local_10._0_1_ = DAT_36237818;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_14);
  pCVar5 = (CListHead *)(_pNetwork + 0x1318);
  lVar3 = CListHead::Count(pCVar5);
  **(long **)(param_1 + 0x14) = lVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  for (piVar6 = *(int **)pCVar5; *piVar6 != 0; piVar6 = (int *)*piVar6) {
    **(int **)(param_1 + 0x14) = piVar6[-0x3a];
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  }
  local_10 = (int *)CONCAT31(local_10._1_3_,DAT_36237820);
  local_14 = DAT_3623781c;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_14);
  pCVar5 = (CListHead *)(_pNetwork + 0x1324);
  lVar3 = CListHead::Count(pCVar5);
  **(long **)(param_1 + 0x14) = lVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  for (piVar6 = *(int **)pCVar5; piVar1 = *(int **)(param_1 + 0x14), *piVar6 != 0;
      piVar6 = (int *)*piVar6) {
    *piVar1 = piVar6[-0xa1];
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  }
  iVar4 = FUN_360a5a70((undefined4 *)(*(int *)(_pNetwork + 0x18) + 0xc));
  *piVar1 = iVar4;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  iVar4 = *(int *)(_pNetwork + 0x18);
  piVar6 = (int *)(iVar4 + 0xc);
  local_14 = 0;
  local_4 = 0;
  local_10 = piVar6;
  if (0 < *piVar6) {
    do {
      iVar2 = local_14;
      FUN_36109440((void *)(local_14 * 0x100 + *(int *)(iVar4 + 0x10)),(int)param_1);
      local_14 = iVar2 + 1;
    } while (local_14 < *piVar6);
  }
  local_4 = 0xffffffff;
  CWorld::UnlockAll((CWorld *)(_pNetwork + 0x11e4));
  ExceptionList = local_c;
  return;
}

