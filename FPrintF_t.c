
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __cdecl CTStream::FPrintF_t(char const *,...) */

void __thiscall CTStream::FPrintF_t(CTStream *this,char *param_1,...)

{
  char *in_stack_00000008;
  CTSingleLock local_81c [12];
  char local_810 [2048];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3e3e0  1599  ?FPrintF_t@CTStream@@QAAXPBDZZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210944;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_81c,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  _vsnprintf(local_810,0x800,in_stack_00000008,&stack0x0000000c);
  PutString_t((CTStream *)param_1,local_810);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_81c);
  ExceptionList = local_c;
  return;
}

