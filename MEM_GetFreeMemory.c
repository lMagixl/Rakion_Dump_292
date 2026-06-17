
/* unsigned int __cdecl MEM_GetFreeMemory(void) */

uint __cdecl MEM_GetFreeMemory(void)

{
  _MEMORYSTATUS local_20;
  
                    /* 0x2b7b0  2578  ?MEM_GetFreeMemory@@YAIXZ */
  GlobalMemoryStatus(&local_20);
  return local_20.dwAvailPhys;
}

