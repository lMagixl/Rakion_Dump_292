
/* void * __cdecl MEM_ReAlloc(void *,unsigned int) */

void * __cdecl MEM_ReAlloc(void *param_1,uint param_2)

{
  void *pvVar1;
  char *pcVar2;
  
                    /* 0x2b720  2580  ?MEM_ReAlloc@@YAPAXPAXI@Z */
  pvVar1 = realloc(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    pcVar2 = Translate(s_ETRSNot_enough_memory___d_bytes_n_3622541c,4);
    FatalError(pcVar2,param_2);
  }
  return pvVar1;
}

