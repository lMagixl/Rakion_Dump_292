
/* void __cdecl ResizeMemory(void * *,long) */

void __cdecl ResizeMemory(void **param_1,long param_2)

{
  void *pvVar1;
  
                    /* 0x2b7f0  3169  ?ResizeMemory@@YAXPAPAXJ@Z */
  pvVar1 = MEM_ReAlloc(*param_1,param_2);
  *param_1 = pvVar1;
  return;
}

