
/* public: void __thiscall CCollisionCapsule::UpdateBoneMatrix(float (&)[12]) */

void __thiscall CCollisionCapsule::UpdateBoneMatrix(CCollisionCapsule *this,float *param_1)

{
                    /* 0x18b8c0  3907  ?UpdateBoneMatrix@CCollisionCapsule@@QAEXAAY0M@M@Z */
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(this + 100) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(this + 0x40);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(this + 0x48);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(this + 0x4c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(this + 0x54);
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
  return;
}

