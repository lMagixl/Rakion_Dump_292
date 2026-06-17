
/* public: void __thiscall CCollisionCapsule::InitBoneMatrix(float (&)[12]) */

void __thiscall CCollisionCapsule::InitBoneMatrix(CCollisionCapsule *this,float *param_1)

{
                    /* 0x18b820  2305  ?InitBoneMatrix@CCollisionCapsule@@QAEXAAY0M@M@Z */
  *(float *)(this + 0x28) = *param_1;
  *(float *)(this + 0x2c) = param_1[1];
  *(float *)(this + 0x30) = param_1[2];
  *(float *)(this + 0x34) = param_1[3];
  *(float *)(this + 0x38) = param_1[4];
  *(float *)(this + 0x3c) = param_1[5];
  *(float *)(this + 0x40) = param_1[6];
  *(float *)(this + 0x44) = param_1[7];
  *(float *)(this + 0x48) = param_1[8];
  *(float *)(this + 0x4c) = param_1[9];
  *(float *)(this + 0x50) = param_1[10];
  *(float *)(this + 0x54) = param_1[0xb];
  *(float *)(this + 0x58) = *param_1;
  *(float *)(this + 0x5c) = param_1[1];
  *(float *)(this + 0x60) = param_1[2];
  *(float *)(this + 100) = param_1[3];
  *(float *)(this + 0x68) = param_1[4];
  *(float *)(this + 0x6c) = param_1[5];
  *(float *)(this + 0x70) = param_1[6];
  *(float *)(this + 0x74) = param_1[7];
  *(float *)(this + 0x78) = param_1[8];
  *(float *)(this + 0x7c) = param_1[9];
  *(float *)(this + 0x80) = param_1[10];
  *(float *)(this + 0x84) = param_1[0xb];
  return;
}

