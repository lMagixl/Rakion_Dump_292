
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall CShell::GetFLOAT(class CTString const &) */

float __thiscall CShell::GetFLOAT(CShell *this,CTString *param_1)

{
  CShellSymbol *pCVar1;
  int *piVar2;
  
                    /* 0x386e0  1861  ?GetFLOAT@CShell@@QAEMABVCTString@@@Z */
  pCVar1 = GetSymbol(this,param_1,1);
  if (pCVar1 != (CShellSymbol *)0x0) {
    piVar2 = (int *)thunk_FUN_36039b40(&DAT_362bec70,*(int *)pCVar1);
    if (*piVar2 == 6) {
      return **(float **)(pCVar1 + 8);
    }
  }
  return _DAT_362265ac;
}

