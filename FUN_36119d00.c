
/* WARNING: Removing unreachable block (ram,0x36119f1e) */
/* WARNING: Removing unreachable block (ram,0x3611a058) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_36119d00(void *this,CEntity *param_1,CPlacement3D *param_2,uint param_3,float param_4,
            uint param_5)

{
  float fVar1;
  float fVar2;
  CEntity *pCVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  CModelInstance *pCVar7;
  CPlacement3D *pCVar8;
  int iVar9;
  ulonglong uVar10;
  ulong local_3c;
  float local_38;
  void *local_34;
  CModelInstance *local_30;
  uchar auStack_2c [4];
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pCVar3 = param_1;
  pCVar7 = *(CModelInstance **)(param_1 + 0x7c);
  if (((*(float *)(pCVar7 + 0x90) != _DAT_3622376c) || (*(float *)(pCVar7 + 0x94) != _DAT_3622376c))
     || (*(float *)(pCVar7 + 0x98) != _DAT_3622376c)) {
    iVar9 = 0;
    if ((*(int *)((int)this + 0xd40) == 0) || ((*(uint *)(param_1 + 0x10) & 0x100) != 0)) {
      local_1c = 0;
      local_10 = 0;
      local_18 = 0x3f800000;
      local_14 = 0;
      local_c = 0x3f800000;
      local_3c = 0x7f7f7f00;
      param_1 = (CEntity *)0x3f3f3f00;
      local_28 = 1.0;
      local_24 = 0xbf800000;
      local_20 = 0x3f800000;
      local_8 = 0;
      local_4 = 0;
      local_38 = 0.0;
      local_34 = this;
      local_30 = pCVar7;
      if (*(int *)((int)this + 0xd40) == 0) {
        if (DAT_362a4108 < 0) {
          DAT_362a4108 = 0;
        }
        else if (3 < DAT_362a4108) {
          DAT_362a4108 = 3;
        }
        if ((~*(uint *)(pCVar3 + 0x10) & 0x800) != 0) {
          iVar9 = FUN_36118a30(pCVar3,(float *)param_2,&local_3c,(ulong *)&param_1,&local_38,
                               &local_28,&local_10);
        }
        iVar5 = (**(code **)(*(int *)pCVar3 + 0xe0))(&local_28,&local_3c,&param_1);
        if (((iVar9 == 0) || (iVar5 == 0)) || ((param_3 == 0 || (DAT_362a4108 < 1)))) {
          iVar9 = 0;
        }
        else {
          iVar9 = 1;
        }
      }
      pCVar8 = (CPlacement3D *)(*(uint *)(pCVar7 + 0xf0) & 0xff);
      if ((CPlacement3D *)0x3 < pCVar8) {
        puVar6 = RM_GetRenderFlags();
        uVar4 = param_5;
        *puVar6 = 0;
        if ((param_5 & 4) != 0) {
          *puVar6 = 2;
        }
        if ((param_5 & 8) != 0) {
          *puVar6 = *puVar6 | 4;
        }
        if ((param_5 & 0x10) != 0) {
          *puVar6 = *puVar6 | 0x40;
        }
        if ((param_5 & 0x20) != 0) {
          *puVar6 = *puVar6 | 0x80;
        }
        if ((param_5 & 0x40) != 0) {
          *puVar6 = *puVar6 | 0x100;
        }
        if (*(CEntity **)((int)local_34 + 0x34) == pCVar3) {
          *puVar6 = *puVar6 | 8;
          iVar9 = 0;
        }
        RM_SetObjectPlacement(local_30,param_2);
        iVar5 = IsOfClass(pCVar3,s_Player_36237a5c);
        if (iVar5 == 0) {
          ColorToHSV((ulong)param_1,(uchar *)&param_5,(uchar *)&param_3,(uchar *)&param_2);
          if ((byte)param_2 < 0xd7) {
            param_2 = (CPlacement3D *)CONCAT31(param_2._1_3_,(byte)param_2 + 0x28);
          }
          param_1 = (CEntity *)HSVToColor((uchar)param_5,(uchar)param_3,(uchar)param_2);
        }
        else {
          ColorToHSV((ulong)param_1,auStack_2c,(uchar *)&param_5,(uchar *)&param_2);
          param_3 = (uint)param_2 & 0xff;
          FUN_36114200(40.0,80.0,123.0,(float)param_3 * _DAT_362287a4);
          uVar10 = FUN_361bfd6c();
          param_2 = (CPlacement3D *)CONCAT31(param_2._1_3_,(uchar)uVar10);
          param_1 = (CEntity *)HSVToColor(auStack_2c[0],(uchar)param_5,(uchar)uVar10);
        }
        RM_SetLightColor((ulong)param_1,local_3c);
        RM_SetLightDirection((Vector<float,3> *)&local_28);
        if (*(CEntity **)((int)local_34 + 0x34) == pCVar3) {
          __vViewerLightDirection = local_28;
          _DAT_362fca84 = local_24;
          _DAT_362fca88 = local_20;
          _colViewerLight = local_3c;
          _colViewerAmbient = (ulong)param_1;
        }
        else {
          RM_SetBoneAdjustCallback(EntityAdjustBonesCallback,pCVar3);
          RM_SetBoneAdjustAbsCallback(EntityAdjustBonesAbsCallback,pCVar3);
          RM_SetShaderParamsAdjustCallback(EntityAdjustShaderParamsCallback,pCVar3);
          RM_SetCurrentDistance(param_4);
          pCVar7 = (CModelInstance *)(**(code **)(*(int *)pCVar3 + 0xec))();
          *(uint *)(pCVar7 + 0xfc) = *(uint *)(pCVar7 + 0xfc) | uVar4 & 0x80;
          RM_RenderSKA(pCVar7);
        }
        pCVar7 = local_30;
        fVar1 = (float)(int)pCVar8 * local_38 * _DAT_362287a4;
        fVar2 = _DAT_3622376c;
        if ((_DAT_3622376c <= fVar1) &&
           (fVar2 = fVar1, fVar1 < _DAT_36223384 == (fVar1 == _DAT_36223384))) {
          fVar2 = _DAT_36223384;
        }
        local_38 = fVar2 * _DAT_36230728 + _DAT_362287b0;
        if ((((iVar9 != 0) && ((*(uint *)(pCVar3 + 0x10) & 0x100) == 0)) &&
            (param_2 = pCVar8, iVar9 = CModelInstance::HasShadow(local_30,1.0), iVar9 != 0)) &&
           (0 < DAT_362a410c)) {
          if ((DAT_362a410c != 1) &&
             (iVar9 = FUN_3611f610((undefined4 *)(pCVar7 + 0x2c)), iVar9 != 0)) {
            local_1c = 0x3e4ccccd;
            local_18 = 0xbf800000;
            local_14 = 0x3ecccccd;
            CModelInstance::AddCombinationShadow(pCVar7,pCVar3,0x3e4ccccd,0xbf800000,0x3ecccccd,0);
            return;
          }
          CModelInstance::AddSimpleShadow(pCVar7,local_38,(Plane<float,3> *)&local_10);
        }
      }
    }
  }
  return;
}

