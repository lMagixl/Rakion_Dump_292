
/* public: __thiscall CNetworkSession::CNetworkSession(class CTString const &,long) */

CNetworkSession * __thiscall
CNetworkSession::CNetworkSession(CNetworkSession *this,CTString *param_1,long param_2)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x103830  174  ??0CNetworkSession@@QAE@ABVCTString@@J@Z */
  puStack_8 = &LAB_36217693;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  local_4 = 0;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 8) = pcVar1;
  local_4._0_1_ = 1;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x10) = pcVar1;
  local_4._0_1_ = 2;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x14) = pcVar1;
  local_4._0_1_ = 3;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x24) = pcVar1;
  local_4._0_1_ = 4;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x28) = pcVar1;
  local_4._0_1_ = 5;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x2c) = pcVar1;
  local_4 = CONCAT31(local_4._1_3_,6);
  pcVar1 = StringDuplicate(*(char **)param_1);
  StringFree(*(char **)(this + 8));
  *(char **)(this + 8) = pcVar1;
  *(long *)(this + 0xc) = param_2;
  ExceptionList = local_c;
  return this;
}

