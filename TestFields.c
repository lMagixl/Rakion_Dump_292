
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMovableEntity::TestFields(long &,long &,float &) */

void __thiscall
CMovableEntity::TestFields(CMovableEntity *this,long *param_1,long *param_2,float *param_3)

{
  CMovableEntity *pCVar1;
  CEntity *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  CEntity *this_00;
  bool bVar11;
  float10 fVar12;
  float *pfVar13;
  int *piVar14;
  CRelationSrc *pCVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float10 fVar19;
  float10 fVar20;
  double dVar21;
  float local_10c;
  float local_108;
  float local_104;
  int local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 *local_c0;
  undefined4 uStack_bc;
  float local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
                    /* 0x1ae800  3806  ?TestFields@CMovableEntity@@QAEXAAJ0AAM@Z */
  *param_1 = 0;
  *param_2 = 0;
  piVar14 = *(int **)(this + 0x84);
  fVar3 = (float)piVar14[2];
  fVar4 = (float)piVar14[3];
  pCVar1 = this + 0x3c;
  local_fc = 0.0;
  local_d0 = 0.0;
  local_6c = *(float *)(this + 0x68) * _DAT_3622376c;
  local_c0 = (undefined4 *)(*(float *)(this + 0x74) * _DAT_3622376c);
  local_f8 = *(float *)(this + 0x6c) * _DAT_3622376c;
  local_cc = fVar3 * *(float *)(this + 0x58) + *(float *)(this + 0x54) * _DAT_3622376c +
             *(float *)(this + 0x5c) * _DAT_3622376c + *(float *)pCVar1;
  local_c8 = fVar3 * *(float *)(this + 100) + *(float *)(this + 0x60) * _DAT_3622376c + local_6c +
             *(float *)(this + 0x40);
  local_c4 = fVar3 * *(float *)(this + 0x70) + local_f8 + (float)local_c0 + *(float *)(this + 0x44);
  local_b4 = fVar4 * *(float *)(this + 0x58) + *(float *)(this + 0x54) * _DAT_3622376c +
             *(float *)(this + 0x5c) * _DAT_3622376c + *(float *)pCVar1;
  local_b0 = fVar4 * *(float *)(this + 100) + *(float *)(this + 0x60) * _DAT_3622376c + local_6c +
             *(float *)(this + 0x40);
  local_ac = fVar4 * *(float *)(this + 0x70) + local_f8 + (float)local_c0 + *(float *)(this + 0x44);
  iVar17 = 0;
  if (0 < *piVar14) {
    local_c0 = (undefined4 *)0x0;
    do {
      pfVar13 = (float *)((int)local_c0 + piVar14[1]);
      iVar17 = iVar17 + 1;
      fVar3 = *(float *)(this + 0x68);
      fVar4 = *(float *)(this + 100);
      fVar5 = *(float *)(this + 0x60);
      fVar6 = *(float *)(this + 0x74);
      fVar7 = *(float *)(this + 0x70);
      fVar8 = *(float *)(this + 0x6c);
      fVar9 = *(float *)(this + 0x40);
      fVar10 = *(float *)(this + 0x44);
      pfVar13[4] = *pfVar13 * *(float *)(this + 0x54) +
                   pfVar13[1] * *(float *)(this + 0x58) +
                   *(float *)((int)local_c0 + piVar14[1] + 8) * *(float *)(this + 0x5c) +
                   *(float *)pCVar1;
      pfVar13[5] = fVar5 * *pfVar13 + pfVar13[1] * fVar4 + pfVar13[2] * fVar3 + fVar9;
      pfVar13[6] = fVar8 * *pfVar13 + pfVar13[1] * fVar7 + pfVar13[2] * fVar6 + fVar10;
      local_c0 = local_c0 + 0x10;
    } while (iVar17 < *piVar14);
  }
  DAT_363826dc = 0;
  for (piVar14 = *(int **)(this + 0xac); *piVar14 != 0; piVar14 = (int *)*piVar14) {
    pCVar15 = CRelationLnk::GetSrc((CRelationLnk *)(piVar14 + -4));
    iVar17 = *(int *)(*(int *)(pCVar15 + -100) + 0x14);
    if ((*(int *)(iVar17 + 0x674) == *(int *)(pCVar15 + -100) + 0x18) &&
       (*(int *)(*(int *)(iVar17 + 0x668) + 4) == 4)) {
      local_50 = (double)local_b4;
      local_48 = (double)local_b0;
      local_40 = (double)local_ac;
      local_68 = (double)local_cc;
      local_60 = (double)local_c8;
      local_58 = (double)local_c4;
      FUN_360e0620(*(void **)(pCVar15 + -0x10),(double *)&local_68,(double *)&local_50,
                   (double *)&local_c0,(undefined8 *)&local_f8);
      uVar16 = (uint)(byte)pCVar15[-0x55];
      fVar19 = (float10)(double)CONCAT44(uStack_bc,local_c0);
      fVar20 = (float10)(double)CONCAT44(fStack_f4,local_f8);
      if ((uVar16 != 0) && (((float10)_DAT_36227d98 < fVar20 && (fVar19 < (float10)_DAT_36227d28))))
      {
        if ((fVar19 < (float10)_DAT_36243b08) && (*param_2 = uVar16, (float10)local_d0 < fVar20)) {
          local_d0 = (float)(double)CONCAT44(fStack_f4,local_f8);
        }
        if ((float10)_DAT_36243b00 < fVar20) {
          fVar12 = (float10)_DAT_36223384;
          *param_1 = uVar16;
          if ((float10)local_fc < fVar12 - fVar19) {
            local_fc = (float)(fVar12 - fVar19);
          }
        }
      }
      UpdateOneSectorForce(this,(CBrushSector *)(pCVar15 + -0x9c),(float)(fVar20 - fVar19));
    }
  }
  if (*param_1 == *param_2) {
    *param_3 = 1.0;
  }
  else {
    if ((*param_1 == 0) ||
       ((local_fc = _DAT_36223384 - local_fc, *param_2 != 0 && (local_fc <= local_d0)))) {
      local_fc = local_d0;
    }
    *param_3 = local_fc;
    if (_DAT_362280f0 <= *param_3) {
      if (_DAT_3623ca30 < *param_3) {
        *param_3 = 1.0;
        *param_1 = *param_2;
      }
    }
    else {
      *param_3 = 1.0;
      *param_2 = *param_1;
    }
  }
  iVar18 = 0;
  local_f8 = 0.0;
  fStack_f4 = 0.0;
  local_f0 = 0.0;
  local_dc = 0.0;
  local_d8 = 0.0;
  local_d4 = 0.0;
  local_e8 = 0.0;
  local_e4 = 0.0;
  local_e0 = 0.0;
  local_10c = 0.0;
  local_108 = 0.0;
  local_104 = 0.0;
  local_fc = 0.0;
  local_100 = 0;
  iVar17 = FUN_361b3e50(0x363826d4);
  if (0 < iVar17) {
    do {
      (**(code **)(**(int **)(iVar18 + DAT_363826d8) + 0xb0))
                (*(undefined4 *)(iVar18 + 4 + DAT_363826d8),pCVar1,&local_50,&local_68);
      fVar3 = *(float *)(iVar18 + 8 + DAT_363826d8);
      local_c0 = (undefined4 *)(iVar18 + DAT_363826d8);
      local_fc = local_fc + fVar3;
      fStack_84 = (float)local_50 * local_48._4_4_;
      fStack_80 = local_50._4_4_ * local_48._4_4_;
      fStack_7c = (float)local_48 * local_48._4_4_;
      fStack_9c = fStack_84 * fVar3;
      fStack_98 = fStack_80 * fVar3;
      fStack_94 = fStack_7c * fVar3;
      local_f8 = fStack_9c + local_f8;
      fStack_f4 = fStack_98 + fStack_f4;
      local_f0 = fStack_94 + local_f0;
      fStack_a8 = (float)local_50 * local_40._0_4_;
      fStack_a4 = local_50._4_4_ * local_40._0_4_;
      fStack_a0 = (float)local_48 * local_40._0_4_;
      fStack_78 = fStack_a8 * fVar3;
      fStack_74 = fStack_a4 * fVar3;
      fStack_70 = fStack_a0 * fVar3;
      local_dc = fStack_78 + local_dc;
      local_d8 = fStack_74 + local_d8;
      local_d4 = fStack_70 + local_d4;
      if (_DAT_3622376c < local_60._4_4_) {
        fStack_90 = (float)local_68 * local_60._4_4_;
        fStack_8c = local_68._4_4_ * local_60._4_4_;
        fStack_88 = (float)local_60 * local_60._4_4_;
        local_cc = fStack_90 * fVar3;
        local_c8 = fStack_8c * fVar3;
        local_c4 = fStack_88 * fVar3;
        local_e8 = local_cc + local_e8;
        local_e4 = local_c8 + local_e4;
        local_e0 = local_c4 + local_e0;
        local_b4 = (float)local_68 * local_58._0_4_;
        local_b0 = local_68._4_4_ * local_58._0_4_;
        local_ac = (float)local_60 * local_58._0_4_;
        fStack_20 = local_b4 * fVar3;
        fStack_1c = local_b0 * fVar3;
        fStack_18 = local_ac * fVar3;
        local_10c = fStack_20 + local_10c;
        local_108 = fStack_1c + local_108;
        local_104 = fStack_18 + local_104;
        fStack_14 = local_cc;
        fStack_10 = local_c8;
        fStack_c = local_c4;
      }
      this_00 = (CEntity *)*local_c0;
      fStack_38 = fStack_9c;
      fStack_34 = fStack_98;
      fStack_30 = fStack_94;
      fStack_2c = fStack_78;
      fStack_28 = fStack_74;
      fStack_24 = fStack_70;
      if (this_00 != (CEntity *)0x0) {
        pCVar2 = this_00 + 0x18;
        *(int *)pCVar2 = *(int *)pCVar2 + -1;
        if (*(int *)pCVar2 == 0) {
          CEntity::DeleteSelf(this_00);
        }
      }
      local_100 = local_100 + 1;
      *local_c0 = 0;
      iVar18 = iVar18 + 0xc;
      iVar17 = FUN_361b3e50(0x363826d4);
    } while (local_100 < iVar17);
    if (_DAT_3622376c < local_fc) {
      local_fc = _DAT_36223384 / local_fc;
      local_f8 = local_f8 * local_fc;
      fStack_f4 = fStack_f4 * local_fc;
      local_f0 = local_f0 * local_fc;
      local_dc = local_dc * local_fc;
      local_d8 = local_d8 * local_fc;
      local_d4 = local_d4 * local_fc;
      local_e8 = local_e8 * local_fc;
      local_e4 = local_e4 * local_fc;
      local_e0 = local_e0 * local_fc;
      local_10c = local_10c * local_fc;
      local_108 = local_108 * local_fc;
      local_104 = local_104 * local_fc;
    }
  }
  fVar3 = SQRT(local_f8 * local_f8 + fStack_f4 * fStack_f4 + local_f0 * local_f0);
  bVar11 = _DAT_362280f0 <= fVar3;
  *(float *)(this + 0x18c) = fVar3;
  if (bVar11) {
    *(float *)(this + 400) = SQRT(local_dc * local_dc + local_d8 * local_d8 + local_d4 * local_d4);
    fVar3 = _DAT_36223384 / fVar3;
    *(float *)(this + 0x180) = local_f8 * fVar3;
    *(float *)(this + 0x184) = fStack_f4 * fVar3;
    *(float *)(this + 0x188) = fVar3 * local_f0;
  }
  else {
    *(undefined4 *)(this + 0x18c) = 0;
  }
  fVar3 = SQRT(local_e8 * local_e8 + local_e4 * local_e4 + local_e0 * local_e0);
  bVar11 = _DAT_362280f0 <= fVar3;
  *(float *)(this + 0x1a0) = fVar3;
  if (bVar11) {
    *(float *)(this + 0x1a4) =
         SQRT(local_10c * local_10c + local_108 * local_108 + local_104 * local_104);
    fVar3 = _DAT_36223384 / fVar3;
    *(float *)(this + 0x194) = local_e8 * fVar3;
    *(float *)(this + 0x198) = local_e4 * fVar3;
    *(float *)(this + 0x19c) = fVar3 * local_e0;
  }
  else {
    *(undefined4 *)(this + 0x1a0) = 0;
  }
  DAT_363826dc = 0;
  if ((DAT_362b2acc == 0) && (_DAT_3622e4e4 < *(float *)(_pTimer + 0xc))) {
    local_c0 = *(undefined4 **)(_pTimer + 0xc);
    dVar21 = floor((double)*(float *)(_pTimer + 0xc));
    if (ABS((double)(float)local_c0 - dVar21) < (double)_DAT_362253e8) {
      *(float *)(this + 0x180) = -*(float *)(this + 0x180);
      *(float *)(this + 0x184) = -*(float *)(this + 0x184);
      *(float *)(this + 0x188) = -*(float *)(this + 0x188);
    }
  }
  return;
}

