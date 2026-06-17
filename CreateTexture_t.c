
/* void __cdecl CreateTexture_t(class CTFileName const &,long,long,unsigned long) */

void __cdecl CreateTexture_t(CTFileName *param_1,long param_2,long param_3,ulong param_4)

{
  char *pcVar1;
  CTString *pCVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *local_2c;
  char *local_28;
  char *local_24;
  undefined4 local_20;
  char *local_1c;
  char *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x97740  1438  ?CreateTexture_t@@YAXABVCTFileName@@JJK@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212dc5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_3622e9b0);
  local_4 = 0;
  CTFileName::FileName(param_1);
  local_4._0_1_ = 1;
  pCVar2 = (CTString *)CTFileName::FileDir(param_1);
  local_4._0_1_ = 2;
  pCVar2 = (CTString *)CTString::operator+(pCVar2,(CTString *)&local_28);
  local_4._0_1_ = 3;
  puVar3 = (undefined4 *)CTString::operator+(pCVar2,(CTString *)&local_2c);
  local_4._0_1_ = 4;
  pcVar4 = StringDuplicate((char *)*puVar3);
  local_20 = 0;
  local_4._0_1_ = 10;
  local_24 = pcVar4;
  StringFree(local_2c);
  local_4._0_1_ = 9;
  StringFree(local_28);
  local_4._0_1_ = 8;
  StringFree(local_1c);
  local_4._0_1_ = 7;
  StringFree(local_14);
  local_4 = CONCAT31(local_4._1_3_,6);
  StringFree(pcVar1);
  CreateTexture_t(param_1,(CTFileName *)&local_24,param_2,param_3,param_4);
  local_4 = 0xffffffff;
  StringFree(pcVar4);
  ExceptionList = local_c;
  return;
}

