
/* public: enum ShellTypeType __thiscall CShell::GetType(class CTString const &) */

ShellTypeType __thiscall CShell::GetType(CShell *this,CTString *param_1)

{
  CShellSymbol *pCVar1;
  ShellTypeType *pSVar2;
  
                    /* 0x38a20  2162  ?GetType@CShell@@QAE?AW4ShellTypeType@@ABVCTString@@@Z */
  pCVar1 = GetSymbol(this,param_1,1);
  pSVar2 = (ShellTypeType *)thunk_FUN_36039b40(&DAT_362bec70,*(int *)pCVar1);
  return *pSVar2;
}

