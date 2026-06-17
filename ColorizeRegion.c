
/* public: void __thiscall CModelObject::ColorizeRegion(class CDrawPort *,class CProjection3D
   *,class AABBox<long,2>,long,int) */

void __thiscall
CModelObject::ColorizeRegion
          (CModelObject *this,int param_1,CProjection3D *param_2,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,byte param_8,int param_9)

{
  int iVar1;
  int iVar2;
  CModelData *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  CModelData *pCVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int local_48;
  int local_44;
  CModelData *local_34 [2];
  int local_2c [4];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0xb7fa0  1345
                       ?ColorizeRegion@CModelObject@@QAEXPAVCDrawPort@@PAVCProjection3D@@V?$AABBox@J$01@@JH@Z
                        */
  pCVar3 = GetData(this);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0xc);
  local_34[0] = pCVar3;
  ProjectFrameVertices(this,param_2,*(long *)(this + 0x94));
  pCVar8 = pCVar3 + *(int *)(this + 0x94) * 0x60;
  local_44 = 0;
  if (0 < *(int *)(pCVar3 + *(int *)(this + 0x94) * 0x60 + 0xd8)) {
    param_1 = 0;
    do {
      iVar7 = *(int *)(pCVar8 + 0xec);
      local_48 = 0;
      iVar4 = FUN_3600c1d0((undefined4 *)(iVar7 + param_1));
      if (0 < iVar4) {
        do {
          uVar9 = FUN_361bfd6c();
          uVar10 = FUN_361bfd6c();
          local_1c = (iVar1 - iVar2) - (int)(short)uVar10;
          local_c = param_5;
          local_10 = param_4;
          local_8 = param_6;
          local_4 = param_7;
          local_2c[3] = (int)(short)uVar9;
          local_18 = (int)(short)uVar9;
          local_14 = local_1c;
          puVar5 = (undefined4 *)FUN_360bb960(&local_10,local_2c + 3);
          local_34[1] = (CModelData *)*puVar5;
          local_2c[0] = puVar5[1];
          local_2c[1] = puVar5[2];
          local_2c[2] = puVar5[3];
          iVar6 = 1;
          while ((int)local_34[iVar6] <= local_2c[iVar6]) {
            iVar6 = iVar6 + 1;
            if (2 < iVar6) {
              iVar7 = ((undefined4 *)(iVar7 + param_1))[4] * 0x70 + *(int *)(pCVar8 + 0xfc);
              if (param_9 == 0) {
                *(int *)(iVar7 + 0x44) = 1 << (param_8 & 0x1f);
              }
              else {
                *(int *)(iVar7 + 0x40) = 1 << (param_8 & 0x1f);
              }
              goto LAB_360b811d;
            }
          }
          local_48 = local_48 + 1;
        } while (local_48 < iVar4);
      }
LAB_360b811d:
      pCVar8 = local_34[0] + *(int *)(this + 0x94) * 0x60;
      local_44 = local_44 + 1;
      param_1 = param_1 + 0x1c;
    } while (local_44 < *(int *)(pCVar8 + 0xd8));
  }
  return;
}

