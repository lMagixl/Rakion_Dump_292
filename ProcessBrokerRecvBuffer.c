
/* void __cdecl ProcessBrokerRecvBuffer(void) */

void __cdecl ProcessBrokerRecvBuffer(void)

{
  short *psVar1;
  
  psVar1 = DAT_36362a4c;
  while (psVar1 != (short *)0x0) {
    DAT_36362a4c = psVar1;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_36362a68);
    if (DAT_36362a4c == DAT_36362a48) {
      DAT_36362a48 = (short *)0x0;
      DAT_36362a4c = (short *)0x0;
    }
    else {
      DAT_36362a4c = *(short **)(DAT_36362a4c + 0x802);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_36362a68);
    if ((DAT_36371aa0 != 0) || (*psVar1 == 0)) {
      FUN_36192030(*psVar1,(byte *)(psVar1 + 2));
    }
    operator_delete(psVar1);
    psVar1 = DAT_36362a4c;
  }
  DAT_36362a4c = psVar1;
  return;
}

