
/* public: void __thiscall CShell::SetINDEX(class CTString const &,long) */

void __thiscall CShell::SetINDEX(CShell *this,CTString *param_1,long param_2)

{
  CShellSymbol *pCVar1;
  int *piVar2;
  
                    /* 0x387a0  3490  ?SetINDEX@CShell@@QAEXABVCTString@@J@Z */
  pCVar1 = GetSymbol(this,param_1,1);
  if (pCVar1 != (CShellSymbol *)0x0) {
    piVar2 = (int *)thunk_FUN_36039b40(&DAT_362bec70,*(int *)pCVar1);
    if (*piVar2 == 5) {
      **(long **)(pCVar1 + 8) = param_2;
    }
  }
  return;
}

