
/* public: void __thiscall CSessionState::RememberCurrentLevel(class CTString const &) */

void __thiscall CSessionState::RememberCurrentLevel(CSessionState *this,CTString *param_1)

{
  CListNode *pCVar1;
  undefined4 *puVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x110f90  3113  ?RememberCurrentLevel@CSessionState@@QAEXABVCTString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362181d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CListNode *)FindRememberedLevel(this,param_1);
  while (pCVar1 != (CListNode *)0x0) {
    CListNode::Remove(pCVar1);
    if (pCVar1 != (CListNode *)0x0) {
      FUN_36113b10(pCVar1);
      operator_delete(pCVar1);
    }
    pCVar1 = (CListNode *)FindRememberedLevel(this,param_1);
  }
  puVar2 = (undefined4 *)FUN_361bf99c(0x68);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    pCVar1 = (CListNode *)0x0;
  }
  else {
    pCVar1 = (CListNode *)FUN_36113ab0(puVar2);
  }
  local_4 = 0xffffffff;
  CListHead::AddTail((CListHead *)(this + 0x5c),pCVar1);
  pcVar3 = StringDuplicate(*(char **)param_1);
  StringFree(*(char **)(pCVar1 + 8));
  *(char **)(pCVar1 + 8) = pcVar3;
  WriteWorldAndState_t(this,(CTStream *)(pCVar1 + 0xc));
  ExceptionList = local_c;
  return;
}

