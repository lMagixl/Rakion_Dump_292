
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CModelObject::RenderModel_Mask(class CRenderModel &) */

void __thiscall CModelObject::RenderModel_Mask(CModelObject *this,CRenderModel *param_1)

{
  int iVar1;
  float fVar2;
  CTextureData *this_00;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined *puVar10;
  uint uVar11;
  CRenderModel *pCVar12;
  CModelData *pCVar13;
  char *pcVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  CRenderModel *pCVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int local_10;
  int local_8;
  
                    /* 0xbffb0  3148  ?RenderModel_Mask@CModelObject@@AAEXAAVCRenderModel@@@Z */
  pCVar12 = param_1;
  this_00 = *(CTextureData **)(this + 0x38);
  if ((this_00 != (CTextureData *)0x0) && (*(int *)(this_00 + 0x78) != 0)) {
    pCVar13 = GetData(this);
    uVar24 = *(undefined4 *)(pCVar13 + 0x10);
    uVar23 = *(undefined4 *)(pCVar13 + 0xc);
    pcVar14 = Translate(s_ETRSWARNING__model___s__cast_clu_36231dc8,4);
    CPrintF(pcVar14,uVar23,uVar24);
    return;
  }
  _DAT_362cac18 = DAT_362ca528;
  DAT_362cabe0 = (uint)(DAT_362cabb8 == &DAT_362ca86c);
  _DAT_362cabd8 = *(undefined4 *)(this + 0x90);
  DAT_362cabdc = *(uint *)(*(int *)param_1 + 0x1260) & 0x10;
  if (this_00 == (CTextureData *)0x0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffff0b | 8;
  }
  iVar18 = 0;
  DAT_362cabc8 = 0x1f;
  if ((char)param_1[8] < '\0') {
    CTextureData::Force(this_00,0x300);
    lVar15 = CAnimObject::GetFrame((CAnimObject *)(this + 0x24));
    DAT_362cabc8 = *(undefined4 *)(this_00 + 0x28);
    iVar18 = *(int *)(this_00 + 0x60) +
             ((int)(lVar15 * *(int *)(this_00 + 0x30) +
                   (lVar15 * *(int *)(this_00 + 0x30) >> 0x1f & 3U)) >> 2) * 4;
    DAT_362cabd0 = *(int *)(this_00 + 0x20) >> ((byte)DAT_362cabc8 & 0x1f);
    DAT_362cabcc = *(int *)(this_00 + 0x24) >> ((byte)DAT_362cabc8 & 0x1f);
  }
  FUN_3608b270(iVar18,DAT_362cabd0,DAT_362cabcc);
  uVar11 = DAT_362cabdc;
  puVar10 = DAT_362cabb8;
  _DAT_362cac10 = *(float *)(DAT_362cabb8 + 300);
  DAT_362cabf4 = -*(float *)(DAT_362cabb8 + 0x4c);
  _DAT_362cac14 = *(float *)(DAT_362cabb8 + 0x128);
  DAT_362cabec = -*(float *)(DAT_362cabb8 + 0x50);
  if (DAT_362cabe0 == 0) {
    _DAT_362cac04 = *(float *)(DAT_362cabb8 + 0x184);
    _DAT_362cac00 = *(float *)(DAT_362cabb8 + 0x188);
    _DAT_362cabfc = *(float *)(DAT_362cabb8 + 0x18c);
    _DAT_362cabf8 = *(float *)(DAT_362cabb8 + 400);
    _DAT_362cabf0 = 1.0;
    _DAT_362cabe8 = 1.0;
    _DAT_362cabe4 = 1.0;
  }
  else {
    _DAT_362cac0c = *(float *)(DAT_362cabb8 + 0x18c);
    _DAT_362cabf0 = _DAT_36227d20 / *(float *)(DAT_362cabb8 + 0x4c);
    _DAT_362cac08 = *(float *)(DAT_362cabb8 + 400);
    _DAT_362cabe8 = _DAT_36227d20 / *(float *)(DAT_362cabb8 + 0x50);
    _DAT_362cabe4 = *(float *)(DAT_362cabb8 + 0x130);
  }
  iVar18 = 0;
  if (0 < *(int *)(*(int *)param_1 + 0x1c)) {
    iVar20 = 0;
    do {
      iVar17 = *(int *)(*(int *)param_1 + 0x48) + iVar20;
      *(undefined4 *)(iVar17 + 0x34) = 0;
      iVar3 = *(int *)(param_1 + 0x20);
      if (uVar11 == 0) {
        iVar1 = iVar3 + iVar18 * 4;
        iVar16 = (int)*(char *)(iVar1 + 2);
        fVar2 = ((float)(int)*(char *)(iVar3 + iVar18 * 4) - *(float *)(param_1 + 0xa0)) *
                *(float *)(param_1 + 0x94);
        fVar4 = ((float)(int)*(char *)(iVar1 + 1) - *(float *)(param_1 + 0xa4)) *
                *(float *)(param_1 + 0x98);
      }
      else {
        iVar1 = iVar3 + iVar18 * 8;
        iVar16 = (int)*(short *)(iVar1 + 4);
        fVar2 = ((float)(int)*(short *)(iVar3 + iVar18 * 8) - *(float *)(param_1 + 0xa0)) *
                *(float *)(param_1 + 0x94);
        fVar4 = ((float)(int)*(short *)(iVar1 + 2) - *(float *)(param_1 + 0xa4)) *
                *(float *)(param_1 + 0x98);
      }
      bVar22 = DAT_362cabe0 == 0;
      fVar5 = ((float)iVar16 - *(float *)(param_1 + 0xa8)) * *(float *)(param_1 + 0x9c);
      *(float *)(iVar17 + 0x20) =
           fVar4 * *(float *)(param_1 + 0x74) +
           fVar5 * *(float *)(param_1 + 0x78) + fVar2 * *(float *)(param_1 + 0x70) +
           *(float *)(param_1 + 100);
      *(float *)(iVar17 + 0x24) =
           fVar4 * *(float *)(param_1 + 0x80) +
           fVar5 * *(float *)(param_1 + 0x84) + fVar2 * *(float *)(param_1 + 0x7c) +
           *(float *)(param_1 + 0x68);
      fVar2 = fVar4 * *(float *)(param_1 + 0x8c) +
              fVar5 * *(float *)(param_1 + 0x90) + fVar2 * *(float *)(param_1 + 0x88) +
              *(float *)(param_1 + 0x6c);
      *(float *)(iVar17 + 0x28) = fVar2;
      if (bVar22) {
        fVar2 = fVar2 * _DAT_362cac04;
        *(undefined4 *)(iVar17 + 0x14) = 0x3f800000;
        *(float *)(iVar17 + 0xc) = _DAT_362cabfc * *(float *)(iVar17 + 0x20) + fVar2 + _DAT_362cac14
        ;
        *(float *)(iVar17 + 0x10) =
             (_DAT_362cac10 - _DAT_362cabf8 * *(float *)(iVar17 + 0x24)) -
             _DAT_362cac00 * *(float *)(iVar17 + 0x28);
      }
      else {
        fVar2 = _DAT_36223384 / fVar2;
        *(float *)(iVar17 + 0xc) = _DAT_362cac0c * *(float *)(iVar17 + 0x20) * fVar2 + _DAT_362cac14
        ;
        *(float *)(iVar17 + 0x10) =
             _DAT_362cac10 - _DAT_362cac08 * *(float *)(iVar17 + 0x24) * fVar2;
        *(float *)(iVar17 + 0x14) = _DAT_362cabe4 * fVar2;
      }
      if ((((*(float *)(iVar17 + 0xc) < _DAT_3622376c) ||
           ((float)_DAT_362cac18 < *(float *)(iVar17 + 0xc) !=
            ((float)_DAT_362cac18 == *(float *)(iVar17 + 0xc)))) ||
          (DAT_362cabf4 < *(float *)(iVar17 + 0x28))) ||
         ((DAT_362cabec < _DAT_3622376c && (*(float *)(iVar17 + 0x28) < DAT_362cabec)))) {
        *(undefined4 *)(iVar17 + 0x34) = 1;
      }
      iVar18 = iVar18 + 1;
      iVar20 = iVar20 + 0x38;
    } while (iVar18 < *(int *)(*(int *)param_1 + 0x1c));
  }
  iVar18 = *(int *)param_1;
  local_8 = 0;
  if (0 < *(int *)(iVar18 + 0xe8)) {
    param_1 = (CRenderModel *)0x0;
    do {
      iVar20 = *(int *)(iVar18 + 0xec);
      piVar19 = *(int **)(param_1 + iVar20 + 4);
      pCVar21 = param_1 + iVar20;
      _DAT_362cabd4 =
           *(uint *)(*(int *)(param_1 + iVar20 + 0x10) * 0x70 + 0x48 + *(int *)(iVar18 + 0xfc));
      iVar20 = piVar19[2];
      iVar3 = piVar19[4];
      iVar17 = *piVar19;
      fVar5 = *(float *)(iVar3 + 0x20) - *(float *)(iVar20 + 0x20);
      fVar8 = *(float *)(iVar3 + 0x24) - *(float *)(iVar20 + 0x24);
      fVar7 = *(float *)(iVar3 + 0x28) - *(float *)(iVar20 + 0x28);
      fVar2 = *(float *)(iVar17 + 0x20) - *(float *)(iVar20 + 0x20);
      fVar4 = *(float *)(iVar17 + 0x24) - *(float *)(iVar20 + 0x24);
      fVar9 = *(float *)(iVar17 + 0x28) - *(float *)(iVar20 + 0x28);
      fVar6 = fVar9 * fVar5 - fVar2 * fVar7;
      fVar2 = fVar2 * fVar8 - fVar4 * fVar5;
      if (DAT_362cabe0 == 0) {
        fVar5 = fVar6 * *(float *)(puVar10 + 0x198) + fVar2 * *(float *)(puVar10 + 0x19c);
        fVar2 = *(float *)(puVar10 + 0x194);
      }
      else {
        fVar5 = fVar6 * *(float *)(iVar17 + 0x24) + fVar2 * *(float *)(iVar17 + 0x28);
        fVar2 = *(float *)(iVar17 + 0x20);
      }
      if (_DAT_3622376c <= (fVar4 * fVar7 - fVar9 * fVar8) * fVar2 + fVar5) {
        *(undefined4 *)(pCVar21 + 0x14) = 1;
      }
      else if ((_DAT_362cabd4 & 1) == 0) {
        *(undefined4 *)(pCVar21 + 0x14) = 0;
      }
      else {
        *(undefined4 *)(pCVar21 + 0x14) = 0xffffffff;
      }
      *(undefined4 *)(pCVar21 + 0x18) = 0;
      if (*(int *)(pCVar21 + 0x14) != 0) {
        local_10 = 0;
        iVar20 = FUN_3600c1d0((undefined4 *)pCVar21);
        if (0 < iVar20) {
          do {
            if (*(int *)(*piVar19 + 0x34) != 0) {
              *(undefined4 *)(pCVar21 + 0x18) = 1;
              break;
            }
            local_10 = local_10 + 1;
            piVar19 = piVar19 + 2;
          } while (local_10 < iVar20);
        }
      }
      local_8 = local_8 + 1;
      param_1 = param_1 + 0x1c;
    } while (local_8 < *(int *)(iVar18 + 0xe8));
  }
  FUN_360bf5a0((int *)pCVar12,-1);
  FUN_360bf5a0((int *)pCVar12,1);
  return;
}

