
/* public: class CRememberedLevel * __thiscall CSessionState::FindRememberedLevel(class CTString
   const &) */

CRememberedLevel * __thiscall
CSessionState::FindRememberedLevel(CSessionState *this,CTString *param_1)

{
  int iVar1;
  CRememberedLevel *pCVar2;
  
                    /* 0x10fc40  1639
                       ?FindRememberedLevel@CSessionState@@QAEPAVCRememberedLevel@@ABVCTString@@@Z
                        */
  pCVar2 = *(CRememberedLevel **)(this + 0x5c);
  while( true ) {
    if (*(int *)pCVar2 == 0) {
      return (CRememberedLevel *)0x0;
    }
    iVar1 = CTString::operator==((CTString *)(pCVar2 + 8),param_1);
    if (iVar1 != 0) break;
    pCVar2 = *(CRememberedLevel **)pCVar2;
  }
  return pCVar2;
}

