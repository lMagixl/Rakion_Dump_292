
/* public: void __thiscall CNetworkLibrary::StartDemoRec_t(class CTFileName const &) */

void __thiscall CNetworkLibrary::StartDemoRec_t(CNetworkLibrary *this,CTFileName *param_1)

{
  CTFileStream *this_00;
  int iVar1;
  CNetworkLibrary *pCVar2;
  undefined4 *puVar3;
  undefined4 local_1d;
  undefined1 local_19;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf4940  3658  ?StartDemoRec_t@CNetworkLibrary@@QAEXABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621670f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)(this + 0x1c),1);
  local_4 = 0;
  if (*(int *)(this + 0x874) != 0) {
    param_1 = (CTFileName *)Translate(s_ETRSAlready_recording_a_demo__36234dd0,4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_1,(ThrowInfo *)&DAT_3624f688);
  }
  this_00 = (CTFileStream *)(this + 0x878);
  CTFileStream::Create_t(this_00,param_1,2);
  local_19 = DAT_36234df4;
  local_1d = DAT_36234df0;
  CTStream::WriteID_t((CTStream *)this_00,(CChunkID *)&local_1d);
  ::operator<<((CTStream *)this_00,(CTFileName *)(this + 0x3c));
  **(undefined4 **)(this + 0x88c) = *(undefined4 *)(*(int *)(this + 0x24) + 0x58);
  *(int *)(this + 0x88c) = *(int *)(this + 0x88c) + 4;
  pCVar2 = _pNetwork + 0x9ac;
  puVar3 = *(undefined4 **)(this + 0x88c);
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(int *)(this + 0x88c) = *(int *)(this + 0x88c) + 0x800;
  CSessionState::Write_t(*(CSessionState **)(this + 0x24),(CTStream *)this_00,1);
  *(undefined4 *)(this + 0x874) = 1;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

