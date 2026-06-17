
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class Vector<float,3> __thiscall CCollisionCapsule::GetRelitiveVelocity(class
   Vector<float,3>,class Vector<float,3>,float) */

void __thiscall
CCollisionCapsule::GetRelitiveVelocity
          (CCollisionCapsule *this,float *param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,float param_8,float param_9)

{
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* 0x18c110  2078
                       ?GetRelitiveVelocity@CCollisionCapsule@@QAE?AV?$Vector@M$02@@V2@0M@Z */
  FUN_3608d7d0(&local_30,(float *)(this + 0x28));
  FUN_3618d060(&local_3c,param_3,param_4,param_5,&local_30);
  FUN_3608d7d0(&local_30,(float *)(this + 0x58));
  FUN_3618d060(&param_6,param_6,param_7,param_8,&local_30);
  param_3 = local_3c - param_6;
  param_4 = local_38 - param_7;
  local_30 = *(float *)(this + 0x28);
  param_5 = local_34 - param_8;
  local_2c = *(undefined4 *)(this + 0x2c);
  param_8 = _DAT_36223384 / param_9;
  local_28 = *(undefined4 *)(this + 0x30);
  param_6 = param_3 * param_8;
  param_7 = param_4 * param_8;
  param_8 = param_5 * param_8;
  local_24 = *(undefined4 *)(this + 0x38);
  local_20 = *(undefined4 *)(this + 0x3c);
  local_1c = *(undefined4 *)(this + 0x40);
  local_18 = *(undefined4 *)(this + 0x48);
  local_14 = *(undefined4 *)(this + 0x4c);
  local_10 = *(undefined4 *)(this + 0x50);
  FUN_3618d0f0(&param_3,param_6,param_7,param_8,&local_30);
  *param_2 = param_3;
  param_2[1] = param_4;
  param_2[2] = param_5;
  return;
}

