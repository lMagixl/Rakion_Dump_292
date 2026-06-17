
/* unsigned int __cdecl MEM_Size(void *) */

uint __cdecl MEM_Size(void *param_1)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x3602b7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x2b7a0  2581  ?MEM_Size@@YAIPAX@Z */
  sVar1 = _msize(param_1);
  return sVar1;
}

