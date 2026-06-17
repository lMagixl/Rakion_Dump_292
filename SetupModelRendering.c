
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CModelObject::SetupModelRendering(class CRenderModel &) */

void __thiscall CModelObject::SetupModelRendering(CModelObject *this,CRenderModel *param_1)

{
  CRenderModel *pCVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  CRenderModel *pCVar8;
  CModelData *pCVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  CAttachmentModelObject *pCVar16;
  float10 fVar17;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float afStack_48 [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float afStack_24 [4];
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0xbea00  3629  ?SetupModelRendering@CModelObject@@QAEXAAVCRenderModel@@@Z */
  pCVar8 = param_1;
  pCVar9 = GetData(this);
  *(CModelData **)param_1 = pCVar9;
  if (pCVar9 != (CModelData *)0x0) {
    pCVar1 = param_1 + 0x10;
    CAnimObject::GetFrame
              ((CAnimObject *)this,(long *)(param_1 + 0xc),(long *)pCVar1,(float *)(param_1 + 0x14))
    ;
    iVar13 = *(int *)param_1;
    iVar12 = *(int *)(iVar13 + 0x1c);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((*(byte *)(iVar13 + 0x1260) & 0x10) == 0) {
      *(int *)(param_1 + 0x20) = *(int *)(iVar13 + 0x28) + iVar2 * iVar12 * 4;
      iVar13 = *(int *)(iVar13 + 0x28) + *(int *)pCVar1 * iVar12 * 4;
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(iVar13 + 0x30) + iVar2 * iVar12 * 8;
      iVar13 = *(int *)(iVar13 + 0x30) + *(int *)pCVar1 * iVar12 * 8;
    }
    *(int *)(param_1 + 0x24) = iVar13;
    uVar10 = CModelRenderPrefs::GetRenderType(&_mrpModelRenderPrefs);
    *(ulong *)(param_1 + 8) = uVar10;
    uVar10 = MulColors(*(ulong *)(param_1 + 200),*(ulong *)(this + 0x98));
    *(ulong *)(param_1 + 200) = uVar10;
    iVar13 = *(int *)param_1;
    *(float *)(param_1 + 0x94) = *(float *)(this + 0x84) * *(float *)(iVar13 + 0x1268);
    *(float *)(param_1 + 0x98) = *(float *)(iVar13 + 0x126c) * *(float *)(this + 0x88);
    *(float *)(param_1 + 0x9c) = *(float *)(iVar13 + 0x1270) * *(float *)(this + 0x8c);
    iVar13 = *(int *)param_1;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar13 + 0x1280);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar13 + 0x1284);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar13 + 0x1288);
    bVar4 = *(float *)(param_1 + 0x94) < _DAT_3622376c;
    bVar5 = *(float *)(param_1 + 0x98) < _DAT_3622376c;
    bVar6 = *(float *)(param_1 + 0x9c) < _DAT_3622376c;
    uVar3 = *(uint *)(param_1 + 0xc4);
    *(uint *)(param_1 + 0xc4) = uVar3 & 0xffffffef;
    if ((uint)((bVar4 != bVar5) != bVar6) != DAT_362cabb8[0x2b]) {
      *(uint *)(param_1 + 0xc4) = uVar3 & 0xffffffef | 0x10;
    }
    FUN_360bcfd0();
    if (*(int *)(param_1 + 0xcc) == 0xbc614e) {
      (**(code **)(*DAT_362cabb8 + 0x18))(param_1 + 0x34,&local_54);
      if (local_54 <= _DAT_3622376c) {
        fStack_4 = local_54;
      }
      else {
        fStack_4 = 0.0;
      }
      fVar17 = (float10)(**(code **)(*DAT_362cabb8 + 0x44))(fStack_4);
      *(float *)(param_1 + 0xcc) = (float)fVar17;
    }
    if (((*(int *)(this + 0x84) == 0x3f800000) && (*(int *)(this + 0x88) == 0x3f800000)) &&
       (*(int *)(this + 0x8c) == 0x3f800000)) {
      *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xcc);
    }
    else {
      pCVar1 = *(CRenderModel **)(this + 0x8c);
      if ((float)*(CRenderModel **)(this + 0x8c) <= (float)*(CRenderModel **)(this + 0x88)) {
        pCVar1 = *(CRenderModel **)(this + 0x88);
      }
      param_1 = *(CRenderModel **)(this + 0x84);
      if ((float)param_1 < (float)pCVar1) {
        param_1 = pCVar1;
      }
      *(float *)(pCVar8 + 0xd0) = *(float *)(pCVar8 + 0xcc) - (float)param_1 * 1.0;
    }
    fVar7 = _DAT_362a4110 * *(float *)(pCVar8 + 0xd0) + _DAT_362c53fc;
    *(float *)(pCVar8 + 0xd0) = fVar7;
    lVar11 = GetMipModel(this,fVar7);
    *(long *)(pCVar8 + 0x18) = lVar11;
    *(long *)(this + 0x94) = lVar11;
    *(int *)(pCVar8 + 4) = *(int *)(pCVar8 + 0x18) * 0x60 + 0xd8 + *(int *)pCVar8;
    if ((*(uint *)(pCVar8 + 8) & 0x100) != 0) {
      *(undefined4 *)(pCVar8 + 0xe4) = 0xffffffff;
      *(undefined4 *)(pCVar8 + 0xe0) = 0;
    }
    pCVar1 = pCVar8 + 0xd4;
    fVar7 = SQRT(*(float *)(pCVar8 + 0xdc) * *(float *)(pCVar8 + 0xdc) +
                 *(float *)(pCVar8 + 0xd8) * *(float *)(pCVar8 + 0xd8) +
                 *(float *)pCVar1 * *(float *)pCVar1);
    if (fVar7 <= _DAT_362253e4) {
      *(float *)pCVar1 = 0.0;
      *(undefined4 *)(pCVar8 + 0xd8) = 0;
      *(undefined4 *)(pCVar8 + 0xdc) = 0;
    }
    else {
      fVar7 = _DAT_36223384 / fVar7;
      *(float *)pCVar1 = fVar7 * *(float *)pCVar1;
      *(float *)(pCVar8 + 0xd8) = fVar7 * *(float *)(pCVar8 + 0xd8);
      *(float *)(pCVar8 + 0xdc) = fVar7 * *(float *)(pCVar8 + 0xdc);
    }
    afStack_48[0] = *(float *)(pCVar8 + 0x40);
    afStack_48[2] = (float)*(undefined4 *)(pCVar8 + 0x58);
    afStack_48[1] = (float)*(undefined4 *)(pCVar8 + 0x4c);
    uStack_38 = *(undefined4 *)(pCVar8 + 0x50);
    afStack_48[3] = (float)*(undefined4 *)(pCVar8 + 0x44);
    uStack_30 = *(undefined4 *)(pCVar8 + 0x48);
    uStack_34 = *(undefined4 *)(pCVar8 + 0x5c);
    uStack_28 = *(undefined4 *)(pCVar8 + 0x60);
    uStack_2c = *(undefined4 *)(pCVar8 + 0x54);
    pfVar14 = afStack_48;
    pfVar15 = afStack_24;
    for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
      *pfVar15 = *pfVar14;
      pfVar14 = pfVar14 + 1;
      pfVar15 = pfVar15 + 1;
    }
    local_54 = afStack_24[2] * *(float *)(pCVar8 + 0xdc) +
               afStack_24[1] * *(float *)(pCVar8 + 0xd8) + afStack_24[0] * *(float *)pCVar1;
    fStack_50 = fStack_10 * *(float *)(pCVar8 + 0xdc) +
                fStack_14 * *(float *)(pCVar8 + 0xd8) + afStack_24[3] * *(float *)pCVar1;
    *(float *)(pCVar8 + 0x28) = local_54;
    *(float *)(pCVar8 + 0x2c) = fStack_50;
    fStack_4c = fStack_4 * *(float *)(pCVar8 + 0xdc) +
                fStack_8 * *(float *)(pCVar8 + 0xd8) + fStack_c * *(float *)pCVar1;
    *(float *)(pCVar8 + 0x30) = fStack_4c;
    FUN_360c2270(*(int **)pCVar8);
    if (((byte)pCVar8[0xc4] & 8) == 0) {
      pCVar16 = *(CAttachmentModelObject **)(this + 0x9c);
      while (*(int *)pCVar16 != 0) {
        iVar13 = DAT_362ca540 + 1;
        DAT_362ca540 = iVar13;
        iVar12 = FUN_360bef60((undefined4 *)&DAT_362ca538);
        if (iVar12 < iVar13) {
          iVar13 = FUN_360bef60((undefined4 *)&DAT_362ca538);
          FUN_360bf3c0(&DAT_362ca538,iVar13 + _DAT_362ca544);
          iVar13 = DAT_362ca540;
        }
        *(int *)(pCVar16 + 0xd0) = iVar13 * 0xe8 + -0xe8 + DAT_362ca53c;
        iVar13 = CreateAttachment(this,pCVar8,pCVar16);
        if (iVar13 == 0) {
          *(undefined4 *)(pCVar16 + 0xd0) = 0;
          DAT_362ca540 = DAT_362ca540 + -1;
          pCVar16 = *(CAttachmentModelObject **)pCVar16;
        }
        else {
          SetupModelRendering((CModelObject *)(pCVar16 + 0x24),*(CRenderModel **)(pCVar16 + 0xd0));
          pCVar16 = *(CAttachmentModelObject **)pCVar16;
        }
      }
    }
  }
  return;
}

