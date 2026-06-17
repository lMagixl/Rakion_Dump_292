
/* public: void __thiscall CShell::SetFLOAT(class CTString const &,float) */

void __thiscall CShell::SetFLOAT(CShell *this,CTString *param_1,float param_2)

{
  CShellSymbol *pCVar1;
  int *piVar2;
  
                    /* 0x38720  3457  ?SetFLOAT@CShell@@QAEXABVCTString@@M@Z */
  pCVar1 = GetSymbol(this,param_1,1);
  if (pCVar1 != (CShellSymbol *)0x0) {
    piVar2 = (int *)thunk_FUN_36039b40(&DAT_362bec70,*(int *)pCVar1);
    if (*piVar2 == 6) {
      **(float **)(pCVar1 + 8) = param_2;
    }
  }
  return;
}

