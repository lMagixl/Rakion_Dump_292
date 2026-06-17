
/* public: void __thiscall CEntitiesDLL::loadDLL(class CTFileName) */

void __thiscall CEntitiesDLL::loadDLL(CEntitiesDLL *this,char *param_2,undefined4 param_3)

{
  CTString *pCVar1;
  undefined4 *puVar2;
  char *pcVar3;
  HMODULE pHVar4;
  char *local_38;
  char *local_34;
  char *local_30;
  LPCSTR local_2c;
  undefined4 local_28;
  char *local_24;
  char *local_1c;
  char *local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x12fd60  4239  ?loadDLL@CEntitiesDLL@@QAEXVCTFileName@@@Z */
  puStack_8 = &LAB_36218d4e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CTFileName::FileExt((CTFileName *)&param_2);
  local_4._0_1_ = 1;
  CTFileName::FileName((CTFileName *)&param_2);
  local_4._0_1_ = 2;
  pCVar1 = (CTString *)CTFileName::FileDir((CTFileName *)&param_2);
  local_4._0_1_ = 3;
  pCVar1 = (CTString *)CTString::operator+(pCVar1,(CTString *)&local_30);
  local_4._0_1_ = 4;
  pCVar1 = (CTString *)CTString::operator+(pCVar1,(CTString *)&local_34);
  local_4._0_1_ = 5;
  puVar2 = (undefined4 *)CTString::operator+(pCVar1,(CTString *)&local_38);
  local_4._0_1_ = 6;
  pcVar3 = StringDuplicate((char *)*puVar2);
  StringFree(param_2);
  param_3 = 0;
  local_4._0_1_ = 5;
  param_2 = pcVar3;
  StringFree(local_38);
  local_4._0_1_ = 4;
  StringFree(local_34);
  local_4._0_1_ = 3;
  StringFree(local_30);
  local_4._0_1_ = 2;
  StringFree(local_24);
  local_4._0_1_ = 1;
  StringFree(local_1c);
  local_4._0_1_ = 0;
  StringFree(local_14);
  local_2c = StringDuplicate(&DAT_36222fa0);
  local_28 = 0;
  local_4._0_1_ = 7;
  ExpandFilePath(1,(CTFileName *)&param_2,(CTFileName *)&local_2c);
  pHVar4 = FUN_3612f6b0(local_2c);
  *(HMODULE *)this = pHVar4;
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_2c);
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_c;
  return;
}

