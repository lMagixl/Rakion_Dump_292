
/* public: class CTString __thiscall CShellSymbol::GetCompletionString(void)const  */

CTString * __thiscall CShellSymbol::GetCompletionString(CShellSymbol *this)

{
  int *piVar1;
  char *pcVar2;
  CTString *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x382d0  1791  ?GetCompletionString@CShellSymbol@@QBE?AVCTString@@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210300;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_36039b40(&DAT_362bec70,*(int *)this);
  if (*piVar1 == 2) {
    pcVar2 = StringDuplicate(&DAT_36225bac);
    local_4 = 0;
    CTString::operator+((CTString *)(this + 4),in_stack_00000004);
    local_4 = 0xffffffff;
    StringFree(pcVar2);
  }
  else if (*piVar1 == 3) {
    pcVar2 = StringDuplicate(&DAT_36225bb0);
    local_4 = 1;
    CTString::operator+((CTString *)(this + 4),in_stack_00000004);
    local_4 = 0xffffffff;
    StringFree(pcVar2);
  }
  else {
    pcVar2 = StringDuplicate(*(char **)(this + 4));
    *(char **)in_stack_00000004 = pcVar2;
  }
  ExceptionList = local_c;
  return in_stack_00000004;
}

