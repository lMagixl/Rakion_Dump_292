
/* public: int __thiscall CCommunicationInterface::Server_Update(void) */

int __thiscall CCommunicationInterface::Server_Update(CCommunicationInterface *this)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  int *this_00;
  uint *puVar4;
  short *psVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined *this_01;
  int *piVar8;
  undefined4 uVar9;
  CTSingleLock local_34 [12];
  uint local_28;
  int local_24;
  char *local_20;
  long local_1c;
  CCommunicationInterface *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfcb40  3385  ?Server_Update@CCommunicationInterface@@QAEHXZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621733b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  ExceptionList = &local_10;
  local_18 = this;
  CTSingleLock::CTSingleLock(local_34,(CTCriticalSection *)&DAT_362cd148,1);
  local_8 = 0;
  CTimer::GetHighPrecisionTimer(_pTimer);
  if ((DAT_362cf250 != 0) && (DAT_362cf348 != 0)) {
    FUN_360f21b0(0x362cf250);
  }
  FUN_360f2270((undefined4 *)&DAT_362cd150);
  if (*(int *)(this + 0x10) != 0) {
    local_8 = CONCAT31(local_8._1_3_,1);
    Broadcast_Update_t(this);
    local_8 = 0;
    local_1c = 1;
    piVar8 = &DAT_362cd250;
    do {
      lVar1 = local_1c;
      if (*piVar8 != 0) {
        iVar2 = FUN_360f2270(piVar8);
        if (iVar2 == 0) {
          puVar6 = (undefined4 *)AddressToString((ulong)&local_20);
          uVar9 = *puVar6;
          local_8._0_1_ = 3;
          pcVar7 = Translate(s_ETRSUnable_to_deliver_data_to_cl_362358b8,4);
          CPrintF(pcVar7,uVar9);
          local_8 = (uint)local_8._1_3_ << 8;
          StringFree(local_20);
          Server_ClearClient(this,lVar1);
          CServer::HandleClientDisconected(*(CServer **)(_pNetwork + 0x18),lVar1);
        }
        else {
          iVar2 = piVar8[0xb];
          while (iVar2 != 0) {
            piVar3 = (int *)FUN_360febf0((int)(piVar8 + 6));
            this = local_18;
            if ((local_24 < piVar3[7]) || ((local_24 <= piVar3[7] && (local_28 <= (uint)piVar3[6])))
               ) break;
            FUN_360ff390(piVar8 + 6,0);
            if ((*(byte *)(piVar3 + 1) & 2) != 0) {
              this_00 = (int *)FUN_360ff4d0();
              FUN_360fe8e0(this_00,piVar3);
              FUN_360ff1a0(piVar8 + 0x14,this_00,0,0);
            }
            FUN_360ff1a0(local_18 + 0x18,piVar3,0,0);
            this = local_18;
            iVar2 = piVar8[0xb];
          }
        }
      }
      local_1c = local_1c + 1;
      piVar8 = piVar8 + 0x40;
    } while ((int)piVar8 < 0x362cf150);
    FUN_360f2270((undefined4 *)&DAT_362cf150);
    while (DAT_362cf17c != 0) {
      piVar8 = (int *)FUN_360febf0(0x362cf168);
      if ((local_24 < piVar8[7]) || ((local_24 <= piVar8[7] && (local_28 <= (uint)piVar8[6]))))
      break;
      FUN_360ff390(&DAT_362cf168,0);
      FUN_360ff1a0(this + 0x18,piVar8,0,0);
    }
    UpdateMasterBuffers(this);
    if (*(int *)(this + 100) != 0) {
      do {
        puVar4 = FUN_360fec00((int *)(this + 0x50));
        if (*(short *)((int)puVar4 + 0x422) == 0x2f2f) {
          this_01 = &DAT_362cf1d8;
LAB_360fce4d:
          iVar2 = FUN_360ff1a0(this_01,(int *)puVar4,0,1);
          if (iVar2 == 0) {
            FUN_360ff0d0(puVar4);
          }
        }
        else {
          iVar2 = 0;
          psVar5 = &DAT_362cd15e;
          do {
            if (*(short *)((int)puVar4 + 0x422) == *psVar5) {
              this_01 = &DAT_362cd1d8 + iVar2 * 0x100;
              goto LAB_360fce4d;
            }
            psVar5 = psVar5 + 0x80;
            iVar2 = iVar2 + 1;
          } while ((int)psVar5 < 0x362cf15e);
          if (DAT_362ccee4 != 0) {
            puVar6 = (undefined4 *)AddressToString((ulong)&local_20);
            uVar9 = *puVar6;
            local_8._0_1_ = 4;
            pcVar7 = Translate(s_ETRSWARNING__Invalid_message_fro_362358f4,4);
            CPrintF(pcVar7,uVar9);
            local_8 = (uint)local_8._1_3_ << 8;
            StringFree(local_20);
          }
        }
      } while (*(int *)(this + 100) != 0);
    }
    piVar8 = &DAT_362cd250;
    do {
      FUN_360f2670(piVar8);
      piVar8 = piVar8 + 0x40;
    } while ((int)piVar8 < 0x362cf150);
  }
  FUN_360f2670((int *)&DAT_362cd150);
  FUN_360f2670(&DAT_362cf250);
  FUN_360f28e0(0x362cf150);
  Broadcast_Update_t(this);
  local_8 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_34);
  ExceptionList = local_10;
  return 1;
}

