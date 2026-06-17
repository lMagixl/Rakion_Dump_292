
/* void __cdecl DestroyBrokerNetLib(void) */

void __cdecl DestroyBrokerNetLib(void)

{
                    /* 0x191930  1485  ?DestroyBrokerNetLib@@YAXXZ */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_36362a68);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_36362a50);
  operator_delete(DAT_36362a80);
  return;
}

