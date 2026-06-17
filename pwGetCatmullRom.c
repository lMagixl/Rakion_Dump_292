
/* class Vector<float,3> __cdecl pwGetCatmullRom(class Vector<float,3> &,class Vector<float,3>
   &,class Vector<float,3> &,class Vector<float,3> &,float) */

Vector<float,3> * __cdecl
pwGetCatmullRom(Vector<float,3> *param_1,Vector<float,3> *param_2,Vector<float,3> *param_3,
               Vector<float,3> *param_4,float param_5)

{
  float in_stack_00000018;
  undefined4 local_5c [4];
  undefined4 local_4c [4];
  undefined4 local_3c [4];
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x191240  4270  ?pwGetCatmullRom@@YA?AV?$Vector@M$02@@AAV1@000M@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b219;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FLOAT3DTopwVector();
  local_4 = 0;
  FLOAT3DTopwVector();
  local_4._0_1_ = 1;
  FLOAT3DTopwVector();
  local_4._0_1_ = 2;
  FLOAT3DTopwVector();
  local_4._0_1_ = 3;
  FUN_361be630(local_5c,(int)local_1c,(int)local_2c,(int)local_3c,(int)local_4c,in_stack_00000018);
  local_4._0_1_ = 4;
  pwVectorToFLOAT3D(param_1);
  local_4._0_1_ = 3;
  FUN_361bc1a0(local_5c);
  local_4._0_1_ = 2;
  FUN_361bc1a0(local_4c);
  local_4._0_1_ = 1;
  FUN_361bc1a0(local_3c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_361bc1a0(local_2c);
  local_4 = 0xffffffff;
  FUN_361bc1a0(local_1c);
  ExceptionList = local_c;
  return param_1;
}

