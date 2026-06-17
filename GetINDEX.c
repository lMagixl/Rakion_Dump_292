
/* public: long __thiscall CShell::GetINDEX(class CTString const &) */

long __thiscall CShell::GetINDEX(CShell *this,CTString *param_1)

{
  CShellSymbol *pCVar1;
  int *piVar2;
  
                    /* 0x38760  1922  ?GetINDEX@CShell@@QAEJABVCTString@@@Z */
  pCVar1 = GetSymbol(this,param_1,1);
  if (pCVar1 != (CShellSymbol *)0x0) {
    piVar2 = (int *)thunk_FUN_36039b40(&DAT_362bec70,*(int *)pCVar1);
    if (*piVar2 == 5) {
      return **(long **)(pCVar1 + 8);
    }
  }
  return -0x29a;
}

