
/* public: void __thiscall CShell::SetString(class CTString const &,class CTString const &) */

void __thiscall CShell::SetString(CShell *this,CTString *param_1,CTString *param_2)

{
  CShellSymbol *pCVar1;
  int *piVar2;
  
                    /* 0x38840  3599  ?SetString@CShell@@QAEXABVCTString@@0@Z */
  pCVar1 = GetSymbol(this,param_1,1);
  if (pCVar1 != (CShellSymbol *)0x0) {
    piVar2 = (int *)thunk_FUN_36039b40(&DAT_362bec70,*(int *)pCVar1);
    if (*piVar2 == 7) {
      CTString::operator=(*(CTString **)(pCVar1 + 8),param_2);
    }
  }
  return;
}

