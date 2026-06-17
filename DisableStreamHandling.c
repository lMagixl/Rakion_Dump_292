
/* public: static void __cdecl CTStream::DisableStreamHandling(void) */

void __cdecl CTStream::DisableStreamHandling(void)

{
  void *pvVar1;
  
                    /* 0x3de40  1505  ?DisableStreamHandling@CTStream@@SAXXZ */
  pvVar1 = DAT_362befa8;
  *(undefined4 *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x28) = 0;
  operator_delete(pvVar1);
  DAT_362befa8 = (void *)0x0;
  return;
}

