
/* public: void __thiscall CSessionState::ReadWorldAndState_t(class CTStream *) */

void __thiscall CSessionState::ReadWorldAndState_t(CSessionState *this,CTStream *param_1)

{
  CListNode *pCVar1;
  ulong uVar2;
  bool bVar3;
  CTString *this_00;
  int iVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  CEntity *pCVar10;
  int iVar11;
  char *pcVar12;
  int *piVar13;
  char *pcVar14;
  char *local_48;
  undefined1 local_44;
  int local_40;
  char *local_3c;
  undefined4 local_38;
  char *local_34;
  int *local_30;
  char *local_2c;
  CListHead local_24 [12];
  CListHead local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x110990  2999  ?ReadWorldAndState_t@CSessionState@@QAEXPAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621819f;
  local_c = ExceptionList;
  local_48 = (char *)0x0;
  ExceptionList = &local_c;
  CNetworkLibrary::CheckVersion_t(_pNetwork,param_1,0,&local_40);
  ::operator>>(param_1,(CTFileName *)(_pNetwork + 0x3c));
  local_34 = StringDuplicate(*(char **)(param_1 + 0x20));
  local_30 = (int *)0x0;
  local_4 = 0;
  local_48 = (char *)0x1;
  this_00 = (CTString *)CTFileName::FileExt((CTFileName *)&local_34);
  pcVar12 = (char *)0x3;
  local_4 = 1;
  local_48 = (char *)0x3;
  iVar4 = CTString::operator==(this_00,&DAT_362377a8);
  if (iVar4 != 0) {
    local_3c = StringDuplicate(*(char **)(param_1 + 0x20));
    local_38 = 0;
    pcVar12 = (char *)0x7;
    local_4 = 2;
    local_48 = (char *)0x7;
    lVar5 = GetFileTimeStamp_t((CTFileName *)(_pNetwork + 0x3c));
    lVar6 = GetFileTimeStamp_t((CTFileName *)&local_3c);
    if (lVar6 <= lVar5) {
      bVar3 = true;
      goto LAB_36110a78;
    }
  }
  bVar3 = false;
LAB_36110a78:
  local_4 = 1;
  if (((uint)pcVar12 & 4) != 0) {
    pcVar12 = (char *)((uint)pcVar12 & 0xfffffffb);
    local_48 = pcVar12;
    StringFree(local_3c);
  }
  local_4 = 0;
  if (((uint)pcVar12 & 2) != 0) {
    pcVar12 = (char *)((uint)pcVar12 & 0xfffffffd);
    local_48 = pcVar12;
    StringFree(local_2c);
  }
  local_4 = 0xffffffff;
  if (((uint)pcVar12 & 1) != 0) {
    StringFree(local_34);
  }
  if (bVar3) {
    pcVar7 = StringDuplicate(*(char **)(_pNetwork + 0x3c));
    local_4 = 3;
    pcVar8 = StringDuplicate(*(char **)(param_1 + 0x20));
    local_4._0_1_ = 4;
    pcVar12 = pcVar8;
    pcVar14 = pcVar7;
    local_48 = pcVar8;
    pcVar9 = Translate(s_ETRSCannot_play_demo_because_fil_362377b0,4);
    ThrowF_t(pcVar9,pcVar12,pcVar14);
    local_4 = CONCAT31(local_4._1_3_,3);
    StringFree(pcVar8);
    local_4 = 0xffffffff;
    StringFree(pcVar7);
  }
  CWorld::Clear((CWorld *)(_pNetwork + 0x11e4));
  CWorld::LockAll((CWorld *)(_pNetwork + 0x11e4));
  CWorld::LoadBrushes_t((CWorld *)(_pNetwork + 0x11e4),(CTFileName *)(_pNetwork + 0x3c));
  CWorld::ReadState_t((CWorld *)(_pNetwork + 0x11e4),param_1);
  CListHead::Clear(local_24);
  local_48 = (char *)DAT_362377f4;
  local_44 = DAT_362377f8;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_48);
  iVar4 = **(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  if (0 < iVar4) {
    do {
      uVar2 = **(ulong **)(param_1 + 0x14);
      *(ulong **)(param_1 + 0x14) = *(ulong **)(param_1 + 0x14) + 1;
      pCVar10 = CWorld::EntityFromID((CWorld *)(_pNetwork + 0x11e4),uVar2);
      pCVar1 = (CListNode *)(pCVar10 + 0x104);
      iVar11 = CListNode::IsLinked(pCVar1);
      if (iVar11 != 0) {
        CListNode::Remove(pCVar1);
        CListHead::AddTail(local_24,pCVar1);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  CListHead::MoveList((CListHead *)(_pNetwork + 0x1318),local_24);
  CListHead::Clear(local_18);
  local_44 = DAT_36237800;
  local_48 = (char *)DAT_362377fc;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_48);
  iVar4 = **(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  if (0 < iVar4) {
    do {
      uVar2 = **(ulong **)(param_1 + 0x14);
      *(ulong **)(param_1 + 0x14) = *(ulong **)(param_1 + 0x14) + 1;
      pCVar10 = CWorld::EntityFromID((CWorld *)(_pNetwork + 0x11e4),uVar2);
      pCVar1 = (CListNode *)(pCVar10 + 0x2a0);
      iVar11 = CListNode::IsLinked(pCVar1);
      if (iVar11 != 0) {
        CListNode::Remove(pCVar1);
      }
      CListHead::AddTail(local_18,pCVar1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  CListHead::MoveList((CListHead *)(_pNetwork + 0x1324),local_18);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  iVar4 = *(int *)(_pNetwork + 0x18);
  piVar13 = (int *)(iVar4 + 0xc);
  local_34 = (char *)0x0;
  local_4 = 5;
  local_30 = piVar13;
  if (0 < *piVar13) {
    do {
      pcVar12 = local_34;
      FUN_36109360((void *)((int)local_34 * 0x100 + *(int *)(iVar4 + 0x10)),(int)param_1);
      local_34 = (char *)((int)pcVar12 + 1);
    } while ((int)local_34 < *piVar13);
  }
  local_4 = 0xffffffff;
  CWorld::UnlockAll((CWorld *)(_pNetwork + 0x11e4));
  ExceptionList = local_c;
  return;
}

