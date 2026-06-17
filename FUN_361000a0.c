
void __cdecl FUN_361000a0(CTStream *param_1,CTStream *param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_36217540;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  CTimer::GetHighPrecisionTimer(_pTimer);
  lVar2 = CTStream::GetStreamSize(param_1);
  lVar3 = CTStream::GetPos_t(param_1);
  DAT_362cf518 = lVar2 - lVar3;
  DAT_362cf514 = AllocMemory(DAT_362cf518);
  uVar1 = DAT_362cf518;
  puVar5 = *(undefined4 **)(param_1 + 0x14);
  puVar6 = DAT_362cf514;
  for (uVar4 = DAT_362cf518 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar1;
  lVar2 = CTStream::GetStreamSize(param_2);
  lVar3 = CTStream::GetPos_t(param_2);
  DAT_362cf520 = lVar2 - lVar3;
  DAT_362cf51c = AllocMemory(DAT_362cf520);
  uVar1 = DAT_362cf520;
  puVar5 = *(undefined4 **)(param_2 + 0x14);
  puVar6 = DAT_362cf51c;
  for (uVar4 = DAT_362cf520 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(uint *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + uVar1;
  DAT_362cf500 = param_3;
  FUN_360ffe80();
  CTimer::GetHighPrecisionTimer(_pTimer);
  FUN_360ffcc0();
  ExceptionList = local_10;
  return;
}

