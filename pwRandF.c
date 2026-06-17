
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float __cdecl pwRandF(void) */

float __cdecl pwRandF(void)

{
  int iVar1;
  
                    /* 0x18dcc0  4276  ?pwRandF@@YAMXZ */
  iVar1 = rand_();
  return (float)iVar1 * _DAT_3623193c - _DAT_36227cf0;
}

