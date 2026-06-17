
/* public: void __thiscall CControlBone::SetAxisFromMatrix(float (&)[12]) */

void __thiscall CControlBone::SetAxisFromMatrix(CControlBone *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
                    /* 0x18ed30  3403  ?SetAxisFromMatrix@CControlBone@@QAEXAAY0M@M@Z */
  fVar1 = param_1[4];
  fVar2 = param_1[8];
  *(float *)(this + 0x38) = *param_1;
  *(float *)(this + 0x3c) = fVar1;
  *(float *)(this + 0x40) = fVar2;
  fVar1 = param_1[5];
  fVar2 = param_1[9];
  *(float *)(this + 0x44) = param_1[1];
  *(float *)(this + 0x48) = fVar1;
  *(float *)(this + 0x4c) = fVar2;
  fVar1 = param_1[6];
  fVar2 = param_1[10];
  *(float *)(this + 0x50) = param_1[2];
  *(float *)(this + 0x54) = fVar1;
  *(float *)(this + 0x58) = fVar2;
  return;
}

