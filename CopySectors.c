
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CWorld::CopySectors(class CSelection<class CBrushSector,1> &,class
   CEntity *,int) */

void __thiscall
CWorld::CopySectors(CWorld *this,CSelection<class_CBrushSector,1> *param_1,CEntity *param_2,
                   int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CBrushMip *pCVar5;
  double *pdVar6;
  CRelationDst *pCVar7;
  CBrushMip *pCVar8;
  int iVar9;
  int *piVar10;
  float local_18c;
  float local_188;
  float local_184;
  int local_180 [4];
  int local_170;
  CSelection<class_CBrushSector,1> *local_16c;
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  CObject3D local_150 [20];
  float local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  double local_124;
  double local_11c;
  double local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xd6370  1398
                       ?CopySectors@CWorld@@QAEXAAV?$CSelection@VCBrushSector@@$00@@PAVCEntity@@H@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214e6e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = CanCopySectors(this,param_1);
  if (iVar4 != 0) {
    FUN_360d3920();
    iVar4 = FUN_360cb0d0(param_1,0);
    pCVar8 = *(CBrushMip **)(iVar4 + 0x38);
    local_170 = *(int *)(*(int *)(pCVar8 + 0x14) + 0x668);
    pCVar5 = CBrush3D::GetFirstMip(*(CBrush3D **)(param_2 + 0x7c));
    if (pCVar5 != (CBrushMip *)0x0) {
      CObject3D::CObject3D(local_150);
      local_4 = 0;
      CBrushMip::ToObject3D(pCVar8,local_150,param_1);
      local_124 = _DAT_36227d78;
      local_10c = _DAT_36227d80;
      local_11c = _DAT_36227d78;
      local_104 = _DAT_36227d80;
      local_114 = _DAT_36227d78;
      local_fc = _DAT_36227d80;
      CObject3D::GetBoundingBox(local_150,(AABBox<double,3> *)&local_124);
      pdVar6 = (double *)FUN_3605dda0(&local_124,&local_168);
      local_184 = (float)pdVar6[2];
      local_18c = (float)*pdVar6;
      local_188 = (float)local_11c;
      Snap(&local_18c,1.0);
      Snap(&local_188,1.0);
      Snap(&local_184,1.0);
      fVar3 = local_184;
      fVar2 = local_188;
      fVar1 = local_18c;
      local_13c = -local_18c;
      local_138 = -local_188;
      local_134 = -local_184;
      local_160 = 0;
      local_168 = 0;
      local_164 = 0;
      local_180[0] = 0;
      local_180[1] = 0;
      local_180[2] = 0;
      local_12c = 0;
      local_130 = 0;
      local_128 = 0;
      CSimpleProjection3D_DOUBLE::CSimpleProjection3D_DOUBLE
                ((CSimpleProjection3D_DOUBLE *)&local_f4);
      local_f4 = *(undefined4 *)(local_170 + 0x3c);
      local_f0 = *(undefined4 *)(local_170 + 0x40);
      local_ec = *(undefined4 *)(local_170 + 0x44);
      local_e8 = *(undefined4 *)(local_170 + 0x48);
      local_e4 = *(undefined4 *)(local_170 + 0x4c);
      local_e0 = *(undefined4 *)(local_170 + 0x50);
      local_d0 = local_168;
      local_dc = fVar1;
      local_d8 = fVar2;
      local_d4 = fVar3;
      local_cc = local_164;
      local_c8 = 0;
      CSimpleProjection3D_DOUBLE::Prepare((CSimpleProjection3D_DOUBLE *)&local_f4);
      CObject3D::Project(local_150,(CSimpleProjection3D_DOUBLE *)&local_f4);
      AddObjectToBrush(this,local_150,param_2);
      if (param_3 != 0) {
        FUN_360ccb50(local_180);
        iVar9 = 0;
        local_16c = param_1;
        local_170 = 0;
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar4 = FUN_360cb790((int)param_1);
        if (0 < iVar4) {
          do {
            iVar4 = FUN_360cb0d0(param_1,iVar9);
            for (piVar10 = *(int **)(iVar4 + 0x9c); *piVar10 != 0; piVar10 = (int *)*piVar10) {
              pCVar7 = CRelationLnk::GetDst((CRelationLnk *)(piVar10 + -2));
              iVar4 = FUN_360caf60(local_180,(int)(pCVar7 + -0xac));
              if (iVar4 == 0) {
                FUN_360ccb70(local_180,pCVar7 + -0xac);
              }
            }
            iVar9 = iVar9 + 1;
            local_170 = iVar9;
            iVar4 = FUN_360cb790((int)param_1);
          } while (iVar9 < iVar4);
        }
        FUN_360ccb50(&local_168);
        local_4._0_1_ = 3;
        CopyEntities(*(CWorld **)(param_2 + 0xa8),this,(CDynamicContainer<class_CEntity> *)local_180
                     ,(CSelection<class_CEntity,1> *)&local_168,(CPlacement3D *)&local_13c);
        FUN_360cce70(&local_168);
        FUN_360cce70(&local_168);
        FUN_360cd280(&local_168);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_360cd280(local_180);
      }
      if (*(int *)(*(int *)(param_2 + 0xa8) + 0x158) == 0) {
        CBrushArchive::LinkPortalsAndSectors(*(CBrushArchive **)(*(int *)(param_2 + 0xa8) + 0x34));
        *(undefined4 *)(*(int *)(param_2 + 0xa8) + 0x158) = 1;
      }
      iVar4 = 1;
      pCVar8 = GetBrushMip(this,param_2);
      CBrushMip::RemoveDummyPortals(pCVar8,iVar4);
      if (*(int *)(*(int *)(param_2 + 0xa8) + 0x158) == 0) {
        CBrushArchive::LinkPortalsAndSectors(*(CBrushArchive **)(*(int *)(param_2 + 0xa8) + 0x34));
        *(undefined4 *)(*(int *)(param_2 + 0xa8) + 0x158) = 1;
      }
      local_4 = 0xffffffff;
      CObject3D::~CObject3D(local_150);
    }
  }
  ExceptionList = local_c;
  return;
}

