
/* public: void __thiscall CServer::SendSessionStateData(long) */

void __thiscall CServer::SendSessionStateData(CServer *this,long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  CTFileStream *this_00;
  undefined1 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  uint uVar8;
  CTStream *this_01;
  undefined4 *puVar9;
  CTMemoryStream local_284 [92];
  CTMemoryStream local_228 [92];
  CTFileStream local_1cc [116];
  CTFileStream local_158 [116];
  CTMemoryStream local_e4 [92];
  CTMemoryStream local_88 [20];
  undefined4 *local_74;
  undefined **local_28;
  int local_24;
  char *local_20;
  char *local_1c;
  CTFileStream *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x10a3b0  3355  ?SendSessionStateData@CServer@@QAEXJ@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36217bd0;
  local_10 = ExceptionList;
  local_24 = param_1 * 0x60 + *(int *)(this + 8);
  local_14 = &stack0xfffffd70;
  ExceptionList = &local_10;
  FUN_36107140((void *)(local_24 + 0x30),(undefined4 *)(*(int *)(this + 8) + 0x30));
  local_8 = 0;
  CTFileStream::CTFileStream(local_158);
  local_8._0_1_ = 1;
  CTMemoryStream::CTMemoryStream(local_228);
  local_8._0_1_ = 2;
  CTFileStream::CTFileStream(local_1cc);
  local_8._0_1_ = 3;
  CTMemoryStream::CTMemoryStream(local_284);
  local_8._0_1_ = 4;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 4;
  if (DAT_362cceec == 0) {
    local_18 = (CTFileStream *)local_284;
    this_01 = (CTStream *)local_228;
    local_8._0_1_ = uVar3;
  }
  else {
    pcVar4 = StringDuplicate(s_Temp_State_bin_36236d64);
    local_8._0_1_ = 5;
    local_20 = pcVar4;
    local_1c = StringDuplicate(pcVar4);
    local_18 = (CTFileStream *)0x0;
    local_8._0_1_ = 6;
    CTFileStream::Create_t(local_158,(CTFileName *)&local_1c,2);
    local_8._0_1_ = 5;
    StringFree(local_1c);
    local_8._0_1_ = 4;
    StringFree(pcVar4);
    pcVar4 = StringDuplicate(s_Temp_Delta_bin_36236d74);
    local_8._0_1_ = 7;
    local_20 = pcVar4;
    local_1c = StringDuplicate(pcVar4);
    local_18 = (CTFileStream *)0x0;
    local_8._0_1_ = 8;
    CTFileStream::Create_t(local_1cc,(CTFileName *)&local_1c,2);
    local_8._0_1_ = 7;
    StringFree(local_1c);
    local_8._0_1_ = 4;
    StringFree(pcVar4);
    local_18 = local_1cc;
    this_01 = (CTStream *)local_158;
  }
  CSessionState::Write_t(*(CSessionState **)(_pNetwork + 0x24),this_01,0);
  CTStream::SetPos_t(this_01,0);
  local_20 = (char *)CTStream::GetStreamSize(this_01);
  CTMemoryStream::CTMemoryStream(local_e4);
  local_8._0_1_ = 9;
  CTMemoryStream::CTMemoryStream(local_88);
  uVar1 = *(uint *)(_pNetwork + 0x5c);
  puVar7 = *(undefined4 **)(_pNetwork + 0x58);
  puVar9 = local_74;
  for (uVar8 = uVar1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar8 = uVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  local_74 = (undefined4 *)((int)local_74 + uVar1);
  local_8._0_1_ = 10;
  CTStream::SetPos_t((CTStream *)local_88,0);
  this_00 = local_18;
  FUN_36100470((CTStream *)local_88,this_01,local_18);
  CTStream::SetPos_t((CTStream *)this_00,0);
  lVar5 = CTStream::GetStreamSize((CTStream *)this_00);
  local_28 = &PTR_FUN_362350b0;
  FUN_360fe3f0(&local_28,(CTStream *)this_00);
  lVar6 = CTStream::GetStreamSize((CTStream *)local_e4);
  CMessageDispatcher::SendToClientReliable((CMessageDispatcher *)_pNetwork,param_1,local_e4);
  puVar7 = (undefined4 *)CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&param_1);
  uVar2 = *puVar7;
  local_8._0_1_ = 0xb;
  pcVar4 = Translate(s_ETRSServer__Sent_connection_data_36236d84,4);
  CPrintF(pcVar4,uVar2,(int)((int)local_20 + ((int)local_20 >> 0x1f & 0x3ffU)) >> 10,
          (int)(lVar5 + (lVar5 >> 0x1f & 0x3ffU)) >> 10,
          (int)(lVar6 + (lVar6 >> 0x1f & 0x3ffU)) >> 10);
  local_8 = CONCAT31(local_8._1_3_,10);
  StringFree((char *)param_1);
  if (DAT_362cceec != 0) {
    pcVar4 = Translate(s_ETRSServer__Connection_data_dump_36236dc0,4);
    CPrintF(pcVar4);
  }
  local_8._0_1_ = 9;
  CTMemoryStream::~CTMemoryStream(local_88);
  local_8._0_1_ = 4;
  CTMemoryStream::~CTMemoryStream(local_e4);
  local_8._0_1_ = 3;
  CTMemoryStream::~CTMemoryStream(local_284);
  local_8._0_1_ = 2;
  CTFileStream::~CTFileStream(local_1cc);
  local_8._0_1_ = 1;
  CTMemoryStream::~CTMemoryStream(local_228);
  local_8 = (uint)local_8._1_3_ << 8;
  CTFileStream::~CTFileStream(local_158);
  ExceptionList = local_10;
  return;
}

