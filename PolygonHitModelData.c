
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: struct ModelPolygon * __thiscall CModelObject::PolygonHitModelData(class CModelData
   *,class CPlacement3D,class CPlacement3D,long,float &) */

ModelPolygon * __thiscall
CModelObject::PolygonHitModelData
          (CModelObject *this,int param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
          undefined4 param_14,int param_15,float *param_16)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int *piVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ModelPolygon *pMVar12;
  float local_1dc;
  int local_1d8;
  int local_1d4;
  ModelPolygon *local_1d0;
  undefined4 local_1c4;
  undefined4 local_1c0;
  uint local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined **local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  
                    /* 0xb8300  2777
                       ?PolygonHitModelData@CModelObject@@QAEPAUModelPolygon@@PAVCModelData@@VCPlacement3D@@1JAAM@Z
                        */
  local_1dc = -100000.0;
  local_1d0 = (ModelPolygon *)0x0;
  local_1c4 = 0;
  local_1c0 = 0;
  local_1bc = 0;
  CProjection3D::CProjection3D((CProjection3D *)&local_184);
  local_15c = param_3;
  local_158 = param_4;
  local_150 = param_6;
  local_154 = param_5;
  local_14c = param_7;
  local_180 = param_9;
  local_148 = param_8;
  local_17c = param_10;
  local_174 = param_12;
  local_178 = param_11;
  local_170 = param_13;
  local_184 = &CSimpleProjection3D::_vftable_;
  local_16c = param_14;
  ProjectFrameVertices(this,(CProjection3D *)&local_184,param_15);
  iVar2 = param_15 * 0x60 + param_1;
  local_1d4 = 0;
  if (0 < *(int *)(param_15 * 0x60 + 0xd8 + param_1)) {
    local_1d8 = 0;
    do {
      pMVar12 = (ModelPolygon *)(*(int *)(iVar2 + 0xec) + local_1d8);
      local_1bc = 0;
      iVar8 = FUN_3600c1d0((undefined4 *)pMVar12);
      uVar10 = 0;
      if (0 < iVar8) {
        iVar3 = *(int *)(pMVar12 + 4);
        iVar11 = 0;
        do {
          iVar1 = iVar11 + 1;
          iVar9 = FUN_3600c1d0((undefined4 *)pMVar12);
          pfVar4 = *(float **)(iVar3 + iVar11 * 8);
          pfVar5 = *(float **)(iVar3 + (iVar1 % iVar9) * 8);
          CIntersector::AddEdge((CIntersector *)&local_1c4,*pfVar4,pfVar4[1],*pfVar5,pfVar5[1]);
          uVar10 = local_1bc;
          iVar11 = iVar1;
        } while (iVar1 < iVar8);
      }
      uVar10 = uVar10 & 0x80000001;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
      }
      if (uVar10 != 0) {
        piVar6 = *(int **)(pMVar12 + 4);
        pfVar4 = (float *)*piVar6;
        local_1ac = *pfVar4;
        local_1a8 = pfVar4[1];
        local_1a4 = pfVar4[2];
        pfVar4 = (float *)piVar6[2];
        pfVar5 = (float *)piVar6[4];
        local_1b8 = *pfVar4;
        local_1b4 = pfVar4[1];
        local_1b0 = pfVar4[2];
        local_1a0 = *pfVar5;
        local_19c = pfVar5[1];
        local_198 = pfVar5[2];
        FUN_360bbab0(&local_194,&local_1ac,&local_1b8,&local_1a0);
        fVar7 = ((local_188 - local_194 * _DAT_3622376c) - local_190 * _DAT_3622376c) / local_18c;
        if ((fVar7 < _DAT_3622376c != (fVar7 == _DAT_3622376c)) && (local_1dc < fVar7)) {
          local_1dc = fVar7;
          local_1d0 = pMVar12;
        }
      }
      local_1d4 = local_1d4 + 1;
      local_1d8 = local_1d8 + 0x1c;
    } while (local_1d4 < *(int *)(iVar2 + 0xd8));
  }
  *param_16 = -local_1dc;
  return local_1d0;
}

