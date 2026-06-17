
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CLightSource::FindShadowLayersPoint(int) */

void __thiscall CLightSource::FindShadowLayersPoint(CLightSource *this,int param_1)

{
  CBrushShadowLayer *this_00;
  CEntity *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CShadowMap *this_01;
  CBrushPolygon *pCVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  void *this_02;
  int *piVar11;
  float10 fVar12;
  int local_68;
  int local_60;
  float local_54;
  int *local_50;
  float local_4c;
  float local_48 [4];
  float local_38;
  float local_34;
  double local_30;
  double local_28;
  double local_20;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
                    /* 0x148d60  1646  ?FindShadowLayersPoint@CLightSource@@QAEXH@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_36219abf;
  local_14 = ExceptionList;
  pCVar1 = *(CEntity **)(this + 0xc);
  fVar2 = *(float *)(pCVar1 + 0x3c);
  fVar3 = *(float *)(pCVar1 + 0x40);
  fVar4 = *(float *)(pCVar1 + 0x44);
  ExceptionList = &local_14;
  CEntity::GetRelativeVector
            (pCVar1,local_48 + 3,*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14),
             *(undefined4 *)(this + 0x18));
  DAT_362fdc14 = fVar2 + local_48[3];
  DAT_362fdc18 = (int *)(fVar3 + local_38);
  _DAT_362fdc1c = fVar4 + local_34;
  _DAT_362fdb30 = *(float *)(this + 0x24);
  iVar7 = 0;
  local_54 = DAT_362fdc14;
  local_50 = DAT_362fdc18;
  local_4c = _DAT_362fdc1c;
  do {
    iVar6 = iVar7 + 4;
    *(float *)((int)&local_54 + iVar7) = *(float *)((int)&DAT_362fdc14 + iVar7) - _DAT_362fdb30;
    *(float *)((int)local_48 + iVar7) = _DAT_362fdb30 + *(float *)((int)&DAT_362fdc14 + iVar7);
    iVar7 = iVar6;
  } while (iVar6 < 9);
  _DAT_362a6604 = local_54;
  _DAT_362a6608 = local_50;
  _DAT_362a660c = local_4c;
  _DAT_362a6610 = local_48[0];
  _DAT_362a6614 = local_48[1];
  _DAT_362a6618 = local_48[2];
  DAT_362fdb34 = *(uint *)(this + 0x1c) & 2;
  _DAT_362fdb2c = (*(float *)(this + 0x3c) + *(float *)(this + 0x38)) * _DAT_36238bec;
  DAT_362fdb28 = 2;
  if (((*(uint *)(this + 0x1c) & 0x20) != 0) && (DAT_362fdb28 = DAT_362a4088, 2 < DAT_362a4088)) {
    DAT_362a4088 = 1;
    DAT_362fdb28 = DAT_362a4088;
  }
  local_30 = (double)DAT_362fdc14;
  local_28 = (double)(float)DAT_362fdc18;
  local_20 = (double)_DAT_362fdc1c;
  piVar8 = *(int **)this;
  while (piVar9 = piVar8, piVar8 = (int *)*piVar9, piVar8 != (int *)0x0) {
    this_01 = (CShadowMap *)piVar9[2];
    if (((DAT_362fdb44 == 0) ||
        (DAT_362fdb44 ==
         *(int *)(*(int *)(*(int *)(*(int *)(this_01 + 0xdc) + 0x38) + 0x14) + 0x668))) &&
       ((param_1 == 0 || ((*(uint *)(this_01 + -8) & 0x100) != 0)))) {
      iVar7 = FUN_36148c30((int *)(this_01 + -0xd0));
      if (iVar7 == 0) {
        CShadowMap::Invalidate(this_01,*(uint *)(this + 0x1c) & 0x80);
        this_00 = (CBrushShadowLayer *)(piVar9 + -3);
        if (this_00 != (CBrushShadowLayer *)0x0) {
          CBrushShadowLayer::~CBrushShadowLayer(this_00);
          operator_delete(this_00);
        }
      }
      else {
        *(uint *)(this_01 + -8) = *(uint *)(this_01 + -8) | 0x2000000;
        UpdateLayer(this,(CBrushShadowLayer *)(piVar9 + -3));
      }
    }
  }
  iVar7 = *(int *)(this + 0xc);
  if ((*(uint *)(iVar7 + 8) & 0x200) == 0) {
    this_02 = (void *)(*(int *)(iVar7 + 0xa8) + 0x15c);
    local_60 = 0;
    local_c = 0;
    iVar7 = FUN_360caf20((int)this_02);
    if (0 < iVar7) {
      do {
        iVar7 = DAT_362fdb44;
        if (((DAT_362fdb44 == 0) || (iVar6 = FUN_360cafb0(this_02,local_60), iVar7 == iVar6)) &&
           (iVar7 = FUN_360cafb0(this_02,local_60), *(int *)(iVar7 + 4) == 4)) {
          iVar7 = FUN_360cafb0(this_02,local_60);
          for (piVar8 = *(int **)(*(int *)(iVar7 + 0x7c) + 0x674); *piVar8 != 0;
              piVar8 = (int *)*piVar8) {
            if ((~(((uint)((float)piVar8[6] - _DAT_362a6604) |
                    (uint)(_DAT_362a6610 - (float)piVar8[3]) |
                    (uint)((float)piVar8[7] - (float)_DAT_362a6608) |
                    (uint)(_DAT_362a6614 - (float)piVar8[4]) |
                    (uint)((float)piVar8[8] - _DAT_362a660c) |
                   (uint)(_DAT_362a6618 - (float)piVar8[5])) >> 0x1f) & 1) != 0) {
              piVar9 = piVar8 + -6;
              local_68 = 0;
              local_c = CONCAT31(local_c._1_3_,1);
              iVar7 = FUN_36043600((int)piVar9);
              if (0 < iVar7) {
                do {
                  iVar7 = FUN_36043710(piVar9,local_68);
                  if ((~(((uint)(*(float *)(iVar7 + 0x60) - _DAT_362a6604) |
                          (uint)(_DAT_362a6610 - *(float *)(iVar7 + 0x54)) |
                          (uint)(*(float *)(iVar7 + 100) - (float)_DAT_362a6608) |
                          (uint)(_DAT_362a6614 - *(float *)(iVar7 + 0x58)) |
                          (uint)(*(float *)(iVar7 + 0x68) - _DAT_362a660c) |
                         (uint)(_DAT_362a6618 - *(float *)(iVar7 + 0x5c))) >> 0x1f) & 1) != 0) {
                    iVar7 = FUN_36043710(piVar9,local_68);
                    if (*(int *)(*(int *)(iVar7 + 0x8c) + 8) != 0) {
                      iVar7 = FUN_36043710(piVar9,local_68);
                      fVar12 = FUN_360e0680(*(int *)(iVar7 + 0x8c),&local_30,(double)_DAT_362fdb30);
                      if (fVar12 < (float10)_DAT_3622376c) goto LAB_361492a4;
                    }
                    iVar7 = FUN_36043710(piVar9,local_68);
                    piVar11 = (int *)(iVar7 + 0x18);
                    local_54 = 0.0;
                    local_c._0_1_ = 2;
                    local_50 = piVar11;
                    if (0 < *piVar11) {
                      do {
                        fVar2 = local_54;
                        if (((param_1 == 0) ||
                            ((*(uint *)((int)local_54 * 0x1d0 + 200 + *(int *)(iVar7 + 0x1c)) &
                             0x100) != 0)) &&
                           ((pCVar5 = (CBrushPolygon *)
                                      ((int)local_54 * 0x1d0 + *(int *)(iVar7 + 0x1c)),
                            (*(uint *)((int)local_54 * 0x1d0 + 200 + *(int *)(iVar7 + 0x1c)) &
                            0x2000000) == 0 && (iVar6 = FUN_36148c30((int *)pCVar5), iVar6 != 0))))
                        {
                          AddLayer(this,pCVar5);
                        }
                        local_54 = (float)((int)fVar2 + 1);
                      } while ((int)local_54 < *piVar11);
                    }
                    local_c = CONCAT31(local_c._1_3_,1);
                    local_54 = -NAN;
                  }
LAB_361492a4:
                  local_68 = local_68 + 1;
                  iVar7 = FUN_36043600((int)piVar9);
                } while (local_68 < iVar7);
              }
              local_c = local_c & 0xffffff00;
            }
          }
        }
        local_60 = local_60 + 1;
        iVar7 = FUN_360caf20((int)this_02);
      } while (local_60 < iVar7);
    }
  }
  else {
    iVar10 = 0;
    iVar6 = FUN_360cb720(iVar7 + 0x2ac);
    if (0 < iVar6) {
      do {
        pCVar5 = *(CBrushPolygon **)(*(int *)(iVar7 + 0x2b0) + iVar10 * 4);
        if (((DAT_362fdb44 == 0) ||
            (DAT_362fdb44 ==
             *(int *)(*(int *)(*(int *)(*(int *)(pCVar5 + 0x1ac) + 0x38) + 0x14) + 0x668))) &&
           (((*(uint *)(pCVar5 + 200) & 0x2000000) == 0 &&
            (iVar6 = FUN_36148c30((int *)pCVar5), iVar6 != 0)))) {
          AddLayer(this,pCVar5);
        }
        iVar10 = iVar10 + 1;
        iVar6 = FUN_360cb720(iVar7 + 0x2ac);
      } while (iVar10 < iVar6);
    }
  }
  for (piVar8 = *(int **)this; *piVar8 != 0; piVar8 = (int *)*piVar8) {
    *(uint *)(piVar8[2] + -8) = *(uint *)(piVar8[2] + -8) & 0xfdffffff;
  }
  ExceptionList = local_14;
  return;
}

