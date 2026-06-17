
/* public: void __thiscall CDynParticle::AddSpringForce(class Vector<float,3>,float,float) */

void __thiscall
CDynParticle::AddSpringForce
          (CDynParticle *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined ***param_6)

{
  undefined4 *puVar1;
  undefined **local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined **local_5c;
  undefined4 *local_58;
  undefined **local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined **local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x18d3d0  1018  ?AddSpringForce@CDynParticle@@QAEXV?$Vector@M$02@@MM@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b04a;
  local_c = ExceptionList;
  local_50 = *(undefined4 *)(this + 0x28);
  local_4c = *(undefined4 *)(this + 0x2c);
  local_48 = *(undefined4 *)(this + 0x30);
  local_54 = &local_3c;
  local_58 = (undefined4 *)0x3618d410;
  ExceptionList = &local_c;
  FLOAT3DTopwVector();
  local_50 = *(undefined4 *)(this + 4);
  local_4c = *(undefined4 *)(this + 8);
  local_48 = *(undefined4 *)(this + 0xc);
  local_54 = &local_1c;
  local_4 = 0;
  local_58 = (undefined4 *)0x3618d43a;
  FLOAT3DTopwVector();
  local_50 = param_2;
  local_4c = param_3;
  local_54 = &local_2c;
  local_4._0_1_ = 1;
  local_48 = param_4;
  local_58 = (undefined4 *)0x3618d462;
  FLOAT3DTopwVector();
  local_48 = param_6;
  local_4c = param_5;
  local_5c = &PTR_FUN_3623dc04;
  local_58 = (undefined4 *)local_28;
  local_54 = local_24;
  local_50 = local_20;
  param_6 = &local_6c;
  local_6c = &PTR_FUN_3623dc04;
  local_68 = local_18;
  local_4._0_1_ = 2;
  local_64 = local_14;
  local_60 = local_10;
  FUN_361bd060(&local_3c);
  param_6 = &local_54;
  local_54 = &PTR_FUN_3623dc04;
  local_50 = local_38;
  local_4c = local_34;
  local_48 = local_30;
  local_58 = &param_2;
  local_5c = (undefined **)0x3618d53a;
  puVar1 = (undefined4 *)pwVectorToFLOAT3D();
  *(undefined4 *)(this + 0x28) = *puVar1;
  *(undefined4 *)(this + 0x2c) = puVar1[1];
  *(undefined4 *)(this + 0x30) = puVar1[2];
  local_4._0_1_ = 1;
  local_48 = 0x3618d55b;
  FUN_361bc1a0(&local_2c);
  local_4 = (uint)local_4._1_3_ << 8;
  local_48 = 0x3618d569;
  FUN_361bc1a0(&local_1c);
  local_4 = 0xffffffff;
  local_48 = 0x3618d57a;
  FUN_361bc1a0(&local_3c);
  ExceptionList = local_c;
  return;
}

