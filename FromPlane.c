
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMappingVectors::FromPlane(class Plane<float,3> const &) */

void __thiscall CMappingVectors::FromPlane(CMappingVectors *this,Plane<float,3> *param_1)

{
  CMappingVectors *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x5e390  1685  ?FromPlane@CMappingVectors@@QAEXABV?$Plane@M$02@@@Z */
  fVar2 = *(float *)(param_1 + 0xc);
  fVar4 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_1 + 8);
  *(float *)this = *(float *)param_1 * fVar2;
  *(float *)(this + 4) = fVar4 * fVar2;
  *(float *)(this + 8) = fVar5 * fVar2;
  pCVar1 = this + 0xc;
  if (ABS(*(float *)(param_1 + 4)) <= (float)_DAT_36227cd8) {
    local_c = *(float *)(param_1 + 8) - *(float *)(param_1 + 4) * _DAT_3622376c;
    local_8 = *(float *)param_1 * _DAT_3622376c - *(float *)(param_1 + 8) * _DAT_3622376c;
    local_4 = *(float *)(param_1 + 4) * _DAT_3622376c - *(float *)param_1;
  }
  else {
    local_c = *(float *)(param_1 + 8) * _DAT_3622376c - *(float *)(param_1 + 4) * _DAT_3622376c;
    local_8 = *(float *)param_1 * _DAT_3622376c - *(float *)(param_1 + 8);
    local_4 = *(float *)(param_1 + 4) - *(float *)param_1 * _DAT_3622376c;
  }
  *(float *)pCVar1 = local_c;
  *(float *)(this + 0x10) = local_8;
  *(float *)(this + 0x14) = local_4;
  if ((float)_DAT_36223438 <=
      SQRT(*(float *)(this + 0x14) * *(float *)(this + 0x14) +
           *(float *)(this + 0x10) * *(float *)(this + 0x10) + *(float *)pCVar1 * *(float *)pCVar1))
  {
    fVar2 = _DAT_36223384 /
            SQRT(*(float *)(this + 0x14) * *(float *)(this + 0x14) +
                 *(float *)(this + 0x10) * *(float *)(this + 0x10) +
                 *(float *)pCVar1 * *(float *)pCVar1);
    *(float *)pCVar1 = fVar2 * *(float *)pCVar1;
    *(float *)(this + 0x10) = fVar2 * *(float *)(this + 0x10);
    fVar2 = fVar2 * *(float *)(this + 0x14);
  }
  else {
    *(float *)pCVar1 = *(float *)pCVar1 * _DAT_3622376c;
    *(float *)(this + 0x10) = *(float *)(this + 0x10) * _DAT_3622376c;
    fVar2 = *(float *)(this + 0x14) * _DAT_3622376c;
  }
  *(float *)(this + 0x14) = fVar2;
  fVar2 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 4);
  fVar3 = *(float *)param_1;
  *(float *)(this + 0x18) =
       *(float *)(this + 0x10) * *(float *)(param_1 + 8) -
       *(float *)(param_1 + 4) * *(float *)(this + 0x14);
  *(float *)(this + 0x1c) = *(float *)(this + 0x14) * fVar2 - fVar4 * *(float *)pCVar1;
  *(float *)(this + 0x20) = fVar5 * *(float *)pCVar1 - *(float *)(this + 0x10) * fVar3;
  return;
}

