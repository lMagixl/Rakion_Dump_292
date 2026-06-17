
/* public: void __thiscall CModelObject::ApplySurfaceToPolygonsInRegion(class CDrawPort *,class
   CProjection3D *,class AABBox<long,2>,long,unsigned long) */

void __thiscall
CModelObject::ApplySurfaceToPolygonsInRegion
          (CModelObject *this,int param_1,CProjection3D *param_2,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  CModelData *pCVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_40;
  CModelData *local_34 [2];
  int local_2c [4];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0xb8170  1060
                       ?ApplySurfaceToPolygonsInRegion@CModelObject@@QAEXPAVCDrawPort@@PAVCProjection3D@@V?$AABBox@J$01@@JK@Z
                        */
  ProjectFrameVertices(this,param_2,*(long *)(this + 0x94));
  local_34[0] = GetData(this);
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x14);
  pCVar6 = local_34[0] + *(int *)(this + 0x94) * 0x60;
  local_40 = 0;
  if (0 < *(int *)(pCVar6 + 0xd8)) {
    param_2 = (CProjection3D *)0x0;
    do {
      puVar7 = (undefined4 *)(*(int *)(pCVar6 + 0xec) + (int)param_2);
      param_1 = 0;
      iVar3 = FUN_3600c1d0(puVar7);
      if (0 < iVar3) {
        do {
          uVar8 = FUN_361bfd6c();
          uVar9 = FUN_361bfd6c();
          local_1c = (iVar2 - iVar1) - (int)(short)uVar9;
          local_c = param_5;
          local_10 = param_4;
          local_8 = param_6;
          local_4 = param_7;
          local_2c[3] = (int)(short)uVar8;
          local_18 = (int)(short)uVar8;
          local_14 = local_1c;
          puVar4 = (undefined4 *)FUN_360bb960(&local_10,local_2c + 3);
          local_34[1] = (CModelData *)*puVar4;
          local_2c[0] = puVar4[1];
          local_2c[1] = puVar4[2];
          local_2c[2] = puVar4[3];
          iVar5 = 1;
          while ((int)local_34[iVar5] <= local_2c[iVar5]) {
            iVar5 = iVar5 + 1;
            if (2 < iVar5) {
              puVar7[4] = param_8;
              puVar7[3] = param_9;
              goto LAB_360b82a6;
            }
          }
          param_1 = param_1 + 1;
        } while (param_1 < iVar3);
      }
LAB_360b82a6:
      pCVar6 = local_34[0] + *(int *)(this + 0x94) * 0x60;
      local_40 = local_40 + 1;
      param_2 = (CProjection3D *)((int)param_2 + 0x1c);
    } while (local_40 < *(int *)(pCVar6 + 0xd8));
  }
  return;
}

