
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCommunicationInterface::Client_Close(void) */

void __thiscall CCommunicationInterface::Client_Close(CCommunicationInterface *this)

{
  int iVar1;
  float local_1c;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfd4f0  1320  ?Client_Close@CCommunicationInterface@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362173a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  local_1c = 0.0;
  do {
    if ((DAT_362cf27c == 0) && (DAT_362cf2b4 == 0)) break;
    iVar1 = Client_Update(this);
    if (iVar1 == 0) break;
    Sleep(0x32);
    local_1c = local_1c + _DAT_36235abc;
  } while (local_1c < _DAT_36235ab8);
  FUN_360f1ce0(&DAT_362cf250);
  DAT_362cf260 = 0;
  *(undefined4 *)(this + 0x14) = 0;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

