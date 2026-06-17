
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CTFileName::ReadFromText_t(class CTStream &,class CTString const &) */

void __thiscall CTFileName::ReadFromText_t(CTFileName *this,CTStream *param_1,CTString *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *local_41c;
  char local_418;
  undefined3 uStack_417;
  undefined2 local_414;
  char local_410 [1024];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x26240  2963  ?ReadFromText_t@CTFileName@@QAEXAAVCTStream@@ABVCTString@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f2d7;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  local_414 = DAT_36224284;
  _local_418 = CONCAT31((int3)((uint)DAT_36224280 >> 8),0x54);
  ExceptionList = &local_c;
  CTStream::ExpectKeyword_t(param_1,param_2);
  local_41c = StringDuplicate(&local_418);
  local_4 = 0;
  CTStream::ExpectKeyword_t(param_1,(CTString *)&local_41c);
  local_4 = 0xffffffff;
  StringFree(local_41c);
  CTStream::GetLine_t(param_1,local_410,0x400,'\n');
  *(undefined4 *)(this + 4) = 0;
  pcVar1 = StringDuplicate(local_410);
  local_4 = 1;
  local_41c = pcVar1;
  pcVar2 = StringDuplicate(pcVar1);
  StringFree(*(char **)this);
  *(char **)this = pcVar2;
  *(undefined4 *)(this + 4) = 0;
  local_4 = 0xffffffff;
  StringFree(pcVar1);
  ExceptionList = local_c;
  return;
}

