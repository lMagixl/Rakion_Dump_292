
/* public: void __thiscall CTString::LoadVar(class CTFileName const &) */

void __thiscall CTString::LoadVar(CTString *this,CTFileName *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x24640  2555  ?LoadVar@CTString@@QAEXABVCTFileName@@@Z */
  puStack_c = &LAB_3620efad;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd8;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = StringDuplicate(&DAT_36222fa0);
  local_8._0_1_ = 1;
  Load_t((CTString *)&local_18,param_1);
  pcVar1 = local_18;
  pcVar2 = StringDuplicate(local_18);
  StringFree(*(char **)this);
  *(char **)this = pcVar2;
  local_8 = (uint)local_8._1_3_ << 8;
  StringFree(pcVar1);
  ExceptionList = local_10;
  return;
}

