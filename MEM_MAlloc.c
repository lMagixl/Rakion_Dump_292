
/* void * __cdecl MEM_MAlloc(unsigned int) */

void * __cdecl MEM_MAlloc(uint param_1)

{
  void *pvVar1;
  char *pcVar2;
  
                    /* 0x2b6c0  2579  ?MEM_MAlloc@@YAPAXI@Z */
  pvVar1 = malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    if (PTR_FUN_362a25f8 != (undefined *)0x0) {
      (*(code *)PTR_FUN_362a25f8)(param_1);
    }
    pcVar2 = Translate(s_>ETRSNot_enough_memory___d_bytes_362253ef + 1,4);
    FatalError(pcVar2,param_1);
  }
  return pvVar1;
}

