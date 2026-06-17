
void __cdecl FUN_360f4490(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621668a;
  local_c = ExceptionList;
  if (*(int *)(_pNetwork + 0x14) == 0) {
    ExceptionList = &local_c;
    pcVar1 = Translate(s_ETRSOnly_server_can_kick_people__3623355c,4);
    CPrintF(pcVar1);
    ExceptionList = local_c;
    return;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0x20 < param_1) {
    param_1 = 0x20;
  }
  ExceptionList = &local_c;
  iVar2 = FUN_36109550((undefined4 *)(param_1 * 0x60 + *(int *)(*(int *)(_pNetwork + 0x18) + 8)));
  if (iVar2 == 0) {
    pcVar1 = Translate(s_ETRSClient_not_connected__36233580,4);
    CPrintF(pcVar1);
    ExceptionList = local_c;
    return;
  }
  if (param_1 == 0) {
    pcVar1 = Translate(s_ETRSCan_t_kick_local_client__3623359c,4);
    CPrintF(pcVar1);
    ExceptionList = local_c;
    return;
  }
  uVar4 = *param_2;
  iVar2 = param_1;
  pcVar1 = Translate(s_ETRSKicking__d_with_explanation___362335bc,4);
  CPrintF(pcVar1,iVar2,uVar4);
  puVar3 = (undefined4 *)operator+((char *)&local_10,(CTString *)s_Admin__362335e8);
  local_4 = 0;
  CServer::SendDisconnectMessage(*(CServer **)(_pNetwork + 0x18),param_1,(char *)*puVar3,0);
  local_4 = 0xffffffff;
  StringFree(local_10);
  ExceptionList = local_c;
  return;
}

