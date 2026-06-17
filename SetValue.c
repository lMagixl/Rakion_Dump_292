
/* public: void __thiscall CShell::SetValue(class CTString const &,class CTString const &) */

void __thiscall CShell::SetValue(CShell *this,CTString *param_1,CTString *param_2)

{
  int iVar1;
  CShellSymbol *pCVar2;
  int *piVar3;
  CTString *this_00;
  
                    /* 0x389a0  3618  ?SetValue@CShell@@QAEXABVCTString@@0@Z */
  pCVar2 = GetSymbol(this,param_1,1);
  if (pCVar2 != (CShellSymbol *)0x0) {
    piVar3 = (int *)thunk_FUN_36039b40(&DAT_362bec70,*(int *)pCVar2);
    iVar1 = *piVar3;
    if (iVar1 == 5) {
      CTString::ScanF(this_00,(char *)param_2);
    }
    else {
      if (iVar1 == 6) {
        CTString::ScanF(param_2,(char *)param_2);
        return;
      }
      if (iVar1 == 7) {
        CTString::operator=(*(CTString **)(pCVar2 + 8),param_2);
        return;
      }
    }
  }
  return;
}

