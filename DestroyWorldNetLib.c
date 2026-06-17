
/* void __cdecl DestroyWorldNetLib(void) */

void __cdecl DestroyWorldNetLib(void)

{
                    /* 0x195090  1492  ?DestroyWorldNetLib@@YAXXZ */
  (**(code **)(*DAT_3637fb00 + 0x14))();
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_36372ad0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_36372ab8);
  operator_delete(DAT_36372ae8);
  return;
}

