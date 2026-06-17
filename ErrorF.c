
/* public: void __cdecl CShell::ErrorF(char const *,...) */

void __thiscall CShell::ErrorF(CShell *this,char *param_1,...)

{
  undefined4 uVar1;
  char *pcVar2;
  char *extraout_ECX;
  char *in_stack_00000008;
  CTString local_1c [4];
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x38150  1581  ?ErrorF@CShell@@QAAXPBDZZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362102e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)param_1,1);
  local_4 = 0;
  FUN_36037180();
  uVar1 = FUN_36037190();
  if (*extraout_ECX == '<') {
    uVar1 = FUN_360371b0();
    CPrintF(s__s__s__d___3622642c,uVar1);
  }
  else {
    CPrintF(s__s__d___36226438,extraout_ECX,uVar1);
  }
  CTString::CTString(local_1c);
  local_4._0_1_ = 1;
  CTString::VPrintF(local_1c,in_stack_00000008,&stack0x0000000c);
  pcVar2 = CTString::operator_char_const_(local_1c);
  CPrintF(pcVar2);
  CPrintF(&DAT_36226444);
  local_4 = (uint)local_4._1_3_ << 8;
  CTString::~CTString(local_1c);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

