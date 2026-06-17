
/* public: void __thiscall CServer::PrepareGameStateData_t(class CTMemoryStream &,long &,long &) */

void __thiscall
CServer::PrepareGameStateData_t(CServer *this,CTMemoryStream *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  CTFileStream *this_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *local_ec;
  undefined4 local_e8;
  undefined **local_e4;
  char *local_e0;
  CTFileStream local_dc [116];
  CTMemoryStream local_68 [92];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x10b2c0  2821
                       ?PrepareGameStateData_t@CServer@@QAEXAAVCTMemoryStream@@AAJ1@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217cac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTFileStream::CTFileStream(local_dc);
  local_4 = 0;
  CTMemoryStream::CTMemoryStream(local_68);
  local_4._0_1_ = 1;
  if (DAT_362cceec == 0) {
    this_00 = (CTFileStream *)local_68;
  }
  else {
    pcVar2 = StringDuplicate(s_Temp_GameState_bin_36236c88);
    local_4._0_1_ = 2;
    local_e0 = pcVar2;
    local_ec = StringDuplicate(pcVar2);
    local_e8 = 0;
    local_4._0_1_ = 3;
    CTFileStream::Create_t(local_dc,(CTFileName *)&local_ec,2);
    local_4._0_1_ = 2;
    StringFree(local_ec);
    local_4._0_1_ = 1;
    StringFree(pcVar2);
    this_00 = local_dc;
  }
  **(CNetworkLibrary **)(this_00 + 0x14) = _pNetwork[0x98c];
  *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 1;
  CSessionState::Write_t(*(CSessionState **)(_pNetwork + 0x24),(CTStream *)this_00,1);
  uVar1 = *(uint *)(_pNetwork + 0x864);
  puVar5 = *(undefined4 **)(_pNetwork + 0x860);
  puVar6 = *(undefined4 **)(this_00 + 0x14);
  for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(uint *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + uVar1;
  CTStream::SetPos_t((CTStream *)this_00,0);
  lVar3 = CTStream::GetStreamSize((CTStream *)this_00);
  *param_2 = lVar3;
  **(undefined4 **)(param_1 + 0x14) = 10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  local_e4 = &PTR_FUN_362350b0;
  FUN_360fe3f0(&local_e4,(CTStream *)this_00);
  lVar3 = CTStream::GetStreamSize((CTStream *)param_1);
  *param_3 = lVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  CTMemoryStream::~CTMemoryStream(local_68);
  local_4 = 0xffffffff;
  CTFileStream::~CTFileStream(local_dc);
  ExceptionList = local_c;
  return;
}

