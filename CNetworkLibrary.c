
/* public: __thiscall CNetworkLibrary::CNetworkLibrary(void) */

CNetworkLibrary * __thiscall CNetworkLibrary::CNetworkLibrary(CNetworkLibrary *this)

{
  CServer *this_00;
  undefined4 uVar1;
  CSessionState *this_01;
  char *pcVar2;
  int iVar3;
  CNetworkLibrary *pCVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf62b0  167  ??0CNetworkLibrary@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362168ef;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CMessageDispatcher::CMessageDispatcher((CMessageDispatcher *)this);
  local_4 = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x14) = 0;
  this_00 = (CServer *)FUN_361bf99c(0x5540);
  local_4._0_1_ = 1;
  if (this_00 == (CServer *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CServer::CServer(this_00);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)(this + 0x18) = uVar1;
  CTCriticalSection::CTCriticalSection((CTCriticalSection *)(this + 0x1c));
  local_4._0_1_ = 2;
  this_01 = (CSessionState *)FUN_361bf99c(0x2980);
  local_4._0_1_ = 3;
  if (this_01 == (CSessionState *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CSessionState::CSessionState(this_01);
  }
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  local_4._0_1_ = 4;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x30) = pcVar2;
  local_4._0_1_ = 5;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x34) = pcVar2;
  local_4._0_1_ = 6;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x3c) = pcVar2;
  *(undefined4 *)(this + 0x40) = 0;
  local_4._0_1_ = 7;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x44) = pcVar2;
  *(undefined4 *)(this + 0x48) = 0;
  local_4._0_1_ = 8;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x4c) = pcVar2;
  local_4._0_1_ = 9;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x50) = pcVar2;
  local_4._0_1_ = 10;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x54) = pcVar2;
  local_4._0_1_ = 0xb;
  *(undefined4 *)(this + 0x86c) = 0;
  *(undefined4 *)(this + 0x874) = 0;
  CTFileStream::CTFileStream((CTFileStream *)(this + 0x878));
  local_4._0_1_ = 0xc;
  *(undefined4 *)(this + 0x8ec) = 0;
  *(undefined4 *)(this + 0x8f0) = 0;
  CTFileStream::CTFileStream((CTFileStream *)(this + 0x8f4));
  local_4._0_1_ = 0xd;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x97c) = pcVar2;
  *(undefined4 *)(this + 0x980) = 0;
  local_4._0_1_ = 0xe;
  CListHead::Clear((CListHead *)(this + 0x990));
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x9a0) = pcVar2;
  local_4._0_1_ = 0xf;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x9a8) = pcVar2;
  local_4._0_1_ = 0x10;
  CNet::CNet((CNet *)(this + 0x11ac));
  local_4._0_1_ = 0x11;
  CWorld::CWorld((CWorld *)(this + 0x11e4));
  *(undefined4 *)(this + 0x1364) = 0;
  *(undefined4 *)(this + 0x1368) = 0;
  *(undefined4 *)(this + 0x136c) = 0;
  *(undefined4 *)(this + 0x1370) = 0;
  local_4 = CONCAT31(local_4._1_3_,0x14);
  FUN_360fac50(this + 0x28,4);
  *(undefined4 *)(this + 0x1358) = 0x3f800000;
  *(undefined4 *)(this + 0x135c) = 0x3f800000;
  *(undefined4 *)(this + 0x1360) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  pCVar4 = this + 0x60;
  for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar4 = 0;
    pCVar4 = pCVar4 + 4;
  }
  *(undefined4 *)(this + 0x860) = 0;
  *(undefined4 *)(this + 0x864) = 0;
  *(undefined4 *)(this + 0x20) = 2000;
  *(undefined4 *)(this + 0x99c) = 0;
  *(undefined4 *)(this + 0x9a4) = 0;
  if (*(int *)(this + 0x136c) != 0) {
    operator_delete__(*(void **)(this + 0x1370));
    *(undefined4 *)(this + 0x136c) = 0;
    *(undefined4 *)(this + 0x1370) = 0;
  }
  if (DAT_362a6084 != 0) {
    iVar3 = DAT_362a6084 * 4;
    *(int *)(this + 0x136c) = DAT_362a6084;
    uVar1 = thunk_FUN_361bf99c(iVar3 + 4);
    *(undefined4 *)(this + 0x1370) = uVar1;
  }
  this[0x98c] = (CNetworkLibrary)0x0;
  *(undefined4 *)(this + 0x870) = 0;
  pCVar4 = this + 0x9ac;
  for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar4 = 0;
    pCVar4 = pCVar4 + 4;
  }
  CNet::InitNetwork((CNet *)(this + 0x11ac));
  ExceptionList = local_c;
  return this;
}

