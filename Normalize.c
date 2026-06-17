
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CPlayerAction::Normalize(void) */

void __thiscall CPlayerAction::Normalize(CPlayerAction *this)

{
  CPlayerAction *pCVar1;
  int iVar2;
  
                    /* 0x1064a0  2677  ?Normalize@CPlayerAction@@QAEXXZ */
  pCVar1 = this + 0x38;
  iVar2 = 9;
  do {
    if (_DAT_3622376c == *(float *)pCVar1) {
      *(float *)pCVar1 = 0.0;
    }
    pCVar1 = pCVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

