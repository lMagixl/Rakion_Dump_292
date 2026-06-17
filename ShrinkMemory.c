
/* void __cdecl ShrinkMemory(void * *,long) */

void __cdecl ShrinkMemory(void **param_1,long param_2)

{
  void *pvVar1;
  
  pvVar1 = MEM_ReAlloc(*param_1,param_2);
  *param_1 = pvVar1;
  return;
                    /* 0x2b820  3635  ?ShrinkMemory@@YAXPAPAXJ@Z */
}

