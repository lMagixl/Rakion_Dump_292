
/* public: int __thiscall CCommunicationInterface::Client_Update(void) */

int __thiscall CCommunicationInterface::Client_Update(CCommunicationInterface *this)

{
  int iVar1;
  int *piVar2;
  int *this_00;
  uint *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_20;
  int local_1c;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xfce70  1332  ?Client_Update@CCommunicationInterface@@QAEHXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217355;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  CTimer::GetHighPrecisionTimer(_pTimer);
  iVar1 = FUN_360f2270(&DAT_362cf250);
  if (iVar1 == 0) {
    local_4 = 0xffffffff;
    CTSingleLock::~CTSingleLock(local_18);
    ExceptionList = local_c;
    return 0;
  }
  if (*(int *)(this + 0x10) == 0) {
    while (DAT_362cf27c != 0) {
      piVar2 = (int *)FUN_360febf0(0x362cf268);
      if ((local_1c < piVar2[7]) || ((local_1c <= piVar2[7] && (local_20 <= (char *)piVar2[6]))))
      break;
      FUN_360ff390(&DAT_362cf268,0);
      if ((*(byte *)(piVar2 + 1) & 2) != 0) {
        this_00 = (int *)FUN_360ff4d0();
        FUN_360fe8e0(this_00,piVar2);
        FUN_360ff1a0(&DAT_362cf2a0,this_00,0,0);
      }
      FUN_360ff1a0(this + 0x18,piVar2,0,0);
    }
    FUN_360f2270((undefined4 *)&DAT_362cf150);
    while (DAT_362cf17c != 0) {
      piVar2 = (int *)FUN_360febf0(0x362cf168);
      if ((local_1c < piVar2[7]) || ((local_1c <= piVar2[7] && (local_20 <= (char *)piVar2[6]))))
      break;
      FUN_360ff390(&DAT_362cf168,0);
      FUN_360ff1a0(this + 0x18,piVar2,0,0);
    }
    UpdateMasterBuffers(this);
    if (*(int *)(this + 100) != 0) {
      do {
        puVar3 = FUN_360fec00((int *)(this + 0x50));
        if ((*(short *)((int)puVar3 + 0x422) == DAT_362cf25e) ||
           (*(short *)((int)puVar3 + 0x422) == 0x2f2f)) {
          iVar1 = FUN_360ff1a0(&DAT_362cf2d8,(int *)puVar3,0,1);
          if (iVar1 == 0) {
            FUN_360ff0d0(puVar3);
          }
        }
        else if (DAT_362ccee4 != 0) {
          puVar4 = (undefined4 *)AddressToString((ulong)&local_20);
          uVar6 = *puVar4;
          local_4._0_1_ = 1;
          pcVar5 = Translate(s_ETRSWARNING__Invalid_message_fro_36235978,4);
          CPrintF(pcVar5,uVar6);
          local_4 = (uint)local_4._1_3_ << 8;
          StringFree(local_20);
        }
      } while (*(int *)(this + 100) != 0);
    }
  }
  FUN_360f2670(&DAT_362cf250);
  FUN_360f28e0(0x362cf150);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return 1;
}

