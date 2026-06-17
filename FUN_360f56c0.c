
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360f56c0(char *param_1)

{
  float fVar1;
  CShellSymbol *pCVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  CBrushSector *this;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  float fVar9;
  int iVar10;
  void *this_00;
  CBrushPolygon *this_01;
  ulonglong uVar11;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  float local_34;
  float local_30;
  char *local_2c;
  float local_28;
  float local_24;
  int *piStack_20;
  float local_1c;
  void *local_18;
  int local_14;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362167e6;
  pvStack_c = ExceptionList;
  local_60 = 0;
  local_2c = (char *)0x0;
  ExceptionList = &pvStack_c;
  if (_pGfx != (CGfxLibrary *)0x0) {
    ExceptionList = &pvStack_c;
    for (piVar8 = *(int **)(_pGfx + 0xb0c); *piVar8 != 0; piVar8 = (int *)*piVar8) {
      local_14 = CShadowMap::GetUsedMemory
                           ((CShadowMap *)(piVar8 + -2),(long *)&local_34,(long *)&local_24,
                            (long *)&local_28,&local_1c);
      if (local_14 == 0) {
        local_30 = (float)((int)local_24 + (int)local_28 + (int)local_34);
      }
      else {
        local_30 = (float)((int)local_24 + (int)local_28 + 4);
      }
      local_60 = (int)local_30 + 0x88 + local_60;
      uVar11 = FUN_361bfd6c();
      local_2c = (char *)uVar11;
    }
    if (0 < local_60) {
      FUN_36037460(param_1,s_Cached_shadowmaps__36233614);
      FUN_36037460(param_1,s_Total___d_in__d_KB_with__d_____d_3623362c);
      FUN_36037460(param_1,s_Static___d_KB_36233668);
      FUN_36037460(param_1,s_Upload___d_KB_3623367c);
      FUN_36037460(param_1,s_Dynamic___d_in__d_KB_36233690);
      FUN_36037460(param_1,s_Flats___d___d____with__d_KB_save_362336a8);
      FUN_36037460(param_1,s_of_size__362336d0);
      FUN_36037460(param_1,s_>128K___4d_in__d_KB_362336dc);
      FUN_36037460(param_1,s_128_64K___4d_in__d_KB_362336f8);
      FUN_36037460(param_1,s_64_32K___4d_in__d_KB_36233714);
      FUN_36037460(param_1,s_32_16K___4d_in__d_KB_36233730);
      FUN_36037460(param_1,s_<_16K:__4d_in__d_KB_3623374c);
    }
  }
  iVar4 = 0;
  fVar9 = 0.0;
  local_34 = 0.0;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_70 = 0;
  local_2c = StringDuplicate(s_pwoCurrentWorld_36233768);
  local_4 = 0;
  pCVar2 = CShell::GetSymbol(_pShell,(CTString *)&local_2c,1);
  local_4 = 0xffffffff;
  StringFree(local_2c);
  if (pCVar2 != (CShellSymbol *)0x0) {
    local_2c = StringDuplicate(s_pwoCurrentWorld_36233778);
    local_4 = 1;
    lVar3 = CShell::GetINDEX(_pShell,(CTString *)&local_2c);
    local_4 = 0xffffffff;
    local_30 = (float)lVar3;
    StringFree(local_2c);
    if (lVar3 != 0) {
      piVar8 = (int *)(lVar3 + 0x15c);
      iVar10 = 0;
      local_14 = 0;
      local_4 = 2;
      local_10 = piVar8;
      iVar4 = FUN_360caf20((int)piVar8);
      fVar1 = local_34;
      if (0 < iVar4) {
        do {
          fVar9 = (float)((int)fVar9 + 1);
          piVar5 = (int *)FUN_360cafb0(piVar8,iVar10);
          iVar4 = (**(code **)(*piVar5 + 0x4c))();
          local_64 = local_64 + iVar4;
          iVar10 = iVar10 + 1;
          local_14 = iVar10;
          iVar4 = FUN_360caf20((int)piVar8);
          fVar1 = fVar9;
        } while (iVar10 < iVar4);
      }
      local_34 = fVar1;
      this_00 = (void *)(*(int *)((int)local_30 + 0x34) + 0x14);
      fVar9 = 0.0;
      local_1c = 0.0;
      local_4 = 3;
      local_18 = this_00;
      iVar4 = FUN_360cb6c0((int)this_00);
      if (0 < iVar4) {
        do {
          iVar4 = FUN_360cb850(this_00,(int)fVar9);
          if (*(int *)(iVar4 + 0x668) != 0) {
            iVar4 = FUN_360cb850(this_00,(int)fVar9);
            piVar8 = *(int **)(iVar4 + 0x674);
            while (*piVar8 != 0) {
              piVar5 = piVar8 + -6;
              fVar9 = 0.0;
              local_24 = 0.0;
              local_4 = CONCAT31(local_4._1_3_,4);
              piStack_20 = piVar5;
              iVar4 = FUN_36043600((int)piVar5);
              if (0 < iVar4) {
                do {
                  this = (CBrushSector *)FUN_36043710(piVar5,(int)fVar9);
                  lVar3 = CBrushSector::GetUsedMemory(this);
                  local_70 = local_70 + lVar3;
                  puVar6 = (undefined4 *)FUN_36043710(piVar5,(int)fVar9);
                  FUN_360fac30(puVar6);
                  piVar7 = (int *)FUN_36043710(piVar5,(int)fVar9);
                  if (0 < *piVar7) {
                    local_7c = local_7c + *piVar7 * 0x48;
                  }
                  iVar4 = FUN_36043710(piVar5,(int)fVar9);
                  if (0 < *(int *)(iVar4 + 0x20)) {
                    local_7c = local_7c + *(int *)(iVar4 + 0x20) * 0x20;
                  }
                  iVar4 = FUN_36043710(piVar5,(int)fVar9);
                  FUN_360d6990((undefined4 *)(iVar4 + 0x10));
                  iVar4 = FUN_36043710(piVar5,(int)fVar9);
                  if (0 < *(int *)(iVar4 + 0x10)) {
                    local_74 = local_74 + *(int *)(iVar4 + 0x10) * 0x50;
                  }
                  iVar4 = FUN_36043710(piVar5,(int)fVar9);
                  if (0 < *(int *)(iVar4 + 0x28)) {
                    local_74 = local_74 + *(int *)(iVar4 + 0x28) * 0x78;
                  }
                  iVar4 = FUN_36043710(piVar5,(int)fVar9);
                  FUN_360d6960((undefined4 *)(iVar4 + 8));
                  iVar4 = FUN_36043710(piVar5,(int)fVar9);
                  if (0 < *(int *)(iVar4 + 8)) {
                    local_78 = local_78 + *(int *)(iVar4 + 8) * 0xc;
                  }
                  iVar4 = FUN_36043710(piVar5,(int)fVar9);
                  if (0 < *(int *)(iVar4 + 0x30)) {
                    local_78 = local_78 + *(int *)(iVar4 + 0x30) * 8;
                  }
                  iVar4 = FUN_36043710(piVar5,(int)fVar9);
                  FUN_360d69b0((undefined4 *)(iVar4 + 0x18));
                  iVar4 = FUN_36043710(piVar5,(int)fVar9);
                  piVar7 = (int *)(iVar4 + 0x18);
                  local_14 = 0;
                  local_4._0_1_ = 5;
                  local_10 = piVar7;
                  if (0 < *piVar7) {
                    do {
                      this_01 = (CBrushPolygon *)(local_14 * 0x1d0 + *(int *)(iVar4 + 0x1c));
                      lVar3 = CBrushPolygon::GetUsedMemory(this_01);
                      local_6c = local_6c + lVar3;
                      iVar10 = CListHead::IsEmpty((CListHead *)(this_01 + 0x160));
                      if (iVar10 == 0) {
                        CListHead::Count((CListHead *)(this_01 + 0x160));
                        lVar3 = CBrushShadowMap::GetUsedMemory((CBrushShadowMap *)(this_01 + 0xd0));
                        local_68 = local_68 + lVar3;
                      }
                      local_14 = local_14 + 1;
                    } while (local_14 < *piVar7);
                  }
                  fVar9 = (float)((int)fVar9 + 1);
                  local_4 = CONCAT31(local_4._1_3_,4);
                  local_14 = -1;
                  local_24 = fVar9;
                  iVar4 = FUN_36043600((int)piVar5);
                } while ((int)fVar9 < iVar4);
              }
              piVar8 = (int *)*piVar8;
              local_24 = -NAN;
              fVar9 = local_1c;
              this_00 = local_18;
            }
          }
          fVar9 = (float)((int)fVar9 + 1);
          local_1c = fVar9;
          iVar4 = FUN_360cb6c0((int)this_00);
        } while ((int)fVar9 < iVar4);
      }
      local_4 = 0xffffffff;
      iVar4 = FUN_360d2680(*(undefined4 **)((int)local_30 + 0x94));
    }
  }
  local_14 = FUN_360f0300(_pTextureStock);
  local_24 = (float)local_14 * (float)_DAT_36225648;
  local_14 = FUN_360e7780(_pEntityClassStock);
  local_1c = (float)local_14 * (float)_DAT_36225648;
  local_14 = FUN_360eabc0(_pModelStock);
  local_28 = (float)local_14 * (float)_DAT_36225648;
  local_14 = FUN_360ef1f0(_pSoundStock);
  local_14 = FUN_360e9b00(_pMeshStock);
  local_14 = FUN_360e6730(_pAnimSetStock);
  local_14 = FUN_360ece90(_pShaderStock);
  local_34 = (float)local_14 * (float)_DAT_36225648;
  local_14 = FUN_360ee030(_pSkeletonStock);
  local_30 = (float)local_14 * (float)_DAT_36225648;
  local_14 = FUN_360ebcd0(_pModelInstanceStock);
  local_2c = (char *)((float)local_14 * (float)_DAT_36225648);
  FUN_36037460(param_1,s_Stock_information__36233788);
  thunk_FUN_3608a5a0((int)_pTextureStock);
  FUN_36037460(param_1,s_Textures___5d___5_2f_MB__362337a0);
  FUN_36037460(param_1,s_ShadowMaps___5d___5_2f_MB__362337c0);
  FUN_36037460(param_1,s_Entities___5d___5_2f_MB__362337e0);
  thunk_FUN_360a1440((int)_pSoundStock);
  FUN_36037460(param_1,s_Sounds___5d___5_2f_MB__36233800);
  FUN_36037460(param_1,&DAT_36233820);
  FUN_36037460(param_1,s_Sectors___5d___5_2f_MB__36233824);
  FUN_36037460(param_1,s_Planes___5d___5_2f_MB__36233844);
  FUN_36037460(param_1,s_Edges___5d___5_2f_MB__36233864);
  FUN_36037460(param_1,s_Polygons___5d___5_2f_MB__36233884);
  FUN_36037460(param_1,s_Vertices___5d___5_2f_MB__362338a4);
  FUN_36037460(param_1,s_ShadowLayers___5d___5_2f_MB__362338c4);
  FUN_36037460(param_1,&DAT_362338e4);
  thunk_FUN_360e7fd0((int)_pEntityClassStock);
  FUN_36037460(param_1,s_Classes___5d___5_2f_MB__362338e8);
  thunk_FUN_3608a5c0((int)_pModelStock);
  FUN_36037460(param_1,s_Models___5d___5_2f_MB__36233908);
  thunk_FUN_3608a5b0((int)_pMeshStock);
  FUN_36037460(param_1,s_Meshes___5d___5_2f_MB__36233928);
  thunk_FUN_360ee800((int)_pSkeletonStock);
  FUN_36037460(param_1,s_Skeletons___5d___5_2f_MB__36233948);
  thunk_FUN_36035fa0((int)_pAnimSetStock);
  FUN_36037460(param_1,s_AnimSets___5d___5_2f_MB__36233968);
  thunk_FUN_3608a4c0((int)_pShaderStock);
  FUN_36037460(param_1,s_Shaders___5d___5_2f_MB__36233988);
  thunk_FUN_360ec520((int)_pModelInstanceStock);
  FUN_36037460(param_1,s_Smcs___5d___5_2f_MB____d__362339a8);
  FUN_36037460(param_1,&DAT_362339cc);
  FUN_36037460(param_1,s_CollisionGrid____2f_MB_362339d0);
  FUN_36037460(param_1,s________________362339e8);
  local_14 = iVar4 + local_70 + local_7c + local_78 + local_74 + local_6c + local_68 + local_64 +
             local_60;
  FUN_36037460(param_1,s_Total____2f_MB_362339f8);
  FUN_36037460(param_1,&DAT_36233a10);
  ExceptionList = pvStack_c;
  return;
}

