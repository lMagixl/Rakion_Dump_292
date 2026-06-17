
/* public: void __thiscall CDynParticle::AddGravityForce(float) */

void __thiscall CDynParticle::AddGravityForce(CDynParticle *this,float param_1)

{
  undefined4 *puVar1;
  undefined1 local_28 [12];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x18d2f0  981  ?AddGravityForce@CDynParticle@@QAEXM@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FLOAT3DTopwVector();
  local_4 = 0;
  FUN_361bcf80(local_1c);
  puVar1 = (undefined4 *)pwVectorToFLOAT3D(local_28);
  *(undefined4 *)(this + 0x28) = *puVar1;
  *(undefined4 *)(this + 0x2c) = puVar1[1];
  *(undefined4 *)(this + 0x30) = puVar1[2];
  local_4 = 0xffffffff;
  FUN_361bc1a0(local_1c);
  ExceptionList = local_c;
  return;
}

