
/* public: void __thiscall CNetworkLibrary::InitCRCGather(void) */

void __thiscall CNetworkLibrary::InitCRCGather(CNetworkLibrary *this)

{
  char *pcVar1;
  undefined4 *puVar2;
  char *pcVar3;
  CEntityClass *pCVar4;
  char *local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf8e40  2307  ?InitCRCGather@CNetworkLibrary@@QAEXXZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36216ecb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  FUN_36022b00();
  DAT_362b8f08 = 1;
  FUN_36130460();
  pcVar1 = StringDuplicate(s_Classes_Player_ecl_36235024);
  local_8 = 0;
  local_18 = pcVar1;
  local_20 = StringDuplicate(pcVar1);
  local_1c = 0;
  local_8._0_1_ = 1;
  FUN_36022be0((CTString *)&local_20,0);
  local_8 = (uint)local_8._1_3_ << 8;
  StringFree(local_20);
  local_8 = 0xffffffff;
  StringFree(pcVar1);
  puVar2 = (undefined4 *)FUN_361bf99c(0xc);
  local_8 = 2;
  local_18 = (char *)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pcVar1 = StringDuplicate(&DAT_36222fa0);
    puVar2[1] = pcVar1;
    puVar2[2] = 0;
    *puVar2 = 0xffffffff;
  }
  local_8 = 0xffffffff;
  pcVar1 = StringDuplicate(s_Classes_Player_ecl_36235038);
  local_8 = 3;
  local_18 = pcVar1;
  pcVar3 = StringDuplicate(pcVar1);
  StringFree((char *)puVar2[1]);
  puVar2[1] = pcVar3;
  puVar2[2] = 0;
  local_8 = 0xffffffff;
  StringFree(pcVar1);
  *puVar2 = 0x191;
  FUN_360dbdf0(&DAT_362fce74,puVar2);
  local_8 = 4;
  pcVar1 = StringDuplicate(s_Classes_Player_ecl_3623504c);
  local_8._0_1_ = 5;
  local_18 = pcVar1;
  local_28 = StringDuplicate(pcVar1);
  local_24 = 0;
  local_8._0_1_ = 6;
  pCVar4 = CStock_CEntityClass::Obtain_t(_pEntityClassStock,(CTFileName *)&local_28);
  CStock_CEntityClass::Release(_pEntityClassStock,pCVar4);
  local_8._0_1_ = 5;
  StringFree(local_28);
  local_8 = CONCAT31(local_8._1_3_,4);
  StringFree(pcVar1);
  ExceptionList = local_10;
  return;
}

