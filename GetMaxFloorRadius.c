
/* public: float __thiscall CCollisionInfo::GetMaxFloorRadius(void) */

float __thiscall CCollisionInfo::GetMaxFloorRadius(CCollisionInfo *this)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
                    /* 0x126840  1969  ?GetMaxFloorRadius@CCollisionInfo@@QAEMXZ */
  pfVar2 = *(float **)(this + 4);
  iVar5 = FUN_360cd8a0((undefined4 *)this);
  pfVar1 = pfVar2 + iVar5 * 0x10 + -0x10;
  fVar3 = SQRT(*pfVar1 * *pfVar1 + pfVar1[2] * pfVar1[2]) + pfVar1[3];
  fVar4 = SQRT(*pfVar2 * *pfVar2 + pfVar2[2] * pfVar2[2]) + pfVar2[3];
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  return fVar3;
}

