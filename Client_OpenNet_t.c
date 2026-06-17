
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCommunicationInterface::Client_OpenNet_t(unsigned long) */

void __thiscall
CCommunicationInterface::Client_OpenNet_t(CCommunicationInterface *this,ulong param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  int *this_00;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined1 local_25;
  int iStack_24;
  CCommunicationInterface *local_20;
  int local_1c;
  CTSingleLock local_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xfd5b0  1325  ?Client_OpenNet_t@CCommunicationInterface@@QAEXK@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362173c2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_20 = this;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  uVar2 = param_1;
  local_4 = 0;
  local_25 = 0x41;
  DAT_362a6310 = param_1;
  uVar7 = FUN_361bfd6c();
  iVar3 = (int)uVar7;
  local_1c = iVar3;
  if (1 < iVar3) {
    pcVar4 = Translate(s_ETRSwaiting_for_server_36235938,4);
    param_1 = (ulong)StringDuplicate(pcVar4);
    local_4._0_1_ = 1;
    SetProgressDescription((CTString *)&param_1);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree((char *)param_1);
    CallProgressHook_t(0.0);
  }
  this_00 = (int *)FUN_360ff4d0();
  this_00[0x107] = uVar2;
  *(undefined2 *)(this_00 + 0x108) = (undefined2)DAT_362a6088;
  *(undefined1 *)(this_00 + 4) = 0;
  iVar1 = DAT_362cf264;
  DAT_362cf264 = DAT_362cf264 + 1;
  FUN_360fe960(this_00,(undefined4 *)&local_25,1,0x2e,iVar1,0x2f2f,1);
  FUN_360ff1a0(&DAT_362cf268,this_00,1,0);
  _DAT_362cf258 = uVar2;
  _DAT_362cf25c = (undefined2)DAT_362a6088;
  iStack_24 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = iStack_24;
      iVar5 = Client_Update(local_20);
      if (iVar5 == 0) break;
      if ((DAT_362cf324 != 0) &&
         (puVar6 = FUN_360fec00((int *)&DAT_362cf310), (puVar6[1] & 0x40) != 0)) {
        _DAT_362cf258 = uVar2;
        _DAT_362cf25c = (undefined2)DAT_362a6088;
        DAT_362cf25e = (undefined2)puVar6[0xb];
        DAT_362cf250 = 1;
        DAT_362cf260 = 0;
        DAT_362cf348 = 0;
        FUN_360ff470((int *)&DAT_362cf310);
        FUN_360ff0d0(puVar6);
        CallProgressHook_t(1.0);
        goto LAB_360fd742;
      }
      Sleep(100);
      CallProgressHook_t((float)iStack_24 / (float)local_1c);
      iStack_24 = iVar1 + 1;
    } while (iStack_24 < iVar3);
  }
  *(undefined4 *)(local_20 + 4) = 0;
  pcVar4 = Translate(s_ETRSClient__Timeout_receiving_UD_36235950,4);
  ThrowF_t(pcVar4);
LAB_360fd742:
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = pvStack_c;
  return;
}

