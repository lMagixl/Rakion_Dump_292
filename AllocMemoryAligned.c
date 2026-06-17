
/* void * __cdecl AllocMemoryAligned(long,long) */

void * __cdecl AllocMemoryAligned(long param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* 0x2b860  1050  ?AllocMemoryAligned@@YAPAXJJ@Z */
  pvVar1 = AllocMemory(param_1 + param_2 * 2);
  pvVar2 = (void *)(((int)pvVar1 + param_2 + -1 & ~(param_2 - 1U)) + param_2);
  *(void **)((int)pvVar2 + -4) = pvVar1;
  return pvVar2;
}

