
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl RM_RenderSKA(class CModelInstance &) */

void __cdecl RM_RenderSKA(CModelInstance *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  ColisionBox *pCVar8;
  int iVar9;
  uint uVar10;
  uint local_d0;
  int local_cc;
  int local_c8;
  undefined4 *local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x16c0a0  2926  ?RM_RenderSKA@@YAXAAVCModelInstance@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a5bd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _DAT_362fe0e0 = CModelInstance::GetModelColor(param_1);
  if (DAT_362fe1b0 == 2) {
    local_c0 = DAT_362fe1ac;
    local_c4 = &DAT_362fe1ac;
    DAT_362fe1ac = 0;
    local_4 = 0;
    iVar3 = FUN_3615fda0((int)(param_1 + 0xc));
    if (iVar3 == 0) {
      CalculateRenderingData(param_1);
    }
    iVar9 = 1;
    iVar3 = FUN_36162460(0x362fe990);
    if (1 < iVar3) {
      iVar3 = 0x8c;
      do {
        piVar1 = (int *)(iVar3 + DAT_362fe994);
        RM_SetObjectMatrices(param_1);
        FUN_3616af30((undefined4 *)param_1,piVar1);
        iVar9 = iVar9 + 1;
        iVar3 = iVar3 + 0x8c;
        iVar4 = FUN_36162460(0x362fe990);
      } while (iVar9 < iVar4);
    }
    FUN_36163450();
    DAT_362fe1ac = local_c0;
    ExceptionList = local_c;
    return;
  }
  puVar5 = RM_GetRenderFlags();
  uVar10 = *puVar5;
  if (((byte)DAT_362a40ec & 1) != 0) {
    if (*(int *)(_pGfx + 0xa38) == 0) {
      uVar6 = *(uint *)(_pGfx + 0xa54) & 0x800000;
    }
    else {
      if (*(int *)(_pGfx + 0xa38) != 1) goto LAB_3616c1c7;
      uVar6 = *(uint *)(_pGfx + 0xa54) & 0x8000;
    }
    if ((uVar6 != 0) && (*(int *)(param_1 + 0xfc) == 0)) {
      bVar2 = true;
      goto LAB_3616c1c9;
    }
  }
LAB_3616c1c7:
  bVar2 = false;
LAB_3616c1c9:
  uVar6 = DAT_362fe0d4 ^ (uint)param_1;
  local_d0 = 0;
  if ((uVar10 & 0x40) == 0) {
    if (bVar2) {
      local_d0 = 0x7fffffff;
      FUN_3607c3b0(uVar6,&local_d0,0);
      local_d0 = (uint)(local_d0 == 0);
    }
    else {
      FUN_3607c5f0(uVar6);
    }
  }
  iVar3 = 0;
  local_cc = 0;
  if ((bVar2) && ((uVar10 & 0x40) == 0)) {
    iVar3 = 1;
    local_c8 = 1;
    local_cc = FUN_3607c180(uVar6);
  }
  else {
    local_c8 = 0;
  }
  if ((local_d0 == 0) || (local_cc == 0)) {
    (*DAT_362c46c4)(0xffffffff);
    CalculateRenderingData(param_1);
    if ((DAT_362a413c != 0) && ((DAT_362fe1f0 != (code *)0x0 && (_bWorldEditorApp == 0)))) {
      (*DAT_362fe1f0)(DAT_362fe1f4);
      FUN_36166280();
    }
    iVar9 = FUN_36162460(0x362fe990);
    local_c4 = (undefined4 *)(iVar9 + -1);
    *(float *)(DAT_362bef74 + 0x200) = (float)(int)local_c4 + *(float *)(DAT_362bef74 + 0x200);
    if (1 < iVar9) {
      iVar4 = 0x8c;
      iVar9 = iVar9 + -1;
      do {
        piVar1 = (int *)(iVar4 + DAT_362fe994);
        RM_SetObjectMatrices(param_1);
        FUN_3616ae40((undefined4 *)param_1,piVar1);
        iVar4 = iVar4 + 0x8c;
        iVar9 = iVar9 + -1;
        iVar3 = local_c8;
      } while (iVar9 != 0);
    }
  }
  else {
    (*DAT_362c46c4)(0);
    (*DAT_362c45f8)();
    uStack_a4 = 0x7f61b1e6;
    uStack_98 = 0xff61b1e6;
    uStack_a0 = 0x7f61b1e6;
    uStack_94 = 0xff61b1e6;
    uStack_9c = 0x7f61b1e6;
    uStack_90 = 0xff61b1e6;
    CModelInstance::GetAllFramesBBox(param_1,(AABBox<float,3> *)&uStack_a4);
    RM_SetObjectMatrices(param_1);
    uStack_8c = DAT_362fe148;
    uStack_7c = DAT_362fe14c;
    uStack_88 = DAT_362fe158;
    uStack_84 = DAT_362fe168;
    uStack_6c = DAT_362fe150;
    uStack_78 = DAT_362fe15c;
    uStack_74 = DAT_362fe16c;
    uStack_5c = DAT_362fe154;
    uStack_68 = DAT_362fe160;
    uStack_64 = DAT_362fe170;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_60 = 0;
    uStack_58 = DAT_362fe164;
    uStack_54 = DAT_362fe174;
    uStack_50 = 0x3f800000;
    (*DAT_362c4674)(&uStack_8c);
    FUN_360bcb10(&uStack_a4,&uStack_98,0xffffffff);
  }
  if (local_cc != 0) {
    FUN_3607c2f0();
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(float *)(DAT_362bef74 + 0x1ec) = *(float *)(DAT_362bef74 + 0x1ec) + _DAT_36223384;
  if (DAT_362c5400 != 0) {
    if (local_d0 == 0) {
      uVar10 = (-(uint)(iVar3 != 0) & 0x817f0100) + 0x7f7fffff;
    }
    else {
      uVar10 = 0xff3f3fff;
    }
    (*DAT_362c4624)();
    (*DAT_362c4678)(0x5c);
    (*DAT_362c46c4)(0xffffffff);
    uStack_bc = 0x7f61b1e6;
    uStack_b0 = 0xff61b1e6;
    uStack_b8 = 0x7f61b1e6;
    uStack_ac = 0xff61b1e6;
    uStack_b4 = 0x7f61b1e6;
    uStack_a8 = 0xff61b1e6;
    CModelInstance::GetAllFramesBBox(param_1,(AABBox<float,3> *)&uStack_bc);
    RM_SetObjectMatrices(param_1);
    uStack_4c = DAT_362fe148;
    uStack_3c = DAT_362fe14c;
    uStack_48 = DAT_362fe158;
    uStack_44 = DAT_362fe168;
    uStack_2c = DAT_362fe150;
    uStack_38 = DAT_362fe15c;
    uStack_34 = DAT_362fe16c;
    uStack_1c = DAT_362fe154;
    uStack_28 = DAT_362fe160;
    uStack_24 = DAT_362fe170;
    uStack_40 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    uStack_18 = DAT_362fe164;
    uStack_14 = DAT_362fe174;
    uStack_10 = 0x3f800000;
    (*DAT_362c4674)(&uStack_4c);
    FUN_360bcb10(&uStack_bc,&uStack_b0,uVar10);
    (*DAT_362c4678)(0x5b);
  }
  if ((DAT_362c5414 != 0) || (uVar7 = RM_GetFlags(), (uVar7 & 8) != 0)) {
    (*DAT_362c4634)();
    (*DAT_362c4624)();
    FUN_36164f80((int)param_1);
    (*DAT_362c45f8)();
  }
  if ((DAT_362c5420 != 0) || (uVar7 = RM_GetFlags(), (uVar7 & 0x10) != 0)) {
    (*DAT_362c4634)();
    (*DAT_362c4624)();
    FUN_36165250();
    (*DAT_362c45f8)();
  }
  if (DAT_362c5418 != 0) {
    RM_SetObjectMatrices(param_1);
    iVar3 = FUN_36035f90((undefined4 *)(param_1 + 0x1c));
    if (0 < iVar3) {
      pCVar8 = CModelInstance::GetCurrentColisionBox(param_1);
      RM_RenderColisionBox(param_1,pCVar8,0x3fff3f00);
    }
  }
  if (DAT_362c541c != 0) {
    RM_SetObjectMatrices(param_1);
    RM_RenderColisionBox(param_1,(ColisionBox *)(param_1 + 0x9c),0xff7f3f00);
  }
  FUN_36163450();
  ExceptionList = local_c;
  return;
}

