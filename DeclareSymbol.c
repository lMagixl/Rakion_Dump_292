
/* public: void __thiscall CShell::DeclareSymbol(class CTString const &,void *) */

void __thiscall CShell::DeclareSymbol(CShell *this,CTString *param_1,void *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x390f0  1454  ?DeclareSymbol@CShell@@QAEXABVCTString@@PAX@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210444;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)this,1);
  uVar1 = DAT_362a2620;
  DAT_362beb2c = DAT_362beb2c + 1;
  uVar3 = 1;
  local_4 = 0;
  DAT_362beaa0 = param_2;
  DAT_362a2620 = 1;
  pcVar2 = CTString::operator_char_const_(param_1);
  FUN_36037080(s_<declaration>_362263e8,pcVar2,uVar3);
  FUN_361b51a0();
  DAT_362beb2c = DAT_362beb2c + -1;
  DAT_362a2620 = uVar1;
  if (DAT_362beb2c < 1) {
    FUN_3603a0e0((CListHead *)&DAT_362bec18);
  }
  DAT_362beaa0 = (void *)0x0;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

