
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CTStream::GetLine_t(class CTString &,char) */

void __thiscall CTStream::GetLine_t(CTStream *this,CTString *param_1,char param_2)

{
  char *pcVar1;
  char local_404 [1024];
  undefined4 local_4;
  
                    /* 0x3e290  1952  ?GetLine_t@CTStream@@QAEXAAVCTString@@D@Z */
  local_4 = DAT_362abd90;
  GetLine_t(this,local_404,0x3ff,param_2);
  pcVar1 = StringDuplicate(local_404);
  StringFree(*(char **)param_1);
  *(char **)param_1 = pcVar1;
  return;
}

