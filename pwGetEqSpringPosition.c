
/* class Vector<float,3> __cdecl pwGetEqSpringPosition(class Vector<float,3>,class
   Vector<float,3>,float) */

undefined4 __cdecl pwGetEqSpringPosition(undefined4 param_1)

{
  undefined4 local_3c [4];
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1910b0  4272  ?pwGetEqSpringPosition@@YA?AV?$Vector@M$02@@V1@0M@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b1e7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FLOAT3DTopwVector();
  local_4 = 0;
  FLOAT3DTopwVector();
  local_4._0_1_ = 1;
  FUN_361bd300(local_3c);
  local_4._0_1_ = 2;
  pwVectorToFLOAT3D();
  local_4._0_1_ = 1;
  FUN_361bc1a0(local_3c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_361bc1a0(local_2c);
  local_4 = 0xffffffff;
  FUN_361bc1a0(local_1c);
  ExceptionList = local_c;
  return param_1;
}

