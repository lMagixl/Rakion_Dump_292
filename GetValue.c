
/* public: class CTString __thiscall CShell::GetValue(class CTString const &) */

CTString * __thiscall CShell::GetValue(CShell *this,CTString *param_1)

{
  int iVar1;
  CShellSymbol *pCVar2;
  int *piVar3;
  CTString *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x38880  2191  ?GetValue@CShell@@QAE?AVCTString@@ABV2@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621035f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar2 = GetSymbol(this,in_stack_00000008,1);
  if (pCVar2 == (CShellSymbol *)0x0) {
    CTString::CTString(param_1,s_<invalid>_36226410);
    ExceptionList = local_c;
    return param_1;
  }
  piVar3 = (int *)thunk_FUN_36039b40(&DAT_362bec70,*(int *)pCVar2);
  iVar1 = *piVar3;
  CTString::CTString((CTString *)&stack0x00000008);
  local_4 = 1;
  if (iVar1 == 5) {
    CTString::PrintF((CTString *)&stack0x00000008,(char *)&stack0x00000008,&DAT_3622641c);
  }
  else if (iVar1 == 6) {
    CTString::PrintF((CTString *)&stack0x00000008,(char *)&stack0x00000008,&DAT_36226420,
                     (double)**(float **)(pCVar2 + 8));
  }
  else {
    if (iVar1 != 7) {
      CTString::CTString(param_1,&DAT_36226423);
      goto LAB_3603896c;
    }
    CTString::operator=((CTString *)&stack0x00000008,*(CTString **)(pCVar2 + 8));
  }
  CTString::CTString(param_1,(CTString *)&stack0x00000008);
LAB_3603896c:
  local_4 = local_4 & 0xffffff00;
  CTString::~CTString((CTString *)&stack0x00000008);
  ExceptionList = local_c;
  return param_1;
}

