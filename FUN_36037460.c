
void __cdecl FUN_36037460(char *param_1,char *param_2)

{
  char *pcVar1;
  CTStream *this;
  CTString local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621014b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTString::CTString(local_10);
  local_4 = 0;
  CTString::VPrintF(local_10,param_2,&stack0x0000000c);
  pcVar1 = CTString::operator_char_const_(local_10);
  if (param_1 == (char *)0x0) {
    CPrintF(pcVar1);
  }
  else {
    CTStream::FPrintF_t(this,param_1);
  }
  local_4 = 0xffffffff;
  CTString::~CTString(local_10);
  ExceptionList = local_c;
  return;
}

