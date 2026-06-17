
/* class Vector<float,3> __cdecl pwVectorToFLOAT3D(class pwVector3) */

undefined4 * __cdecl
pwVectorToFLOAT3D(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
                    /* 0x191060  4277  ?pwVectorToFLOAT3D@@YA?AV?$Vector@M$02@@VpwVector3@@@Z */
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  FUN_361bc1a0(&param_2);
  return param_1;
}

