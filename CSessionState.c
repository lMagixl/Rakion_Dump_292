
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall CSessionState::CSessionState(void) */

CSessionState * __thiscall CSessionState::CSessionState(CSessionState *this)

{
  char *pcVar1;
  DWORD DVar2;
  int iVar3;
  CSessionState *pCVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x111e20  217  ??0CSessionState@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362182f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)this = pcVar1;
  local_4 = 0;
  FUN_36106460((CListHead *)(this + 8));
  local_4._0_1_ = 1;
  CListHead::Clear((CListHead *)(this + 0x5c));
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x7c) = pcVar1;
  local_4._0_1_ = 2;
  FUN_361009b0((undefined4 *)(this + 0x90));
  local_4._0_1_ = 3;
  CNetworkMessage::CNetworkMessage((CNetworkMessage *)(this + 0x1cdc));
  FUN_360ccb50((undefined4 *)(this + 0x2960));
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_36109840((undefined4 *)(this + 0x2970));
  *(undefined4 *)(this + 0x68) = 1;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  pcVar1 = StringDuplicate(&DAT_3623738d);
  StringFree(*(char **)(this + 0x7c));
  *(char **)(this + 0x7c) = pcVar1;
  *(undefined4 *)(this + 0x84) = 1;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0x3f800000;
  this[0x80] = (CSessionState)0x0;
  ResetRND(this);
  *(undefined4 *)(this + 0x1d00) = 0xbf800000;
  *(undefined4 *)(this + 0x1d04) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  DVar2 = timeGetTime();
  *(undefined8 *)(this + 0x20) = _DAT_36227d98;
  *(DWORD *)(this + 0x18) = DVar2;
  *(undefined4 *)(this + 0x28) = 0xbf800000;
  *(undefined4 *)(this + 0x2947) = 0;
  *(undefined4 *)(this + 0x294b) = 0;
  *(undefined4 *)(this + 0x294f) = 0;
  *(undefined4 *)(this + 0x2953) = 0;
  *(undefined4 *)(this + 0x2957) = 0;
  pCVar4 = this + 0x1d70;
  for (iVar3 = 0xb4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar4 = 0xffffffff;
    pCVar4 = pCVar4 + 4;
  }
  *(undefined4 *)(this + 0x2044) = 0xffffffff;
  *(undefined4 *)(this + 0x2040) = 0xffffffff;
  ClearQuestModeEntity(this);
  ClearMapItems(this);
  ExceptionList = local_c;
  return this;
}

