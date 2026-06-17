
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl Snap(float &,float) */

void __cdecl Snap(float *param_1,float param_2)

{
  double dVar1;
  
                    /* 0x48bd0  3641  ?Snap@@YAXAAMM@Z */
  dVar1 = floor((double)(*param_1 / param_2 + _DAT_36227cf0));
  *param_1 = (float)dVar1 * param_2;
  return;
}

