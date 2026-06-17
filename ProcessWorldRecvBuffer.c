
/* void __cdecl ProcessWorldRecvBuffer(void) */

void __cdecl ProcessWorldRecvBuffer(void)

{
  short *psVar1;
  
  psVar1 = DAT_36371ab4;
  while (psVar1 != (short *)0x0) {
    DAT_36371ab4 = psVar1;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_36372ad0);
    if (DAT_36371ab4 == DAT_36371ab0) {
      DAT_36371ab0 = (short *)0x0;
      DAT_36371ab4 = (short *)0x0;
    }
    else {
      DAT_36371ab4 = *(short **)(DAT_36371ab4 + 0x802);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_36372ad0);
    if ((DAT_36381b08 != 0) || (*psVar1 == 0)) {
      FUN_3619be70(*psVar1,(ushort *)(psVar1 + 2));
    }
    operator_delete(psVar1);
    psVar1 = DAT_36371ab4;
  }
  DAT_36371ab4 = psVar1;
  return;
}

