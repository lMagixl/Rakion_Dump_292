
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBrushSector::SubdivideTriangles(class CSelection<class
   CBrushPolygon,256> &) */

void __thiscall
CBrushSector::SubdivideTriangles(CBrushSector *this,CSelection<class_CBrushPolygon,256> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  CBrushPolygon *this_00;
  CBrushPolygon *pCVar13;
  undefined4 *puVar14;
  void *pvVar15;
  CBrushPolygon *this_01;
  int local_114;
  CBrushPolygon *local_10c;
  CBrushVertex *local_108;
  CAnimObject *local_104;
  int *local_100;
  CAnimObject *local_fc;
  CAnimObject *local_f8;
  CBrushPolygon *local_ec;
  CAnimObject *local_e4;
  CBrushPolygon *local_e0;
  CBrushPolygon *local_dc;
  CAnimObject *local_d8;
  CBrushPolygon *local_d4;
  CAnimObject *local_d0;
  CBrushPolygon *local_cc;
  CAnimObject *local_c8;
  CAnimObject *local_c4;
  CBrushPolygon *local_c0;
  int local_bc;
  int *local_b8;
  CBrushPolygon *local_b4;
  int local_b0;
  CBrushPolygon *local_ac;
  CBrushPolygon *local_a8;
  CBrushPolygon *local_a4;
  CBrushPolygon *local_a0;
  CBrushPolygon *local_9c;
  CBrushPolygon *local_98;
  CBrushPolygon *local_94;
  int local_90;
  void *local_8c;
  int local_88;
  void *local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  CBrushSector *local_64;
  double local_60;
  double local_58;
  double local_50;
  float local_48;
  float local_44;
  float local_40;
  double local_3c;
  double local_34;
  double local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13e3d0  3702
                       ?SubdivideTriangles@CBrushSector@@QAEXAAV?$CSelection@VCBrushPolygon@@$0BAA@@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219904;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_360cb720((int)param_1);
  CWorld::ClearMarkedForUseFlag
            (*(CWorld **)(*(int *)(*(int *)(*(int *)(this + 0x38) + 0x14) + 0x668) + 0xa8));
  local_b0 = 0;
  iVar3 = FUN_360cb720((int)param_1);
  if (0 < iVar3) {
    do {
      iVar3 = FUN_360cb0a0(param_1,local_b0);
      *(uint *)(iVar3 + 200) = *(uint *)(iVar3 + 200) | 0x80000000;
      iVar3 = FUN_360cb0a0(param_1,local_b0);
      iVar3 = FUN_3600bef0((undefined4 *)(iVar3 + 0x14));
      if (iVar3 != 3) {
        ExceptionList = local_c;
        return;
      }
      local_b0 = local_b0 + 1;
      iVar3 = FUN_360cb720((int)param_1);
    } while (local_b0 < iVar3);
  }
  FUN_360ccd60((undefined4 *)param_1);
  local_88 = 0;
  local_84 = (void *)0x0;
  local_bc = 0;
  local_b8 = (int *)0x0;
  local_90 = 0;
  local_8c = (void *)0x0;
  local_b0 = 0;
  local_ac = (CBrushPolygon *)0x0;
  local_4 = 3;
  iVar3 = FUN_360fac30((undefined4 *)this);
  iVar4 = FUN_360d6960((undefined4 *)(this + 8));
  iVar5 = FUN_360d69b0((undefined4 *)(this + 0x18));
  FUN_360d6d80(&local_bc,iVar2 + iVar3);
  FUN_361377b0(&local_88,iVar2 + iVar3);
  FUN_360d6800(&local_90,iVar4 + iVar2 * 6);
  FUN_360d7250(&local_b0,(iVar5 - iVar2) + iVar2 * 3);
  iVar2 = 0;
  local_10c = (CBrushPolygon *)0x0;
  if (0 < iVar3) {
    iVar11 = 0;
    iVar5 = iVar3;
    do {
      puVar10 = (undefined4 *)(*(int *)(this + 4) + iVar2);
      puVar14 = (undefined4 *)(iVar2 + (int)local_b8);
      for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar10 = (undefined4 *)(*(int *)(this + 0x24) + iVar11);
      puVar14 = (undefined4 *)((int)local_84 + iVar11);
      *puVar14 = *puVar10;
      puVar14[1] = puVar10[1];
      iVar2 = iVar2 + 0x48;
      iVar11 = iVar11 + 0xc;
      iVar5 = iVar5 + -1;
      puVar14[2] = puVar10[2];
      local_10c = (CBrushPolygon *)iVar3;
    } while (iVar5 != 0);
  }
  iVar3 = 0;
  iVar2 = FUN_360fac30(&local_bc);
  pvVar15 = local_84;
  piVar7 = local_b8;
  if (0 < iVar2) {
    do {
      *piVar7 = (int)pvVar15;
      iVar3 = iVar3 + 1;
      iVar2 = FUN_360fac30(&local_bc);
      pvVar15 = (void *)((int)pvVar15 + 0xc);
      piVar7 = piVar7 + 0x12;
    } while (iVar3 < iVar2);
  }
  iVar2 = 0;
  if (0 < iVar4) {
    iVar3 = 0;
    local_114 = iVar4;
    do {
      iVar2 = *(int *)(this + 0xc);
      iVar5 = FUN_360d67e0(this,*(int *)(iVar3 + iVar2));
      iVar2 = FUN_360d67e0(this,*(int *)(iVar3 + iVar2 + 4));
      *(int **)((int)local_8c + iVar3) = local_b8 + iVar5 * 0x12;
      *(int **)((int)local_8c + iVar3 + 4) = local_b8 + iVar2 * 0x12;
      iVar3 = iVar3 + 0xc;
      local_114 = local_114 + -1;
      iVar2 = iVar4;
    } while (local_114 != 0);
  }
  local_64 = this + 0x18;
  local_68 = 0;
  local_4._0_1_ = 4;
  if (0 < *(int *)local_64) {
    local_108 = (CBrushVertex *)(local_b8 + (int)local_10c * 0x12);
    local_cc = local_ac + 0x188;
    local_f8 = (CAnimObject *)(local_ac + 0x8c);
    local_104 = (CAnimObject *)(local_ac + 0x54);
    local_fc = (CAnimObject *)(local_ac + 0x1c);
    local_c0 = local_ac + 8;
    local_100 = (int *)((int)local_8c + iVar2 * 0xc + 0x10);
    local_10c = local_ac + 0x528;
    local_d0 = (CAnimObject *)(local_ac + 0x42c);
    local_b4 = local_ac + 0x3f4;
    local_d8 = (CAnimObject *)(local_ac + 0x3bc);
    local_98 = local_ac + 0x358;
    local_c8 = (CAnimObject *)(local_ac + 0x25c);
    local_e4 = (CAnimObject *)(local_ac + 0x224);
    local_c4 = (CAnimObject *)(local_ac + 0x1ec);
    local_d4 = local_ac + 0xa4;
    local_dc = local_ac + 0x6c;
    local_e0 = local_ac + 0x34;
    local_ec = local_ac + 0x444;
    local_9c = local_ac + 0x40c;
    local_a4 = local_ac + 0x3d4;
    local_94 = local_ac + 0x274;
    local_a0 = local_ac + 0x23c;
    local_a8 = local_ac + 0x204;
    pCVar13 = local_ac + 0x3a0;
    this_01 = local_ac + 0x1d0;
    this_00 = local_ac;
    do {
      puVar10 = (undefined4 *)(local_68 * 0x1d0 + *(int *)(local_64 + 4));
      if (*(int *)(local_68 * 0x1d0 + 200 + *(int *)(local_64 + 4)) < 0) {
        piVar7 = (int *)puVar10[6];
        iVar2 = piVar7[1];
        iVar3 = piVar7[2];
        iVar4 = FUN_360d67e0(this,*(int *)(puVar10[4] + *piVar7 * 4));
        iVar2 = FUN_360d67e0(this,*(int *)(puVar10[4] + iVar2 * 4));
        iVar3 = FUN_360d67e0(this,*(int *)(puVar10[4] + iVar3 * 4));
        piVar7 = local_b8 + iVar4 * 0x12;
        piVar12 = local_b8 + iVar2 * 0x12;
        piVar1 = local_b8 + iVar3 * 0x12;
        *(CBrushSector **)(local_108 + 0x40) = this;
        local_74 = (float)piVar7[1] + (float)piVar12[1];
        local_70 = (float)piVar7[2] + (float)piVar12[2];
        local_6c = (float)piVar7[3] + (float)piVar12[3];
        local_80 = local_74 + (float)piVar1[1];
        local_7c = local_70 + (float)piVar1[2];
        local_78 = local_6c + (float)piVar1[3];
        local_3c = (double)local_80;
        local_34 = (double)local_7c;
        local_2c = (double)local_78;
        local_60 = local_3c * _DAT_36238ab0;
        local_58 = local_34 * _DAT_36238ab0;
        local_50 = local_2c * _DAT_36238ab0;
        local_48 = local_80;
        local_44 = local_7c;
        local_40 = local_78;
        local_24 = local_60;
        local_1c = local_58;
        local_14 = local_50;
        CBrushVertex::SetAbsolutePosition(local_108,(Vector<double,3> *)&local_24);
        local_100[-4] = (int)piVar7;
        local_100[-3] = (int)piVar12;
        local_100[-1] = (int)piVar12;
        *local_100 = (int)piVar1;
        local_100[2] = (int)piVar1;
        local_100[3] = (int)piVar7;
        local_100[5] = (int)piVar7;
        local_100[6] = (int)local_108;
        local_100[8] = (int)piVar12;
        local_100[9] = (int)local_108;
        local_100[0xb] = (int)piVar1;
        local_100[0xc] = (int)local_108;
        *(undefined4 *)(this_00 + 4) = 3;
        uVar6 = thunk_FUN_361bf99c(0x20);
        *(undefined4 *)(this_00 + 8) = uVar6;
        **(undefined4 **)local_c0 = local_100 + -4;
        *(undefined4 *)(*(int *)local_c0 + 4) = 0;
        *(int **)(*(int *)local_c0 + 8) = local_100 + 8;
        *(undefined4 *)(*(int *)local_c0 + 0xc) = 0;
        *(int **)(*(int *)local_c0 + 0x10) = local_100 + 5;
        *(undefined4 *)(*(int *)local_c0 + 0x14) = 1;
        *(undefined4 *)(this_00 + 0xc) = 3;
        piVar8 = (int *)thunk_FUN_361bf99c(0x10);
        *(int **)(this_00 + 0x10) = piVar8;
        *piVar8 = (int)piVar7;
        *(int **)(*(int *)(this_00 + 0x10) + 4) = piVar12;
        *(CBrushVertex **)(*(int *)(this_00 + 0x10) + 8) = local_108;
        *(undefined4 *)(this_00 + 0x14) = 3;
        puVar14 = (undefined4 *)thunk_FUN_361bf99c(0x10);
        *(undefined4 **)(this_00 + 0x18) = puVar14;
        *puVar14 = 0;
        *(undefined4 *)(*(int *)(this_00 + 0x18) + 4) = 1;
        *(undefined4 *)(*(int *)(this_00 + 0x18) + 8) = 2;
        *(undefined4 *)this_00 = *puVar10;
        CAnimObject::SetData(local_fc,(CAnimData *)puVar10[0xc]);
        local_fc[0x30] = *(CAnimObject *)(puVar10 + 0x13);
        local_fc[0x31] = *(CAnimObject *)((int)puVar10 + 0x4d);
        local_fc[0x32] = *(CAnimObject *)((int)puVar10 + 0x4e);
        local_fc[0x33] = *(CAnimObject *)((int)puVar10 + 0x4f);
        *(undefined4 *)(local_fc + 0x34) = puVar10[0x14];
        *(undefined4 *)local_e0 = puVar10[0xd];
        *(undefined4 *)(local_e0 + 4) = puVar10[0xe];
        *(undefined4 *)(local_e0 + 8) = puVar10[0xf];
        *(undefined4 *)(local_e0 + 0xc) = puVar10[0x10];
        *(undefined4 *)(local_e0 + 0x10) = puVar10[0x11];
        *(undefined4 *)(local_e0 + 0x14) = puVar10[0x12];
        CAnimObject::SetData(local_104,(CAnimData *)puVar10[0x1a]);
        local_104[0x30] = *(CAnimObject *)(puVar10 + 0x21);
        local_104[0x31] = *(CAnimObject *)((int)puVar10 + 0x85);
        local_104[0x32] = *(CAnimObject *)((int)puVar10 + 0x86);
        local_104[0x33] = *(CAnimObject *)((int)puVar10 + 0x87);
        *(undefined4 *)(local_104 + 0x34) = puVar10[0x22];
        *(undefined4 *)local_dc = puVar10[0x1b];
        *(undefined4 *)(local_dc + 4) = puVar10[0x1c];
        *(undefined4 *)(local_dc + 8) = puVar10[0x1d];
        *(undefined4 *)(local_dc + 0xc) = puVar10[0x1e];
        *(undefined4 *)(local_dc + 0x10) = puVar10[0x1f];
        *(undefined4 *)(local_dc + 0x14) = puVar10[0x20];
        CAnimObject::SetData(local_f8,(CAnimData *)puVar10[0x28]);
        local_f8[0x30] = *(CAnimObject *)(puVar10 + 0x2f);
        local_f8[0x31] = *(CAnimObject *)((int)puVar10 + 0xbd);
        local_f8[0x32] = *(CAnimObject *)((int)puVar10 + 0xbe);
        local_f8[0x33] = *(CAnimObject *)((int)puVar10 + 0xbf);
        *(undefined4 *)(local_f8 + 0x34) = puVar10[0x30];
        *(undefined4 *)local_d4 = puVar10[0x29];
        *(undefined4 *)(local_d4 + 4) = puVar10[0x2a];
        *(undefined4 *)(local_d4 + 8) = puVar10[0x2b];
        *(undefined4 *)(local_d4 + 0xc) = puVar10[0x2c];
        *(undefined4 *)(local_d4 + 0x10) = puVar10[0x2d];
        *(undefined4 *)(local_d4 + 0x14) = puVar10[0x2e];
        *(undefined4 *)(this_00 + 0xc4) = puVar10[0x31];
        *(uint *)(this_00 + 200) = puVar10[0x32] & 0x7ffffeff;
        *(undefined4 *)(this_00 + 0xcc) = puVar10[0x33];
        *(undefined4 *)local_cc = puVar10[0x62];
        *(undefined4 *)(local_cc + 4) = puVar10[99];
        *(undefined4 *)(this_00 + 0x1ac) = puVar10[0x6b];
        CBrushPolygon::InitializeShadowMap(this_00);
        *(undefined4 *)(this_01 + 4) = 3;
        piVar8 = (int *)thunk_FUN_361bf99c(0x20);
        *(int **)(this_01 + 8) = piVar8;
        *piVar8 = (int)(local_100 + -1);
        *(undefined4 *)(*(int *)(this_01 + 8) + 4) = 0;
        *(int **)(*(int *)(this_01 + 8) + 8) = local_100 + 0xb;
        *(undefined4 *)(*(int *)(this_01 + 8) + 0xc) = 0;
        *(int **)(*(int *)(this_01 + 8) + 0x10) = local_100 + 8;
        *(undefined4 *)(*(int *)(this_01 + 8) + 0x14) = 1;
        *(undefined4 *)(this_01 + 0xc) = 3;
        piVar8 = (int *)thunk_FUN_361bf99c(0x10);
        *(int **)(this_01 + 0x10) = piVar8;
        *piVar8 = (int)piVar12;
        *(int **)(*(int *)(this_01 + 0x10) + 4) = piVar1;
        *(CBrushVertex **)(*(int *)(this_01 + 0x10) + 8) = local_108;
        *(undefined4 *)(this_01 + 0x14) = 3;
        puVar14 = (undefined4 *)thunk_FUN_361bf99c(0x10);
        *(undefined4 **)(this_01 + 0x18) = puVar14;
        *puVar14 = 0;
        *(undefined4 *)(*(int *)(this_01 + 0x18) + 4) = 1;
        *(undefined4 *)(*(int *)(this_01 + 0x18) + 8) = 2;
        *(undefined4 *)this_01 = *puVar10;
        CAnimObject::SetData(local_c4,(CAnimData *)puVar10[0xc]);
        local_c4[0x30] = *(CAnimObject *)(puVar10 + 0x13);
        local_c4[0x31] = *(CAnimObject *)((int)puVar10 + 0x4d);
        local_c4[0x32] = *(CAnimObject *)((int)puVar10 + 0x4e);
        local_c4[0x33] = *(CAnimObject *)((int)puVar10 + 0x4f);
        *(undefined4 *)(local_c4 + 0x34) = puVar10[0x14];
        *(undefined4 *)local_a8 = puVar10[0xd];
        *(undefined4 *)(local_a8 + 4) = puVar10[0xe];
        *(undefined4 *)(local_a8 + 8) = puVar10[0xf];
        *(undefined4 *)(local_a8 + 0xc) = puVar10[0x10];
        *(undefined4 *)(local_a8 + 0x10) = puVar10[0x11];
        *(undefined4 *)(local_a8 + 0x14) = puVar10[0x12];
        CAnimObject::SetData(local_e4,(CAnimData *)puVar10[0x1a]);
        local_e4[0x30] = *(CAnimObject *)(puVar10 + 0x21);
        local_e4[0x31] = *(CAnimObject *)((int)puVar10 + 0x85);
        local_e4[0x32] = *(CAnimObject *)((int)puVar10 + 0x86);
        local_e4[0x33] = *(CAnimObject *)((int)puVar10 + 0x87);
        *(undefined4 *)(local_e4 + 0x34) = puVar10[0x22];
        *(undefined4 *)local_a0 = puVar10[0x1b];
        *(undefined4 *)(local_a0 + 4) = puVar10[0x1c];
        *(undefined4 *)(local_a0 + 8) = puVar10[0x1d];
        *(undefined4 *)(local_a0 + 0xc) = puVar10[0x1e];
        *(undefined4 *)(local_a0 + 0x10) = puVar10[0x1f];
        *(undefined4 *)(local_a0 + 0x14) = puVar10[0x20];
        CAnimObject::SetData(local_c8,(CAnimData *)puVar10[0x28]);
        local_c8[0x30] = *(CAnimObject *)(puVar10 + 0x2f);
        local_c8[0x31] = *(CAnimObject *)((int)puVar10 + 0xbd);
        local_c8[0x32] = *(CAnimObject *)((int)puVar10 + 0xbe);
        local_c8[0x33] = *(CAnimObject *)((int)puVar10 + 0xbf);
        *(undefined4 *)(local_c8 + 0x34) = puVar10[0x30];
        *(undefined4 *)local_94 = puVar10[0x29];
        *(undefined4 *)(local_94 + 4) = puVar10[0x2a];
        *(undefined4 *)(local_94 + 8) = puVar10[0x2b];
        *(undefined4 *)(local_94 + 0xc) = puVar10[0x2c];
        *(undefined4 *)(local_94 + 0x10) = puVar10[0x2d];
        *(undefined4 *)(local_94 + 0x14) = puVar10[0x2e];
        *(undefined4 *)(this_01 + 0xc4) = puVar10[0x31];
        *(uint *)(this_01 + 200) = puVar10[0x32] & 0x7ffffeff;
        *(undefined4 *)(this_01 + 0xcc) = puVar10[0x33];
        *(undefined4 *)local_98 = puVar10[0x62];
        *(undefined4 *)(local_98 + 4) = puVar10[99];
        *(undefined4 *)(this_01 + 0x1ac) = puVar10[0x6b];
        CBrushPolygon::InitializeShadowMap(this_01);
        *(undefined4 *)(pCVar13 + 4) = 3;
        piVar12 = (int *)thunk_FUN_361bf99c(0x20);
        *(int **)(pCVar13 + 8) = piVar12;
        *piVar12 = (int)(local_100 + 2);
        *(undefined4 *)(*(int *)(pCVar13 + 8) + 4) = 0;
        *(int **)(*(int *)(pCVar13 + 8) + 8) = local_100 + 5;
        *(undefined4 *)(*(int *)(pCVar13 + 8) + 0xc) = 0;
        *(int **)(*(int *)(pCVar13 + 8) + 0x10) = local_100 + 0xb;
        *(undefined4 *)(*(int *)(pCVar13 + 8) + 0x14) = 1;
        *(undefined4 *)(pCVar13 + 0xc) = 3;
        piVar12 = (int *)thunk_FUN_361bf99c(0x10);
        *(int **)(pCVar13 + 0x10) = piVar12;
        *piVar12 = (int)piVar1;
        *(int **)(*(int *)(pCVar13 + 0x10) + 4) = piVar7;
        *(CBrushVertex **)(*(int *)(pCVar13 + 0x10) + 8) = local_108;
        *(undefined4 *)(pCVar13 + 0x14) = 3;
        puVar14 = (undefined4 *)thunk_FUN_361bf99c(0x10);
        *(undefined4 **)(pCVar13 + 0x18) = puVar14;
        *puVar14 = 0;
        *(undefined4 *)(*(int *)(pCVar13 + 0x18) + 4) = 1;
        *(undefined4 *)(*(int *)(pCVar13 + 0x18) + 8) = 2;
        *(undefined4 *)pCVar13 = *puVar10;
        CAnimObject::SetData(local_d8,(CAnimData *)puVar10[0xc]);
        local_d8[0x30] = *(CAnimObject *)(puVar10 + 0x13);
        local_d8[0x31] = *(CAnimObject *)((int)puVar10 + 0x4d);
        local_d8[0x32] = *(CAnimObject *)((int)puVar10 + 0x4e);
        local_d8[0x33] = *(CAnimObject *)((int)puVar10 + 0x4f);
        *(undefined4 *)(local_d8 + 0x34) = puVar10[0x14];
        *(undefined4 *)local_a4 = puVar10[0xd];
        *(undefined4 *)(local_a4 + 4) = puVar10[0xe];
        *(undefined4 *)(local_a4 + 8) = puVar10[0xf];
        *(undefined4 *)(local_a4 + 0xc) = puVar10[0x10];
        *(undefined4 *)(local_a4 + 0x10) = puVar10[0x11];
        *(undefined4 *)(local_a4 + 0x14) = puVar10[0x12];
        CAnimObject::SetData((CAnimObject *)local_b4,(CAnimData *)puVar10[0x1a]);
        local_b4[0x30] = *(CBrushPolygon *)(puVar10 + 0x21);
        local_b4[0x31] = *(CBrushPolygon *)((int)puVar10 + 0x85);
        local_b4[0x32] = *(CBrushPolygon *)((int)puVar10 + 0x86);
        local_b4[0x33] = *(CBrushPolygon *)((int)puVar10 + 0x87);
        *(undefined4 *)(local_b4 + 0x34) = puVar10[0x22];
        *(undefined4 *)local_9c = puVar10[0x1b];
        *(undefined4 *)(local_9c + 4) = puVar10[0x1c];
        *(undefined4 *)(local_9c + 8) = puVar10[0x1d];
        *(undefined4 *)(local_9c + 0xc) = puVar10[0x1e];
        *(undefined4 *)(local_9c + 0x10) = puVar10[0x1f];
        *(undefined4 *)(local_9c + 0x14) = puVar10[0x20];
        CAnimObject::SetData(local_d0,(CAnimData *)puVar10[0x28]);
        local_d0[0x30] = *(CAnimObject *)(puVar10 + 0x2f);
        local_d0[0x31] = *(CAnimObject *)((int)puVar10 + 0xbd);
        local_d0[0x32] = *(CAnimObject *)((int)puVar10 + 0xbe);
        local_d0[0x33] = *(CAnimObject *)((int)puVar10 + 0xbf);
        *(undefined4 *)(local_d0 + 0x34) = puVar10[0x30];
        *(undefined4 *)local_ec = puVar10[0x29];
        *(undefined4 *)(local_ec + 4) = puVar10[0x2a];
        *(undefined4 *)(local_ec + 8) = puVar10[0x2b];
        *(undefined4 *)(local_ec + 0xc) = puVar10[0x2c];
        *(undefined4 *)(local_ec + 0x10) = puVar10[0x2d];
        *(undefined4 *)(local_ec + 0x14) = puVar10[0x2e];
        *(undefined4 *)(pCVar13 + 0xc4) = puVar10[0x31];
        *(uint *)(pCVar13 + 200) = puVar10[0x32] & 0x7ffffeff;
        *(undefined4 *)(pCVar13 + 0xcc) = puVar10[0x33];
        *(undefined4 *)local_10c = puVar10[0x62];
        *(undefined4 *)(local_10c + 4) = puVar10[99];
        *(undefined4 *)(pCVar13 + 0x1ac) = puVar10[0x6b];
        CBrushPolygon::InitializeShadowMap(pCVar13);
        local_108 = local_108 + 0x48;
        local_100 = local_100 + 0x12;
        iVar2 = 0x570;
      }
      else {
        *(undefined4 *)this_00 = *puVar10;
        CAnimObject::SetData(local_fc,(CAnimData *)puVar10[0xc]);
        local_fc[0x30] = *(CAnimObject *)(puVar10 + 0x13);
        local_fc[0x31] = *(CAnimObject *)((int)puVar10 + 0x4d);
        local_fc[0x32] = *(CAnimObject *)((int)puVar10 + 0x4e);
        local_fc[0x33] = *(CAnimObject *)((int)puVar10 + 0x4f);
        *(undefined4 *)(local_fc + 0x34) = puVar10[0x14];
        *(undefined4 *)local_e0 = puVar10[0xd];
        *(undefined4 *)(local_e0 + 4) = puVar10[0xe];
        *(undefined4 *)(local_e0 + 8) = puVar10[0xf];
        *(undefined4 *)(local_e0 + 0xc) = puVar10[0x10];
        *(undefined4 *)(local_e0 + 0x10) = puVar10[0x11];
        *(undefined4 *)(local_e0 + 0x14) = puVar10[0x12];
        CAnimObject::SetData(local_104,(CAnimData *)puVar10[0x1a]);
        local_104[0x30] = *(CAnimObject *)(puVar10 + 0x21);
        local_104[0x31] = *(CAnimObject *)((int)puVar10 + 0x85);
        local_104[0x32] = *(CAnimObject *)((int)puVar10 + 0x86);
        local_104[0x33] = *(CAnimObject *)((int)puVar10 + 0x87);
        *(undefined4 *)(local_104 + 0x34) = puVar10[0x22];
        *(undefined4 *)local_dc = puVar10[0x1b];
        *(undefined4 *)(local_dc + 4) = puVar10[0x1c];
        *(undefined4 *)(local_dc + 8) = puVar10[0x1d];
        *(undefined4 *)(local_dc + 0xc) = puVar10[0x1e];
        *(undefined4 *)(local_dc + 0x10) = puVar10[0x1f];
        *(undefined4 *)(local_dc + 0x14) = puVar10[0x20];
        CAnimObject::SetData(local_f8,(CAnimData *)puVar10[0x28]);
        local_f8[0x30] = *(CAnimObject *)(puVar10 + 0x2f);
        local_f8[0x31] = *(CAnimObject *)((int)puVar10 + 0xbd);
        local_f8[0x32] = *(CAnimObject *)((int)puVar10 + 0xbe);
        local_f8[0x33] = *(CAnimObject *)((int)puVar10 + 0xbf);
        *(undefined4 *)(local_f8 + 0x34) = puVar10[0x30];
        *(undefined4 *)local_d4 = puVar10[0x29];
        *(undefined4 *)(local_d4 + 4) = puVar10[0x2a];
        *(undefined4 *)(local_d4 + 8) = puVar10[0x2b];
        *(undefined4 *)(local_d4 + 0xc) = puVar10[0x2c];
        *(undefined4 *)(local_d4 + 0x10) = puVar10[0x2d];
        *(undefined4 *)(local_d4 + 0x14) = puVar10[0x2e];
        *(undefined4 *)(this_00 + 0xc4) = puVar10[0x31];
        *(uint *)(this_00 + 200) = puVar10[0x32] & 0x7ffffeff;
        *(undefined4 *)(this_00 + 0xcc) = puVar10[0x33];
        *(undefined4 *)local_cc = puVar10[0x62];
        *(undefined4 *)(local_cc + 4) = puVar10[99];
        *(undefined4 *)(this_00 + 0x1ac) = puVar10[0x6b];
        iVar2 = FUN_3600be20(puVar10 + 1);
        if (iVar2 != 0) {
          *(int *)(this_00 + 4) = iVar2;
          uVar6 = thunk_FUN_361bf99c(iVar2 * 8 + 8);
          *(undefined4 *)(this_00 + 8) = uVar6;
        }
        local_114 = 0;
        if (0 < iVar2) {
          do {
            piVar7 = (int *)(puVar10[2] + local_114 * 8);
            piVar12 = (int *)(*(int *)local_c0 + local_114 * 8);
            iVar3 = FUN_36137140(this + 8,*piVar7);
            *piVar12 = (int)((int)local_8c + iVar3 * 0xc);
            piVar12[1] = piVar7[1];
            local_114 = local_114 + 1;
          } while (local_114 < iVar2);
        }
        *(undefined4 *)(this_00 + 0xc) = 3;
        uVar6 = thunk_FUN_361bf99c(0x10);
        *(undefined4 *)(this_00 + 0x10) = uVar6;
        local_114 = 0;
        do {
          iVar2 = FUN_360d67e0(this,*(int *)(local_114 + puVar10[4]));
          *(int **)(local_114 + *(int *)(this_00 + 0x10)) = local_b8 + iVar2 * 0x12;
          local_114 = local_114 + 4;
        } while (local_114 < 0xc);
        FUN_360100e0(this_00 + 0x14,puVar10 + 5);
        CBrushPolygon::InitializeShadowMap(this_00);
        iVar2 = 0x1d0;
      }
      local_c0 = local_c0 + iVar2;
      local_e0 = local_e0 + iVar2;
      local_fc = local_fc + iVar2;
      local_104 = local_104 + iVar2;
      local_f8 = local_f8 + iVar2;
      local_dc = local_dc + iVar2;
      local_d4 = local_d4 + iVar2;
      local_e4 = local_e4 + iVar2;
      local_cc = local_cc + iVar2;
      local_c4 = local_c4 + iVar2;
      local_94 = local_94 + iVar2;
      local_a8 = local_a8 + iVar2;
      local_a0 = local_a0 + iVar2;
      local_d8 = local_d8 + iVar2;
      local_c8 = local_c8 + iVar2;
      local_98 = local_98 + iVar2;
      local_9c = local_9c + iVar2;
      local_b4 = local_b4 + iVar2;
      local_a4 = local_a4 + iVar2;
      local_10c = local_10c + iVar2;
      local_ec = local_ec + iVar2;
      local_d0 = local_d0 + iVar2;
      this_00 = this_00 + iVar2;
      this_01 = this_01 + iVar2;
      pCVar13 = pCVar13 + iVar2;
      local_68 = local_68 + 1;
    } while (local_68 < *(int *)local_64);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_361405a0(this + 0x20,&local_88);
  FUN_361403e0(this,&local_bc);
  FUN_36140490(this + 8,&local_90);
  FUN_360d7580(this + 0x18,&local_b0);
  iVar2 = FUN_360d6960((undefined4 *)(this + 8));
  iVar3 = 0;
  if (*(int *)(this + 0x30) != 0) {
    operator_delete__(*(void **)(this + 0x34));
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (iVar2 != 0) {
    *(int *)(this + 0x30) = iVar2;
    uVar6 = thunk_FUN_361bf99c(iVar2 * 8 + 8);
    *(undefined4 *)(this + 0x34) = uVar6;
    if (0 < iVar2) {
      local_114 = 0;
      do {
        piVar7 = (int *)(*(int *)(this + 0x34) + iVar3 * 8);
        iVar4 = *(int *)(*(int *)(this + 0xc) + local_114);
        iVar5 = *(int *)(this + 0xc) + local_114;
        *(int **)(iVar5 + 8) = piVar7;
        iVar4 = FUN_360d67e0(this,iVar4);
        *piVar7 = iVar4;
        iVar4 = FUN_360d67e0(this,*(int *)(iVar5 + 4));
        piVar7[1] = iVar4;
        iVar3 = iVar3 + 1;
        local_114 = local_114 + 0xc;
      } while (iVar3 < iVar2);
    }
  }
  MakePlanesFromVertices(this);
  UpdateSector(this);
  local_4 = CONCAT31(local_4._1_3_,2);
  if ((local_b0 != 0) && (local_ac != (CBrushPolygon *)0x0)) {
    pCVar13 = local_ac + -4;
    _eh_vector_destructor_iterator_
              (local_ac,0x1d0,*(int *)(local_ac + -4),CBrushPolygon::~CBrushPolygon);
    operator_delete__(pCVar13);
  }
  if (local_90 != 0) {
    operator_delete__(local_8c);
  }
  if (local_bc != 0) {
    operator_delete__(local_b8);
  }
  local_4 = 0xffffffff;
  if (local_88 != 0) {
    FreeMemoryAligned(local_84);
  }
  ExceptionList = local_c;
  return;
}

