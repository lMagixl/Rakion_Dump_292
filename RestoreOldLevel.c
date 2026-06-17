
/* public: void __thiscall CSessionState::RestoreOldLevel(class CTString const &) */

void __thiscall CSessionState::RestoreOldLevel(CSessionState *this,CTString *param_1)

{
  CRememberedLevel *pCVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x111060  3171  ?RestoreOldLevel@CSessionState@@QAEXABVCTString@@@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_362181e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pCVar1 = FindRememberedLevel(this,param_1);
  local_8 = 0;
  CTStream::SetPos_t((CTStream *)(pCVar1 + 0xc),0);
  *(undefined4 *)(_pTimer + 0xc) = 0;
  ReadWorldAndState_t(this,(CTStream *)(pCVar1 + 0xc));
  *(undefined4 *)(_pTimer + 0xc) = *(undefined4 *)(this + 0x2c);
  local_8 = 0xffffffff;
  if (pCVar1 != (CRememberedLevel *)0x0) {
    FUN_36113b10((CListNode *)pCVar1);
    operator_delete(pCVar1);
  }
  ExceptionList = local_10;
  return;
}

