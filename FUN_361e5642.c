
void * __cdecl FUN_361e5642(int *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    pvVar1 = malloc(param_2);
    if (pvVar1 == (void *)0x0) {
      FUN_361de341(param_1,s_Out_of_Memory_3624bb84);
    }
    return pvVar1;
  }
  return (void *)0x0;
}

