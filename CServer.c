
/* public: __thiscall CServer::CServer(void) */

CServer * __thiscall CServer::CServer(CServer *this)

{
  CServer *this_00;
  CServer *pCVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* 0x10c9b0  215  ??0CServer@@QAE@XZ */
  puStack_8 = &LAB_36217ddb;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this_00 = this + 0xc;
  *(int *)this_00 = 0;
  *(undefined4 *)(this + 0x10) = 0;
  local_4 = 1;
  uStack_3 = 0;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x30) = pcVar2;
  local_4 = 2;
  FUN_361009b0((undefined4 *)(this + 0x3c));
  local_4 = 3;
  FUN_361009b0((undefined4 *)(this + 0x1c84));
  local_4 = 4;
  CNetworkMessage::CNetworkMessage((CNetworkMessage *)(this + 0x38d0));
  pCVar1 = this + 0x38f4;
  local_4 = 5;
  FUN_361009b0((undefined4 *)pCVar1);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x553c) = 0;
  *(undefined4 *)(this + 0x1c) = 0xbf800000;
  local_4 = 6;
  *(undefined4 *)(this + 4) = 0x20;
  puVar3 = (undefined4 *)thunk_FUN_361bf99c(0xc64);
  local_4 = 7;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0x21;
    puVar4 = puVar3 + 1;
    _eh_vector_constructor_iterator_
              (puVar4,0x60,0x21,FUN_3610a8a0,(_func_void_void_ptr *)&LAB_36109510);
  }
  _local_4 = CONCAT31(uStack_3,6);
  *(undefined4 **)(this + 8) = puVar4;
  FUN_360a59e0(this_00,0x20);
  iVar5 = 0;
  if (0 < *(int *)this_00) {
    do {
      *(int *)(*(int *)(this + 0x10) + 0xa0 + iVar6) = iVar5;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x100;
    } while (iVar5 < *(int *)this_00);
  }
  (**(code **)(*(int *)(this + 0x3c) + 4))();
  (**(code **)(*(int *)pCVar1 + 4))();
  if (*(int *)(this + 0x50) < DAT_362a6054) {
    (**(code **)(*(int *)(this + 0x3c) + 8))(DAT_362a6054);
  }
  (**(code **)(*(int *)pCVar1 + 8))(DAT_362a6054 / 3);
  ExceptionList = puVar3;
  return this;
}

