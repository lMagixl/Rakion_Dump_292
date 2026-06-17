
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_36114200(float param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)_DAT_36223384 - (float10)param_4;
  return (float10)param_4 * (float10)param_4 * (float10)param_3 +
         (fVar1 * (float10)param_4 + fVar1 * (float10)param_4) * (float10)param_2 +
         fVar1 * fVar1 * (float10)param_1;
}

