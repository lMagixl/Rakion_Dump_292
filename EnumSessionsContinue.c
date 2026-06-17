
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CNetworkLibrary::EnumSessionsContinue(void) */

void __thiscall CNetworkLibrary::EnumSessionsContinue(CNetworkLibrary *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  CNetworkSession *pCVar4;
  char *pcVar5;
  CTString *pCVar6;
  int *piVar7;
  CNetworkSession *this_00;
  ushort local_80 [2];
  float local_7c;
  CNetworkLibrary *local_78;
  ulong local_74;
  char *local_70;
  char *local_6c;
  char *local_68;
  undefined4 local_64 [6];
  char *local_4c;
  char *local_48;
  CNetworkSession *local_44;
  CNetworkMessage local_40 [24];
  char local_28 [12];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0xf4e70  1577  ?EnumSessionsContinue@CNetworkLibrary@@QAEXXZ */
  local_c = 0xffffffff;
  puStack_10 = &LAB_36216792;
  local_14 = ExceptionList;
  local_1c = DAT_362abd90;
  ExceptionList = &local_14;
  local_78 = this;
  plVar2 = (longlong *)CTimer::GetHighPrecisionTimer(_pTimer);
  local_7c = (float)((float10)*plVar2 / (float10)*(longlong *)_pTimer);
  if ((_DAT_362a60d0 < _DAT_3622376c) || (_DAT_362287e0 <= local_7c - _DAT_362a60d0)) {
    _DAT_362a60d0 = local_7c;
    CNetworkMessage::CNetworkMessage(local_40,0);
    local_c = 0;
    CMessageDispatcher::SendBroadcast
              ((CMessageDispatcher *)this,local_40,0xffffffff,(ushort)DAT_362a6088);
    local_c = 0xffffffff;
    CNetworkMessage::~CNetworkMessage(local_40);
  }
  *(undefined4 *)(this + 0x9a4) = 0;
  CNetworkMessage::CNetworkMessage((CNetworkMessage *)local_64);
  local_c = 1;
  CCommunicationInterface::Server_Update(&_cmiComm);
  iVar3 = CMessageDispatcher::ReceiveBroadcast
                    ((CMessageDispatcher *)this,(CNetworkMessage *)local_64,&local_74,local_80);
  do {
    if (iVar3 == 0) {
      local_c = 0xffffffff;
      CNetworkMessage::~CNetworkMessage((CNetworkMessage *)local_64);
      pCVar4 = *(CNetworkSession **)(this + 0x990);
      while (this_00 = pCVar4, pCVar4 = *(CNetworkSession **)this_00,
            pCVar4 != (CNetworkSession *)0x0) {
        if ((*(float *)(this_00 + 0x30) < _DAT_3622376c) ||
           (_DAT_362350bc < local_7c - *(float *)(this_00 + 0x30))) {
          CNetworkSession::~CNetworkSession(this_00);
          operator_delete(this_00);
          *(undefined4 *)(this + 0x9a4) = 1;
        }
      }
      ExceptionList = local_14;
      return;
    }
    if (((byte)local_64[0] & 0x3f) == 1) {
      local_44 = (CNetworkSession *)FUN_361bf99c(0x3c);
      local_c._0_1_ = 2;
      if (local_44 == (CNetworkSession *)0x0) {
        pCVar4 = (CNetworkSession *)0x0;
      }
      else {
        pCVar4 = (CNetworkSession *)CNetworkSession::CNetworkSession(local_44);
      }
      local_c._0_1_ = 1;
      CNetworkMessage::operator>>((CNetworkMessage *)local_64,(CTString *)(pCVar4 + 0x10));
      CNetworkMessage::operator>>((CNetworkMessage *)local_64,(CTString *)(pCVar4 + 0x14));
      CNetworkMessage::Read((CNetworkMessage *)local_64,pCVar4 + 0x1c,4);
      CNetworkMessage::Read((CNetworkMessage *)local_64,pCVar4 + 0x20,4);
      CNetworkMessage::operator>>((CNetworkMessage *)local_64,(CTString *)(pCVar4 + 0x24));
      CNetworkMessage::operator>>((CNetworkMessage *)local_64,(CTString *)(pCVar4 + 0x28));
      CNetworkMessage::operator>>((CNetworkMessage *)local_64,(CTString *)(pCVar4 + 0x2c));
      CNetworkMessage::Read((CNetworkMessage *)local_64,pCVar4 + 0x18,4);
      piVar1 = *(int **)(this + 0x990);
      do {
        piVar7 = piVar1;
        piVar1 = (int *)*piVar7;
        if (piVar1 == (int *)0x0) {
          _itoa((uint)local_80[0],local_28,10);
          local_68 = StringDuplicate(local_28);
          local_c._0_1_ = 3;
          local_6c = StringDuplicate(&DAT_36235090);
          local_c._0_1_ = 4;
          pCVar6 = (CTString *)AddressToString((ulong)&local_4c);
          local_c._0_1_ = 5;
          pCVar6 = (CTString *)CTString::operator+(pCVar6,(CTString *)&local_48);
          local_c._0_1_ = 6;
          CTString::operator+(pCVar6,(CTString *)&local_70);
          local_c._0_1_ = 0xb;
          StringFree(local_48);
          local_c._0_1_ = 10;
          StringFree(local_4c);
          local_c._0_1_ = 9;
          StringFree(local_6c);
          local_c._0_1_ = 8;
          StringFree(local_68);
          *(ulong *)(pCVar4 + 0x34) = local_74;
          *(ushort *)(pCVar4 + 0x38) = local_80[0];
          *(float *)(pCVar4 + 0x30) = local_7c;
          pcVar5 = StringDuplicate(local_70);
          StringFree(*(char **)(pCVar4 + 8));
          *(char **)(pCVar4 + 8) = pcVar5;
          CListHead::AddTail((CListHead *)(this + 0x990),(CListNode *)pCVar4);
          *(undefined4 *)(local_78 + 0x9a4) = 1;
          local_c = CONCAT31(local_c._1_3_,1);
          StringFree(local_70);
          this = local_78;
          goto LAB_360f523c;
        }
      } while ((piVar7[0xd] != local_74) || (*(ushort *)(piVar7 + 0xe) != local_80[0]));
      if (piVar7[7] != *(int *)(pCVar4 + 0x1c)) {
        *(undefined4 *)(local_78 + 0x9a4) = 1;
      }
      pcVar5 = StringDuplicate(*(char **)(pCVar4 + 0x10));
      StringFree((char *)piVar7[4]);
      piVar7[4] = (int)pcVar5;
      pcVar5 = StringDuplicate(*(char **)(pCVar4 + 0x14));
      StringFree((char *)piVar7[5]);
      piVar7[5] = (int)pcVar5;
      piVar7[7] = *(int *)(pCVar4 + 0x1c);
      piVar7[8] = *(int *)(pCVar4 + 0x20);
      pcVar5 = StringDuplicate(*(char **)(pCVar4 + 0x24));
      StringFree((char *)piVar7[9]);
      piVar7[9] = (int)pcVar5;
      pcVar5 = StringDuplicate(*(char **)(pCVar4 + 0x28));
      StringFree((char *)piVar7[10]);
      piVar7[10] = (int)pcVar5;
      pcVar5 = StringDuplicate(*(char **)(pCVar4 + 0x2c));
      StringFree((char *)piVar7[0xb]);
      piVar7[0xb] = (int)pcVar5;
      piVar7[6] = *(int *)(pCVar4 + 0x18);
      piVar7[0xc] = (int)local_7c;
      CNetworkSession::~CNetworkSession(pCVar4);
      operator_delete(pCVar4);
      this = local_78;
    }
LAB_360f523c:
    local_c = 0xffffffff;
    CNetworkMessage::~CNetworkMessage((CNetworkMessage *)local_64);
    CNetworkMessage::CNetworkMessage((CNetworkMessage *)local_64);
    local_c = 1;
    CCommunicationInterface::Server_Update(&_cmiComm);
    iVar3 = CMessageDispatcher::ReceiveBroadcast
                      ((CMessageDispatcher *)this,(CNetworkMessage *)local_64,&local_74,local_80);
  } while( true );
}

