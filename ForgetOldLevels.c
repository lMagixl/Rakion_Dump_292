
/* public: void __thiscall CSessionState::ForgetOldLevels(void) */

void __thiscall CSessionState::ForgetOldLevels(CSessionState *this)

{
  CListNode *pCVar1;
  CListNode *pCVar2;
  
                    /* 0x10fc80  1665  ?ForgetOldLevels@CSessionState@@QAEXXZ */
  pCVar2 = *(CListNode **)(this + 0x5c);
  while (pCVar1 = *(CListNode **)pCVar2, pCVar1 != (CListNode *)0x0) {
    FUN_36113b10(pCVar2);
    operator_delete(pCVar2);
    pCVar2 = pCVar1;
  }
  return;
}

