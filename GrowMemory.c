
/* void __cdecl GrowMemory(void * *,long) */

void __cdecl GrowMemory(void **param_1,long param_2)

{
  void *pvVar1;
  
  pvVar1 = MEM_ReAlloc(*param_1,param_2);
  *param_1 = pvVar1;
  return;
                    /* 0x2b810  2221  ?GrowMemory@@YAXPAPAXJ@Z */
}

