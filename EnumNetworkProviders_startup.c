
/* public: void __thiscall CMessageDispatcher::EnumNetworkProviders_startup(class CListHead &) */

void __thiscall
CMessageDispatcher::EnumNetworkProviders_startup(CMessageDispatcher *this,CListHead *param_1)

{
  CNetworkProvider *pCVar1;
  char *pcVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x103a00  1576
                       ?EnumNetworkProviders_startup@CMessageDispatcher@@QAEXAAVCListHead@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362176be;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CNetworkProvider *)FUN_361bf99c(0xc);
  puVar3 = (undefined4 *)0x0;
  local_4 = 0;
  if (pCVar1 != (CNetworkProvider *)0x0) {
    puVar3 = (undefined4 *)CNetworkProvider::CNetworkProvider(pCVar1);
  }
  local_4 = 0xffffffff;
  pcVar2 = StringDuplicate(s_I_Local_362363a2 + 2);
  StringFree((char *)*puVar3);
  *puVar3 = pcVar2;
  CListHead::AddTail(param_1,(CListNode *)(puVar3 + 1));
  pCVar1 = (CNetworkProvider *)FUN_361bf99c(0xc);
  local_4 = 1;
  if (pCVar1 == (CNetworkProvider *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)CNetworkProvider::CNetworkProvider(pCVar1);
  }
  local_4 = 0xffffffff;
  pcVar2 = StringDuplicate(s_TCP_IP_Server_362363ac);
  StringFree((char *)*puVar3);
  *puVar3 = pcVar2;
  CListHead::AddTail(param_1,(CListNode *)(puVar3 + 1));
  pCVar1 = (CNetworkProvider *)FUN_361bf99c(0xc);
  local_4 = 2;
  if (pCVar1 == (CNetworkProvider *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)CNetworkProvider::CNetworkProvider(pCVar1);
  }
  local_4 = 0xffffffff;
  pcVar2 = StringDuplicate(s_TCP_IP_Client_362363bc);
  StringFree((char *)*puVar3);
  *puVar3 = pcVar2;
  CListHead::AddTail(param_1,(CListNode *)(puVar3 + 1));
  ExceptionList = local_c;
  return;
}

