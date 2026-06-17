
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CServer::DropLaggingClients(void) */

void __thiscall CServer::DropLaggingClients(CServer *this)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *puVar6;
  int extraout_ECX_01;
  undefined4 *extraout_EDX;
  int extraout_EDX_00;
  CServer *this_00;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 extraout_ST0_00;
  undefined4 uVar9;
  char *local_18;
  CServer *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10c610  1539  ?DropLaggingClients@CServer@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217d70;
  local_c = ExceptionList;
  local_18 = _DAT_36237350;
  iVar2 = *(int *)(this + 8);
  iVar7 = 0x1f;
  ExceptionList = &local_c;
  local_14 = this;
  do {
    iVar2 = FUN_36109550((undefined4 *)(iVar2 + 0x60));
    fVar8 = extraout_ST0;
    if ((iVar2 != 0) && ((float10)*(float *)(extraout_ECX + 0x50) < extraout_ST0)) {
      fVar8 = (float10)*(float *)(extraout_ECX + 0x50);
    }
    iVar7 = iVar7 + -1;
    iVar2 = extraout_ECX;
  } while (iVar7 != 0);
  local_18 = (char *)(float)fVar8;
  puVar6 = extraout_EDX;
  do {
    iVar2 = FUN_36109550(puVar6);
    fVar8 = extraout_ST0_00;
    if (((iVar2 != 0) && ((float)local_18 < *(float *)(extraout_ECX_00 + 0x50))) &&
       ((float10)*(float *)(extraout_ECX_00 + 0x50) < extraout_ST0_00)) {
      fVar8 = (float10)*(float *)(extraout_ECX_00 + 0x50);
    }
    puVar6 = (undefined4 *)(extraout_ECX_00 + 0x60);
  } while (extraout_EDX_00 != 1);
  fVar1 = (float)fVar8;
  if ((float10)_DAT_36237348 < fVar8) {
    iVar7 = 1;
    iVar2 = 0x60;
    puVar6 = &DAT_362cd258;
    do {
      iVar3 = FUN_36109550((undefined4 *)(*(int *)(this + 8) + iVar2));
      if (iVar3 != 0) {
        HandleClientDisconected(this,iVar7);
        if (DAT_362cced0 != 0) {
          puVar4 = (undefined4 *)AddressToString((ulong)&local_18);
          uVar9 = *puVar4;
          local_4 = 0;
          pcVar5 = Translate(s_ETRSUnable_to_deliver_game_updat_36237260,4);
          CPrintF(pcVar5,uVar9);
          local_4 = 0xffffffff;
          StringFree(local_18);
        }
        CCommunicationInterface::Server_ClearClient(&_cmiComm,iVar7);
      }
      puVar6 = puVar6 + 0x40;
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + 0x60;
    } while ((int)puVar6 < 0x362cf158);
    if (DAT_362cced0 != 0) {
      pcVar5 = Translate(s_ETRS_All_remote_clients_dropped__362372a4,4);
      CPrintF(pcVar5);
    }
    StopNetProcess(this);
    ExceptionList = local_c;
    return;
  }
  FUN_36102400(this + 0x3c,fVar1);
  iVar2 = 0x60;
  puVar6 = &DAT_362cd258;
  iVar7 = 1;
  do {
    iVar3 = FUN_36109550((undefined4 *)(*(int *)(local_14 + 8) + iVar2));
    if (((iVar3 != 0) && (*(float *)(extraout_ECX_01 + 0x50) < fVar1)) &&
       (local_18 = (char *)(uint)(*(float *)(extraout_ECX_01 + 0x50) < fVar1),
       CTimer::TickQuantum < ABS((float)(int)local_18))) {
      HandleClientDisconected(this_00,iVar7);
      if (DAT_362cced0 != 0) {
        puVar4 = (undefined4 *)AddressToString((ulong)&local_10);
        uVar9 = *puVar4;
        local_4 = 1;
        pcVar5 = Translate(s_ETRSUnable_to_deliver_game_updat_362372d0,4);
        CPrintF(pcVar5,uVar9);
        local_4 = 0xffffffff;
        StringFree(local_10);
      }
      CCommunicationInterface::Server_ClearClient(&_cmiComm,iVar7);
    }
    puVar6 = puVar6 + 0x40;
    iVar7 = iVar7 + 1;
    iVar2 = iVar2 + 0x60;
  } while ((int)puVar6 < 0x362cf158);
  ExceptionList = local_c;
  return;
}

