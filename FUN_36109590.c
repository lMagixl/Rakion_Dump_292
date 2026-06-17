
void __cdecl FUN_36109590(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long unaff_ESI;
  char *local_2c;
  char *local_28;
  CNetworkMessage local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_2c = StringDuplicate((char *)*param_1);
  local_4 = 0;
  iVar2 = CTString::operator!=((CTString *)&local_2c,&DAT_36236e7f);
  while (iVar2 != 0) {
    local_28 = StringDuplicate(local_2c);
    local_4._0_1_ = 1;
    CTString::OnlyFirstLine((CTString *)&local_28);
    CTString::RemovePrefix((CTString *)&local_2c,(CTString *)&local_28);
    CTString::DeleteChar((CTString *)&local_2c,0);
    pcVar3 = local_28;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != local_28 + 1 && -1 < (int)pcVar3 - (int)(local_28 + 1)) {
      CNetworkMessage::CNetworkMessage(local_24,0x21);
      local_4._0_1_ = 2;
      CNetworkMessage::operator<<(local_24,(CTString *)&local_28);
      CMessageDispatcher::SendToClientReliable((CMessageDispatcher *)_pNetwork,unaff_ESI,local_24);
      local_4._0_1_ = 1;
      CNetworkMessage::~CNetworkMessage(local_24);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_28);
    iVar2 = CTString::operator!=((CTString *)&local_2c,&DAT_36236e7f);
  }
  local_4 = 0xffffffff;
  StringFree(local_2c);
  ExceptionList = local_c;
  return;
}

