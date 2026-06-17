
CNetworkMessage * __fastcall FUN_36107680(void *param_1)

{
  int iVar1;
  CNetworkMessage *pCVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621786b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)param_1 + 0x20) = *(int *)((int)param_1 + 0x20) + 1;
  iVar1 = FUN_36026a70((int)param_1 + 0x10);
  if (0 < iVar1) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + -4 + iVar1 * 4);
    *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + -1;
    pCVar2 = (CNetworkMessage *)FUN_36107260(param_1,iVar1);
    FUN_36106400(pCVar2);
    ExceptionList = local_c;
    return pCVar2;
  }
  iVar1 = FUN_36107270((int)param_1);
  if (*(int *)((int)param_1 + 0x34) <= iVar1) {
    iVar1 = *(int *)((int)param_1 + 0x28) + 1;
    *(int *)((int)param_1 + 0x28) = iVar1;
    if (iVar1 < *(int *)((int)param_1 + 0x2c)) {
      iVar1 = *(int *)((int)param_1 + 0x2c);
    }
    *(int *)((int)param_1 + 0x2c) = iVar1;
  }
  pCVar2 = AllocMemory(0x24);
  local_4 = 0;
  if (pCVar2 == (CNetworkMessage *)0x0) {
    pCVar2 = (CNetworkMessage *)0x0;
  }
  else {
    pCVar2 = FUN_361066b0(pCVar2);
  }
  local_4 = 0xffffffff;
  FUN_36107610(param_1,pCVar2);
  FUN_36106400(pCVar2);
  ExceptionList = local_c;
  return pCVar2;
}

