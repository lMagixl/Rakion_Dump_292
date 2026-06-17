
/* class pwVector3 __cdecl FLOAT3DTopwVector(class Vector<float,3>) */

undefined4 * __cdecl
FLOAT3DTopwVector(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x190fd0  1596  ?FLOAT3DTopwVector@@YA?AVpwVector3@@V?$Vector@M$02@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_3621b1c5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_361bc160(&local_1c);
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[1] = param_2;
  param_1[2] = param_3;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  *param_1 = &PTR_FUN_3623dc04;
  param_1[3] = param_4;
  FUN_361bc1a0(&local_1c);
  ExceptionList = local_c;
  return param_1;
}

