
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CCollisionCapsule::IsInside(class Vector<float,3>) */

int __thiscall
CCollisionCapsule::IsInside(CCollisionCapsule *this,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float local_18 [3];
  float local_c [3];
  
                    /* 0x18bc70  2410  ?IsInside@CCollisionCapsule@@QAEHV?$Vector@M$02@@@Z */
  pfVar8 = (float *)FUN_3618d060(local_18,*(float *)(this + 0x10),*(float *)(this + 0x14),
                                 *(float *)(this + 0x18),(float *)(this + 0x28));
  fVar1 = *pfVar8;
  fVar2 = pfVar8[1];
  fVar3 = pfVar8[2];
  pfVar9 = (float *)FUN_3618d060(local_c,*(float *)(this + 0x1c),*(float *)(this + 0x20),
                                 *(float *)(this + 0x24),(float *)(this + 0x28));
  fVar7 = ((*pfVar9 - fVar1) * (param_2 - fVar1) +
          (pfVar9[1] - fVar2) * (param_3 - fVar2) + (pfVar9[2] - fVar3) * (param_4 - fVar3)) /
          ((*pfVar9 - fVar1) * (*pfVar9 - fVar1) +
          (pfVar9[1] - fVar2) * (pfVar9[1] - fVar2) + (pfVar9[2] - fVar3) * (pfVar9[2] - fVar3));
  fVar4 = (*pfVar8 + (*pfVar9 - fVar1) * fVar7) - param_2;
  fVar5 = (pfVar8[1] + (pfVar9[1] - fVar2) * fVar7) - param_3;
  fVar6 = (pfVar8[2] + (pfVar9[2] - fVar3) * fVar7) - param_4;
  if ((SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6) < *(float *)(this + 0xc)) &&
     ((((_DAT_3622376c < fVar7 && (fVar7 < _DAT_36223384)) ||
       (SQRT((param_2 - fVar1) * (param_2 - fVar1) +
             (param_3 - fVar2) * (param_3 - fVar2) + (param_4 - fVar3) * (param_4 - fVar3)) <
        *(float *)(this + 0xc))) ||
      (SQRT((param_2 - *pfVar9) * (param_2 - *pfVar9) +
            (param_3 - pfVar9[1]) * (param_3 - pfVar9[1]) +
            (param_4 - pfVar9[2]) * (param_4 - pfVar9[2])) < *(float *)(this + 0xc))))) {
    return 1;
  }
  return 0;
}

