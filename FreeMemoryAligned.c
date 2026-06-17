
/* void __cdecl FreeMemoryAligned(void *) */

void __cdecl FreeMemoryAligned(void *param_1)

{
                    /* 0x2b890  1668  ?FreeMemoryAligned@@YAXPAX@Z */
  FreeMemory(*(void **)((int)param_1 + -4));
  return;
}

