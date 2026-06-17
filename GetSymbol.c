
/* public: class CShellSymbol * __thiscall CShell::GetSymbol(class CTString const &,int) */

CShellSymbol * __thiscall CShell::GetSymbol(CShell *this,CTString *param_1,int param_2)

{
  int iVar1;
  CShellSymbol *pCVar2;
  undefined4 uVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x385f0  2148  ?GetSymbol@CShell@@QAEPAVCShellSymbol@@ABVCTString@@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210334;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)this,1);
  local_4 = 0;
  iVar1 = FUN_3603ad70(&DAT_362bebfc,param_1);
  if (iVar1 == -1) {
    if (param_2 != 0) {
      local_4 = 0xffffffff;
      CTSingleLock::~CTSingleLock(local_18);
      ExceptionList = local_c;
      return (CShellSymbol *)0x0;
    }
    uVar3 = FUN_36039a70((int)(this + 8));
    FUN_3603acc0(&DAT_362bebfc,param_1,uVar3);
    pCVar2 = (CShellSymbol *)FUN_36039c90(this + 8,1);
    CTString::operator=((CTString *)(pCVar2 + 4),param_1);
    *(int *)pCVar2 = DAT_362a2614;
    *(int *)(pCVar2 + 8) = 0;
    *(int *)(pCVar2 + 0x14) = 0;
    *(int *)(pCVar2 + 0xc) = 0;
    *(int *)(pCVar2 + 0x10) = 0;
  }
  else {
    pCVar2 = (CShellSymbol *)thunk_FUN_360399b0(this + 8,iVar1);
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return pCVar2;
}

