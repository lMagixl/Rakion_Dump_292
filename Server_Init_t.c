
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCommunicationInterface::Server_Init_t(void) */

void __thiscall CCommunicationInterface::Server_Init_t(CCommunicationInterface *this)

{
  undefined4 *puVar1;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfbb30  3378  ?Server_Init_t@CCommunicationInterface@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621718d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  puVar1 = &DAT_362cd184;
  do {
    FUN_360f1ce0(puVar1 + -0xd);
    *puVar1 = &DAT_362cd110;
    puVar1[0x1c] = &DAT_362cd128;
    puVar1 = puVar1 + 0x40;
  } while ((int)puVar1 < 0x362cf184);
  _DAT_362cd160 = 1;
  _DAT_362cd150 = 1;
  FUN_360f1ce0(&DAT_362cf250);
  DAT_362cf250 = 1;
  DAT_362cf260 = 1;
  _DAT_362cf284 = &DAT_362cd110;
  _DAT_362cf2f4 = &DAT_362cd128;
  *(undefined4 *)(this + 0x10) = 1;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

