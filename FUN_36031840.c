
/* WARNING: Removing unreachable block (ram,0x360318cc) */

void FUN_36031840(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  uint local_8;
  int local_4;
  
  if (_pNetwork != (CNetworkLibrary *)0x0) {
    if (DAT_362be2d4 == 0) {
      puVar2 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      DAT_362be3c8 = *puVar2;
      DAT_362be3cc = puVar2[1];
      DAT_362be2d4 = 1;
    }
    CTimer::GetHighPrecisionTimer(_pTimer);
    bVar4 = local_8 < DAT_362be3c8;
    iVar3 = local_8 - DAT_362be3c8;
    iVar1 = local_4 - DAT_362be3cc;
    uVar5 = FUN_361bfd6c();
    if ((longlong)uVar5 < CONCAT44(iVar1 - (uint)bVar4,iVar3)) {
      if (*(int *)(_pNetwork + 0x14) != 0) {
        CCommunicationInterface::Server_Update(&_cmiComm);
      }
      puVar2 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      DAT_362be3c8 = *puVar2;
      DAT_362be3cc = puVar2[1];
    }
  }
  return;
}

