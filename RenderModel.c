
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CModelObject::RenderModel(class CRenderModel &) */

void __thiscall CModelObject::RenderModel(CModelObject *this,CRenderModel *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  byte bVar6;
  CRenderModel *this_00;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
                    /* 0xbdaa0  3147  ?RenderModel@CModelObject@@QAEXAAVCRenderModel@@@Z */
  this_00 = param_1;
  if (((*(float *)(this + 0x84) != _DAT_3622376c) || (*(float *)(this + 0x88) != _DAT_3622376c)) ||
     (*(float *)(this + 0x8c) != _DAT_3622376c)) {
    if (DAT_362ca520 == 2) {
      RenderModel_Mask(this,param_1);
      return;
    }
    if (((*(uint *)(param_1 + 0xc4) & 8) == 0) &&
       (((*(uint *)(param_1 + 8) & 4) == 0 || ((*(uint *)(param_1 + 8) & 3) != 0)))) {
      if ((*(uint *)(param_1 + 0xc4) & 6) != 0) {
        FUN_360bd750();
      }
      CRenderModel::SetModelView(this_00);
      uVar10 = *(uint *)(this_00 + 0xc4);
      if (((((byte)DAT_362a40ec & 1) == 0) ||
          (iVar7 = CGfxLibrary::HasOcclusionCulling(_pGfx), iVar7 == 0)) ||
         (*(int *)(this + 0xa8) != 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      uVar8 = DAT_362ca534 ^ (uint)this;
      bVar12 = false;
      if ((uVar10 & 0x40) == 0) {
        if (bVar5) {
          param_1 = (CRenderModel *)0x7fffffff;
          FUN_3607c3b0(uVar8,&param_1,0);
          bVar12 = param_1 == (CRenderModel *)0x0;
        }
        else {
          FUN_3607c5f0(uVar8);
        }
      }
      param_1 = (CRenderModel *)0x0;
      if ((((bVar5) && (0x10 < *(int *)(*(int *)(this_00 + 4) + 0x2c))) && ((uVar10 & 0x40) == 0))
         && ((*(uint *)(this_00 + 0xc4) & 0x200) == 0)) {
        bVar6 = 1;
        param_1 = (CRenderModel *)FUN_3607c180(uVar8);
      }
      else {
        bVar6 = 0;
      }
      if ((bVar12) && (param_1 != (CRenderModel *)0x0)) {
        (*DAT_362c46c4)(0);
        (*DAT_362c45f8)();
        FUN_360bd750();
        FUN_360bcb10((undefined4 *)(this_00 + 0xac),(undefined4 *)(this_00 + 0xb8),0xffffffff);
      }
      else {
        (*DAT_362c46c4)(0xffffffff);
        RenderModel_View(this,this_00);
      }
      if (param_1 != (CRenderModel *)0x0) {
        FUN_3607c2f0();
      }
      *(float *)(DAT_362bef74 + 0x1c4) = *(float *)(DAT_362bef74 + 0x1c4) + _DAT_36223384;
      if (DAT_362c5400 != 0) {
        if (bVar12) {
          uVar10 = 0xff3f3fff;
        }
        else {
          uVar10 = (-(uint)bVar6 & 0x817f0100) + 0x7f7fffff;
        }
        (*DAT_362c4624)();
        (*DAT_362c4678)(0x5c);
        (*DAT_362c46c4)(0xffffffff);
        FUN_360bd750();
        FUN_360bcb10((undefined4 *)(this_00 + 0xac),(undefined4 *)(this_00 + 0xb8),uVar10);
        (*DAT_362c4678)(0x5b);
      }
    }
    iVar7 = CModelRenderPrefs::BBoxFrameVisible(&_mrpModelRenderPrefs);
    if (iVar7 != 0) {
      puVar1 = (undefined4 *)(*(int *)(*(int *)this_00 + 0x38) + *(int *)(this_00 + 0xc) * 0x18);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uStack_18 = puVar1[3];
      uStack_14 = puVar1[4];
      iStack_10 = puVar1[5];
      CRenderModel::SetModelView(this_00);
      FUN_360bd4b0(uVar2,uVar3,uVar4,uStack_18,uStack_14,iStack_10,0x7f007fff);
    }
    iVar7 = CModelRenderPrefs::BBoxAllVisible(&_mrpModelRenderPrefs);
    if (iVar7 != 0) {
      iVar7 = *(int *)(*(int *)this_00 + 0x20);
      uStack_18 = 0x7f61b1e6;
      uStack_c = 0xff61b1e6;
      uStack_14 = 0x7f61b1e6;
      uStack_8 = 0xff61b1e6;
      iStack_10 = 0x7f61b1e6;
      iStack_4 = -0x9e4e1a;
      if (0 < iVar7) {
        pfVar9 = *(float **)(*(int *)this_00 + 0x38);
        do {
          FUN_360b1850(&uStack_18,pfVar9);
          pfVar9 = pfVar9 + 6;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      CRenderModel::SetModelView(this_00);
      FUN_360bd4b0(uStack_18,uStack_14,iStack_10,uStack_c,uStack_8,iStack_4,0x3f3f3fff);
    }
    for (piVar11 = *(int **)(this + 0x9c); *piVar11 != 0; piVar11 = (int *)*piVar11) {
      if ((CRenderModel *)piVar11[0x34] != (CRenderModel *)0x0) {
        piVar11[0x33] = *(int *)(this + 0xa8);
        RenderModel((CModelObject *)(piVar11 + 9),(CRenderModel *)piVar11[0x34]);
      }
    }
    *(undefined4 *)(this + 0xa8) = 0;
  }
  return;
}

