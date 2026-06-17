
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class Vector<float,3> __cdecl pwGetReflectVelocity(class Vector<float,3>,class
   Vector<float,3>,float) */

void __cdecl
pwGetReflectVelocity
          (float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  
                    /* 0x18e6d0  4274  ?pwGetReflectVelocity@@YA?AV?$Vector@M$02@@V1@0M@Z */
  fVar1 = SQRT(param_2 * param_2 + param_3 * param_3 + param_4 * param_4);
  fVar2 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar1) {
    fVar2 = _DAT_36223384 / fVar1;
  }
  param_4 = param_4 * fVar2;
  param_3 = param_3 * fVar2;
  param_2 = param_2 * fVar2;
  fVar1 = param_5 * param_2 + param_6 * param_3 + param_7 * param_4;
  fVar1 = fVar1 + fVar1;
  *param_1 = (param_5 - param_2 * fVar1) * param_8;
  param_1[1] = (param_6 - param_3 * fVar1) * param_8;
  param_1[2] = (param_7 - param_4 * fVar1) * param_8;
  return;
}

