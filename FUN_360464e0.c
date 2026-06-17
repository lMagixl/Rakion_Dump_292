
void __fastcall FUN_360464e0(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621146c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  StringFree((char *)param_1[2]);
  param_1[2] = pcVar1;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362b8ddc,1);
  local_4 = 0;
  FUN_3614f5a0((int)(param_1 + 9));
  puVar3 = param_1 + 9;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if ((void *)param_1[0x18] != (void *)0x0) {
    FreeMemory((void *)param_1[0x18]);
    param_1[0x18] = 0;
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

