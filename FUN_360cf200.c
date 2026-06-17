
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_360cf200(void *this,int param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  CEntity *pCVar3;
  CEntity *pCVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  float *pfVar11;
  bool bVar12;
  float *pfVar13;
  float *pfVar14;
  CEntity *local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  int *local_100;
  float local_fc;
  int local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
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
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  CEntity *local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  CEntity *local_80;
  undefined4 local_7c;
  EPass local_78 [8];
  CEntity *local_70;
  undefined4 local_6c;
  EPass local_68 [8];
  CEntity *local_60;
  undefined4 local_5c;
  EPass local_58 [8];
  CEntity *local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [4];
  float local_2c [4];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214b08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int **)((int)this + 0x110) = param_2;
  iVar8 = *param_2;
  pfVar11 = (float *)(iVar8 + 0x14);
  pfVar1 = (float *)(param_1 + 0x10);
  local_128 = (CEntity *)
              (((*pfVar1 * *pfVar11 +
                *(float *)(param_1 + 0x14) * *(float *)(iVar8 + 0x18) +
                *(float *)(param_1 + 0x18) * *(float *)(iVar8 + 0x1c)) - *(float *)(iVar8 + 0x20)) -
              *(float *)(param_1 + 0xc));
  local_124 = ((*pfVar11 * *(float *)(param_1 + 0x1c) +
               *(float *)(param_1 + 0x20) * *(float *)(iVar8 + 0x18) +
               *(float *)(param_1 + 0x24) * *(float *)(iVar8 + 0x1c)) - *(float *)(iVar8 + 0x20)) -
              *(float *)(param_1 + 0xc);
  if (((_DAT_3622376c <= (float)local_128) && (local_124 < _DAT_3622376c)) &&
     (local_124 = (float)local_128 / ((float)local_128 - local_124),
     local_124 < *(float *)((int)this + 0x1c8))) {
    local_104 = (*(float *)(param_1 + 0x1c) - *pfVar1) * local_124;
    local_100 = (int *)((*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x14)) * local_124);
    local_fc = (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x18)) * local_124;
    local_120 = *pfVar1 + local_104;
    local_11c = *(float *)(param_1 + 0x14) + (float)local_100;
    local_118 = *(float *)(param_1 + 0x18) + local_fc;
    local_110 = local_120;
    local_10c = local_11c;
    local_108 = local_118;
    FUN_3605fbc0(pfVar11,&local_88,&local_110);
    FUN_360cd910(pfVar11,&local_128,&local_114);
    local_90 = (&local_8c)[(int)local_114];
    local_94 = (&local_8c)[(int)local_128];
    local_8c = 0.0;
    if (0 < param_2[1]) {
      piVar10 = (int *)param_2[2];
      local_f8 = (int)local_128 * 4 + -4;
      local_128 = (CEntity *)((int)local_114 * 4 + -4);
      local_114 = (float)param_2[1];
      do {
        iVar8 = *(int *)*piVar10;
        iVar2 = ((int *)*piVar10)[1];
        CIntersector::AddEdge
                  ((CIntersector *)&local_94,*(float *)(local_f8 + 0x10 + iVar8),
                   *(float *)(local_128 + iVar8 + 0x10),*(float *)(local_f8 + iVar2 + 0x10),
                   *(float *)(local_128 + iVar2 + 0x10));
        piVar10 = piVar10 + 2;
        local_114 = (float)((int)local_114 + -1);
      } while (local_114 != 0.0);
      local_114 = 0.0;
    }
    uVar7 = (uint)local_8c & 0x80000001;
    bVar12 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      bVar12 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar12) {
      local_128 = *(CEntity **)((int)this + 0x10c);
      iVar8 = 0;
      if ((*(uint *)(local_128 + 0xc) & *(uint *)((int)this + 0x18)) != 0) {
        EPass::EPass(local_78);
        *(int *)(local_128 + 0x18) = *(int *)(local_128 + 0x18) + 1;
        local_4 = 0;
        if ((local_70 != (CEntity *)0x0) &&
           (*(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + -1,
           *(int *)(local_70 + 0x18) == 0)) {
          CEntity::DeleteSelf(local_70);
        }
        local_6c = 1;
        local_70 = local_128;
        CEntity::SendEvent(*(CEntity **)((int)this + 4),(CEntityEvent *)local_78,0);
        local_f8 = 1;
        local_4 = 0xffffffff;
        EPass::~EPass(local_78);
        iVar8 = local_f8;
      }
      if ((*(uint *)(local_128 + 0xc) & *(uint *)((int)this + 0x1c)) == 0) {
        if (iVar8 == 0) {
          *(float *)((int)this + 0x1c8) = local_124;
          local_120 = *(float *)(param_1 + 0x1c) - local_110;
          local_118 = *(float *)(param_1 + 0x24);
          local_11c = *(float *)(param_1 + 0x20) - local_10c;
          *(float *)((int)this + 0x1dc) = local_120;
          *(float *)((int)this + 0x1e0) = local_11c;
          local_118 = local_118 - local_108;
          pfVar14 = (float *)((int)this + 0x178);
          *(float *)((int)this + 0x1e4) = local_118;
          pfVar13 = local_3c;
          puVar9 = FUN_36059090(pfVar11,(undefined4 *)local_68,(float *)((int)this + 0x184));
          puVar9 = (undefined4 *)FUN_36058f40(puVar9,pfVar13,pfVar14);
          *(undefined4 *)((int)this + 0x1cc) = *puVar9;
          *(undefined4 *)((int)this + 0x1d0) = puVar9[1];
          *(undefined4 *)((int)this + 0x1d4) = puVar9[2];
          *(undefined4 *)((int)this + 0x1d8) = puVar9[3];
          *(undefined4 *)((int)this + 0x1c0) = *(undefined4 *)((int)this + 0x10c);
          *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)((int)this + 0x110);
        }
      }
      else {
        EPass::EPass((EPass *)&local_88);
        pCVar3 = *(CEntity **)((int)this + 4);
        local_4 = 1;
        if (pCVar3 != (CEntity *)0x0) {
          *(int *)(pCVar3 + 0x18) = *(int *)(pCVar3 + 0x18) + 1;
        }
        if ((local_80 != (CEntity *)0x0) &&
           (iVar8 = *(int *)(local_80 + 0x18), *(int *)(local_80 + 0x18) = iVar8 + -1,
           iVar8 + -1 == 0)) {
          CEntity::DeleteSelf(local_80);
        }
        local_7c = 0;
        local_80 = pCVar3;
        CEntity::SendEvent(local_128,(CEntityEvent *)&local_88,0);
        local_4 = 0xffffffff;
        EPass::~EPass((EPass *)&local_88);
      }
    }
  }
  local_100 = param_2 + 1;
  local_104 = 0.0;
  local_4 = 2;
  if (0 < *local_100) {
    do {
      CBrushPolygonEdge::GetVertexCoordinatesRelative
                ((CBrushPolygonEdge *)(local_100[1] + (int)local_104 * 8),
                 (Vector<float,3> *)&local_110,(Vector<float,3> *)local_78);
      FUN_360d1da0(this,pfVar1,(float *)(param_1 + 0x1c),&local_110,(float *)local_78,
                   *(float *)(param_1 + 0xc));
      local_e8 = *pfVar1 - local_110;
      local_e4 = *(float *)(param_1 + 0x14) - local_10c;
      local_e0 = *(float *)(param_1 + 0x18) - local_108;
      fVar5 = *(float *)(param_1 + 0x1c) - *pfVar1;
      local_11c = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x14);
      local_118 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x18);
      fVar6 = _DAT_36223384 / (fVar5 * fVar5 + local_11c * local_11c + local_118 * local_118);
      local_128 = (CEntity *)
                  ((local_e8 * fVar5 + local_e4 * local_11c + local_e0 * local_118) * fVar6);
      fVar6 = (float)local_128 * (float)local_128 -
              ((local_e8 * local_e8 + local_e4 * local_e4 + local_e0 * local_e0) -
              *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc)) * fVar6;
      local_120 = fVar5;
      local_dc = local_e8;
      local_d8 = local_e4;
      local_d4 = local_e0;
      local_a0 = fVar5;
      local_9c = local_11c;
      local_98 = local_118;
      if (_DAT_3622376c <= fVar6) {
        fVar6 = SQRT(fVar6);
        local_114 = fVar6 - (float)local_128;
        fVar6 = -(float)local_128 - fVar6;
        local_124 = local_114;
        if (fVar6 < local_114) {
          local_124 = fVar6;
        }
        if ((_DAT_3622376c < local_124 != (_DAT_3622376c == local_124)) &&
           (local_124 < *(float *)((int)this + 0x1c8))) {
          pCVar3 = *(CEntity **)((int)this + 0x10c);
          iVar8 = 0;
          if ((*(uint *)(pCVar3 + 0xc) & *(uint *)((int)this + 0x18)) != 0) {
            EPass::EPass(local_58);
            *(int *)(pCVar3 + 0x18) = *(int *)(pCVar3 + 0x18) + 1;
            local_4._0_1_ = 3;
            if ((local_50 != (CEntity *)0x0) &&
               (iVar8 = *(int *)(local_50 + 0x18), *(int *)(local_50 + 0x18) = iVar8 + -1,
               iVar8 + -1 == 0)) {
              CEntity::DeleteSelf(local_50);
            }
            local_4c = 1;
            local_50 = pCVar3;
            CEntity::SendEvent(*(CEntity **)((int)this + 4),(CEntityEvent *)local_58,0);
            local_f8 = 1;
            local_4 = CONCAT31(local_4._1_3_,2);
            EPass::~EPass(local_58);
            iVar8 = local_f8;
          }
          if ((*(uint *)(pCVar3 + 0xc) & *(uint *)((int)this + 0x1c)) == 0) {
            if (iVar8 == 0) {
              local_bc = _DAT_36223384 - local_124;
              local_c4 = fVar5 * local_bc;
              *(float *)((int)this + 0x1c8) = local_124;
              local_c0 = local_11c * local_bc;
              local_bc = local_118 * local_bc;
              local_94 = local_c4 * *(float *)((int)this + 0x184) +
                         local_bc * *(float *)((int)this + 0x18c) +
                         local_c0 * *(float *)((int)this + 0x188);
              local_90 = local_bc * *(float *)((int)this + 0x198) +
                         local_c0 * *(float *)((int)this + 0x194) +
                         local_c4 * *(float *)((int)this + 400);
              *(float *)((int)this + 0x1dc) = local_94;
              *(float *)((int)this + 0x1e0) = local_90;
              local_8c = local_bc * *(float *)((int)this + 0x1a4) +
                         local_c0 * *(float *)((int)this + 0x1a0) +
                         local_c4 * *(float *)((int)this + 0x19c);
              *(float *)((int)this + 0x1e4) = local_8c;
              local_f4 = fVar5 * local_124;
              local_f0 = local_11c * local_124;
              local_ec = local_118 * local_124;
              local_d0 = local_f4 + *pfVar1;
              local_cc = local_f0 + *(float *)(param_1 + 0x14);
              local_c8 = local_ec + *(float *)(param_1 + 0x18);
              local_b8 = local_d0 - local_110;
              local_b4 = local_cc - local_10c;
              local_b0 = (CEntity *)(local_c8 - local_108);
              local_ac = local_c4;
              local_a8 = local_c0;
              local_a4 = local_bc;
              local_88 = local_b8;
              local_84 = local_b4;
              local_80 = local_b0;
              local_48 = local_d0;
              local_44 = local_cc;
              local_40 = local_c8;
              FUN_3605f8b0(local_3c,&local_88,&local_48);
              pfVar11 = (float *)((int)this + 0x178);
              pfVar14 = local_2c;
              puVar9 = FUN_36059090(local_3c,local_1c,(float *)((int)this + 0x184));
              puVar9 = (undefined4 *)FUN_36058f40(puVar9,pfVar14,pfVar11);
              *(undefined4 *)((int)this + 0x1cc) = *puVar9;
              *(undefined4 *)((int)this + 0x1d0) = puVar9[1];
              *(undefined4 *)((int)this + 0x1d4) = puVar9[2];
              *(undefined4 *)((int)this + 0x1d8) = puVar9[3];
              *(undefined4 *)((int)this + 0x1c0) = *(undefined4 *)((int)this + 0x10c);
              *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)((int)this + 0x110);
            }
          }
          else {
            EPass::EPass(local_68);
            pCVar4 = *(CEntity **)((int)this + 4);
            local_4._0_1_ = 4;
            if (pCVar4 != (CEntity *)0x0) {
              *(int *)(pCVar4 + 0x18) = *(int *)(pCVar4 + 0x18) + 1;
            }
            if ((local_60 != (CEntity *)0x0) &&
               (iVar8 = *(int *)(local_60 + 0x18), *(int *)(local_60 + 0x18) = iVar8 + -1,
               iVar8 + -1 == 0)) {
              CEntity::DeleteSelf(local_60);
            }
            local_5c = 0;
            local_60 = pCVar4;
            CEntity::SendEvent(pCVar3,(CEntityEvent *)local_68,0);
            local_4 = CONCAT31(local_4._1_3_,2);
            EPass::~EPass(local_68);
          }
        }
      }
      local_104 = (float)((int)local_104 + 1);
    } while ((int)local_104 < *local_100);
  }
  ExceptionList = local_c;
  return;
}

