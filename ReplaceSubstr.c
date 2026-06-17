
/* public: int __thiscall CTString::ReplaceSubstr(class CTString const &,class CTString const &) */

int __thiscall CTString::ReplaceSubstr(CTString *this,CTString *param_1,CTString *param_2)

{
  long lVar1;
  CTString *pCVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x24a70  3156  ?ReplaceSubstr@CTString@@QAEHABV1@0@Z */
  pCVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f024;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  lVar1 = FindSubstr(this,param_1);
  if (lVar1 < 0) {
    ExceptionList = local_c;
    return 0;
  }
  local_14 = StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  param_1 = (CTString *)StringDuplicate(&DAT_36222fa0);
  local_4._0_1_ = 1;
  Split(this,lVar1,(CTString *)&local_14,(CTString *)&param_1);
  RemovePrefix((CTString *)&param_1,pCVar2);
  pCVar2 = (CTString *)operator+((CTString *)&local_14,(CTString *)&local_10);
  local_4._0_1_ = 2;
  puVar3 = (undefined4 *)operator+(pCVar2,(CTString *)&param_2);
  local_4._0_1_ = 3;
  pcVar4 = StringDuplicate((char *)*puVar3);
  StringFree(*(char **)this);
  *(char **)this = pcVar4;
  local_4._0_1_ = 2;
  StringFree((char *)param_2);
  local_4._0_1_ = 1;
  StringFree(local_10);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree((char *)param_1);
  local_4 = 0xffffffff;
  StringFree(local_14);
  ExceptionList = local_c;
  return 1;
}

