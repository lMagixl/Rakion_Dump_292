
/* public: void __thiscall CBrushSector::ReTriple(class CSelection<class CBrushPolygon,256> &) */

void __thiscall
CBrushSector::ReTriple(CBrushSector *this,CSelection<class_CBrushPolygon,256> *param_1)

{
  void *pvVar1;
  CBrushSector *this_00;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  CBrushSector *pCVar7;
  CSelection<class_CBrushPolygon,256> *pCVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  CSelection<class_CBrushPolygon,256> *pCVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  CBrushPolygon *this_01;
  CSelection<class_CBrushPolygon,256> *local_44;
  CBrushSector *local_40;
  int *local_3c;
  CBrushSector *local_38;
  int *local_34;
  CBrushSector *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  void *local_18;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pCVar8 = param_1;
                    /* 0x13f620  2944
                       ?ReTriple@CBrushSector@@QAEXAAV?$CSelection@VCBrushPolygon@@$0BAA@@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219926;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = this;
  iVar3 = FUN_360cb720((int)param_1);
  if (iVar3 == 2) {
    piVar9 = *(int **)(pCVar8 + 4);
    puVar11 = (undefined4 *)piVar9[1];
    puVar10 = (undefined4 *)*piVar9;
    iVar3 = FUN_3600bef0(puVar10 + 5);
    if ((iVar3 == 3) && (iVar3 = FUN_3600bef0(puVar11 + 5), iVar3 == 3)) {
      CWorld::ClearMarkedForUseFlag
                (*(CWorld **)(*(int *)(*(int *)(*(int *)(this + 0x38) + 0x14) + 0x668) + 0xa8));
      puVar10[0x32] = puVar10[0x32] | 0x80000000;
      puVar11[0x32] = puVar11[0x32] | 0x80000000;
      FUN_360ccd60((undefined4 *)pCVar8);
      local_1c = 0;
      local_18 = (void *)0x0;
      local_14 = 0;
      local_10 = (void *)0x0;
      local_4._0_1_ = 1;
      local_4._1_3_ = 0;
      iVar4 = FUN_360d6960((undefined4 *)(this + 8));
      param_1 = (CSelection<class_CBrushPolygon,256> *)FUN_360d69b0((undefined4 *)(this + 0x18));
      FUN_360d6800(&local_1c,iVar4 + 1);
      FUN_360d7250(&local_14,(int)param_1);
      iVar5 = 0;
      local_28 = (int *)0x0;
      iVar3 = iVar4;
      if (0 < iVar4) {
        do {
          *(undefined4 *)((int)local_18 + iVar5) = *(undefined4 *)(iVar5 + *(int *)(this + 0xc));
          *(undefined4 *)((int)local_18 + iVar5 + 4) =
               *(undefined4 *)(*(int *)(this + 0xc) + 4 + iVar5);
          iVar5 = iVar5 + 0xc;
          iVar3 = iVar3 + -1;
          local_28 = (int *)iVar4;
        } while (iVar3 != 0);
      }
      pCVar7 = this + 0x18;
      local_3c = (int *)0x0;
      local_34 = (int *)0x0;
      local_4._0_1_ = 2;
      piVar9 = (int *)0x0;
      local_30 = pCVar7;
      if (0 < *(int *)pCVar7) {
        puVar13 = (undefined1 *)((int)local_10 + 0x4d);
        do {
          puVar14 = (undefined4 *)(*(int *)(pCVar7 + 4) + (int)local_34 * 0x1d0);
          if (-1 < (int)puVar14[0x32]) {
            *(undefined4 *)(puVar13 + -0x4d) = *puVar14;
            CAnimObject::SetData((CAnimObject *)(puVar13 + -0x31),(CAnimData *)puVar14[0xc]);
            puVar13[-1] = *(undefined1 *)(puVar14 + 0x13);
            *puVar13 = *(undefined1 *)((int)puVar14 + 0x4d);
            puVar13[1] = *(undefined1 *)((int)puVar14 + 0x4e);
            puVar13[2] = *(undefined1 *)((int)puVar14 + 0x4f);
            *(undefined4 *)(puVar13 + 3) = puVar14[0x14];
            *(undefined4 *)(puVar13 + -0x19) = puVar14[0xd];
            *(undefined4 *)(puVar13 + -0x15) = puVar14[0xe];
            *(undefined4 *)(puVar13 + -0x11) = puVar14[0xf];
            *(undefined4 *)(puVar13 + -0xd) = puVar14[0x10];
            *(undefined4 *)(puVar13 + -9) = puVar14[0x11];
            *(undefined4 *)(puVar13 + -5) = puVar14[0x12];
            CAnimObject::SetData((CAnimObject *)(puVar13 + 7),(CAnimData *)puVar14[0x1a]);
            puVar13[0x37] = *(undefined1 *)(puVar14 + 0x21);
            puVar13[0x38] = *(undefined1 *)((int)puVar14 + 0x85);
            puVar13[0x39] = *(undefined1 *)((int)puVar14 + 0x86);
            puVar13[0x3a] = *(undefined1 *)((int)puVar14 + 0x87);
            *(undefined4 *)(puVar13 + 0x3b) = puVar14[0x22];
            *(undefined4 *)(puVar13 + 0x1f) = puVar14[0x1b];
            *(undefined4 *)(puVar13 + 0x23) = puVar14[0x1c];
            *(undefined4 *)(puVar13 + 0x27) = puVar14[0x1d];
            *(undefined4 *)(puVar13 + 0x2b) = puVar14[0x1e];
            *(undefined4 *)(puVar13 + 0x2f) = puVar14[0x1f];
            *(undefined4 *)(puVar13 + 0x33) = puVar14[0x20];
            CAnimObject::SetData((CAnimObject *)(puVar13 + 0x3f),(CAnimData *)puVar14[0x28]);
            puVar13[0x6f] = *(undefined1 *)(puVar14 + 0x2f);
            puVar13[0x70] = *(undefined1 *)((int)puVar14 + 0xbd);
            puVar13[0x71] = *(undefined1 *)((int)puVar14 + 0xbe);
            puVar13[0x72] = *(undefined1 *)((int)puVar14 + 0xbf);
            *(undefined4 *)(puVar13 + 0x73) = puVar14[0x30];
            *(undefined4 *)(puVar13 + 0x57) = puVar14[0x29];
            *(undefined4 *)(puVar13 + 0x5b) = puVar14[0x2a];
            *(undefined4 *)(puVar13 + 0x5f) = puVar14[0x2b];
            *(undefined4 *)(puVar13 + 99) = puVar14[0x2c];
            *(undefined4 *)(puVar13 + 0x67) = puVar14[0x2d];
            *(undefined4 *)(puVar13 + 0x6b) = puVar14[0x2e];
            *(undefined4 *)(puVar13 + 0x77) = puVar14[0x31];
            *(uint *)(puVar13 + 0x7b) = puVar14[0x32] & 0x7ffffeff;
            *(undefined4 *)(puVar13 + 0x7f) = puVar14[0x33];
            *(undefined4 *)(puVar13 + 0x13b) = puVar14[0x62];
            *(undefined4 *)(puVar13 + 0x13f) = puVar14[99];
            *(undefined4 *)(puVar13 + 0x15f) = puVar14[0x6b];
            local_2c = (int *)FUN_3600be20(puVar14 + 1);
            if (local_2c != (int *)0x0) {
              *(int **)(puVar13 + -0x49) = local_2c;
              uVar6 = thunk_FUN_361bf99c((int)local_2c * 8 + 8);
              *(undefined4 *)(puVar13 + -0x45) = uVar6;
            }
            param_1 = (CSelection<class_CBrushPolygon,256> *)0x0;
            if (0 < (int)local_2c) {
              do {
                local_20 = (int *)(*(int *)(puVar13 + -0x45) + (int)param_1 * 8);
                local_24 = (int *)(puVar14[2] + (int)param_1 * 8);
                iVar3 = FUN_36137140(local_38 + 8,*local_24);
                *local_20 = (int)((int)local_18 + iVar3 * 0xc);
                local_20[1] = local_24[1];
                param_1 = param_1 + 1;
              } while ((int)param_1 < (int)local_2c);
            }
            param_1 = (CSelection<class_CBrushPolygon,256> *)FUN_3600bea0(puVar14 + 3);
            if (param_1 != (CSelection<class_CBrushPolygon,256> *)0x0) {
              *(CSelection<class_CBrushPolygon,256> **)(puVar13 + -0x41) = param_1;
              uVar6 = thunk_FUN_361bf99c((int)param_1 * 4 + 4);
              *(undefined4 *)(puVar13 + -0x3d) = uVar6;
            }
            iVar3 = 0;
            if (0 < (int)param_1) {
              do {
                *(undefined4 *)(*(int *)(puVar13 + -0x3d) + iVar3 * 4) =
                     *(undefined4 *)(puVar14[4] + iVar3 * 4);
                iVar3 = iVar3 + 1;
              } while (iVar3 < (int)param_1);
            }
            FUN_360100e0(puVar13 + -0x39,puVar14 + 5);
            CBrushPolygon::InitializeShadowMap((CBrushPolygon *)(puVar13 + -0x4d));
            local_3c = (int *)((int)local_3c + 1);
            puVar13 = puVar13 + 0x1d0;
            pCVar7 = local_30;
          }
          local_34 = (int *)((int)local_34 + 1);
          this = local_38;
          piVar9 = local_3c;
        } while ((int)local_34 < *(int *)pCVar7);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      local_3c = (int *)0x0;
      FUN_3613c670((int)puVar10,(int)puVar11,(int *)&local_3c);
      local_20 = (int *)local_3c[1];
      local_24 = (int *)*local_3c;
      FUN_3613c750((int)puVar10,(int)puVar11,local_3c,(int)local_24,(int *)&local_44,(int *)&param_1
                  );
      local_40 = this + 8;
      iVar3 = FUN_36137140(local_40,*(int *)local_44);
      pvVar1 = local_18;
      *(void **)local_44 = (void *)((int)local_18 + iVar3 * 0xc);
      iVar3 = FUN_36137140(local_40,*(int *)param_1);
      *(void **)param_1 = (void *)((int)pvVar1 + iVar3 * 0xc);
      FUN_3613c750((int)puVar10,(int)puVar11,local_3c,(int)local_20,(int *)&local_34,
                   (int *)&local_2c);
      iVar3 = FUN_36137140(local_40,*local_34);
      *local_34 = (int)((int)pvVar1 + iVar3 * 0xc);
      iVar3 = FUN_36137140(local_40,*local_2c);
      *local_2c = (int)((int)pvVar1 + iVar3 * 0xc);
      pCVar8 = local_44;
      pCVar12 = param_1;
      if ((((int *)**(int **)local_44 != local_24) || (*(int *)(local_44 + 4) != 0)) &&
         (((int *)(*(int **)local_44)[1] != local_24 || (*(int *)(local_44 + 4) == 0)))) {
        pCVar8 = param_1;
        pCVar12 = local_44;
      }
      local_3c = (int *)**(int **)pCVar8;
      if (local_3c == local_24) {
        local_3c = (int *)(*(int **)pCVar8)[1];
      }
      local_40 = (CBrushSector *)**(int **)pCVar12;
      if (local_40 == (CBrushSector *)local_24) {
        local_40 = (CBrushSector *)(*(int **)pCVar12)[1];
      }
      local_28 = (int *)((int)pvVar1 + (int)local_28 * 0xc);
      *local_28 = (int)local_3c;
      local_28[1] = (int)local_40;
      this_01 = (CBrushPolygon *)((int)piVar9 * 0x1d0 + (int)local_10);
      *(undefined4 *)this_01 = *puVar10;
      CAnimObject::SetData((CAnimObject *)(this_01 + 0x1c),(CAnimData *)puVar10[0xc]);
      this_01[0x4c] = *(CBrushPolygon *)(puVar10 + 0x13);
      this_01[0x4d] = *(CBrushPolygon *)((int)puVar10 + 0x4d);
      this_01[0x4e] = *(CBrushPolygon *)((int)puVar10 + 0x4e);
      this_01[0x4f] = *(CBrushPolygon *)((int)puVar10 + 0x4f);
      *(undefined4 *)(this_01 + 0x50) = puVar10[0x14];
      *(undefined4 *)(this_01 + 0x34) = puVar10[0xd];
      *(undefined4 *)(this_01 + 0x38) = puVar10[0xe];
      *(undefined4 *)(this_01 + 0x3c) = puVar10[0xf];
      *(undefined4 *)(this_01 + 0x40) = puVar10[0x10];
      *(undefined4 *)(this_01 + 0x44) = puVar10[0x11];
      *(undefined4 *)(this_01 + 0x48) = puVar10[0x12];
      CAnimObject::SetData((CAnimObject *)(this_01 + 0x54),(CAnimData *)puVar10[0x1a]);
      this_01[0x84] = *(CBrushPolygon *)(puVar10 + 0x21);
      this_01[0x85] = *(CBrushPolygon *)((int)puVar10 + 0x85);
      this_01[0x86] = *(CBrushPolygon *)((int)puVar10 + 0x86);
      this_01[0x87] = *(CBrushPolygon *)((int)puVar10 + 0x87);
      *(undefined4 *)(this_01 + 0x88) = puVar10[0x22];
      *(undefined4 *)(this_01 + 0x6c) = puVar10[0x1b];
      *(undefined4 *)(this_01 + 0x70) = puVar10[0x1c];
      *(undefined4 *)(this_01 + 0x74) = puVar10[0x1d];
      *(undefined4 *)(this_01 + 0x78) = puVar10[0x1e];
      *(undefined4 *)(this_01 + 0x7c) = puVar10[0x1f];
      *(undefined4 *)(this_01 + 0x80) = puVar10[0x20];
      CAnimObject::SetData((CAnimObject *)(this_01 + 0x8c),(CAnimData *)puVar10[0x28]);
      this_01[0xbc] = *(CBrushPolygon *)(puVar10 + 0x2f);
      this_01[0xbd] = *(CBrushPolygon *)((int)puVar10 + 0xbd);
      this_01[0xbe] = *(CBrushPolygon *)((int)puVar10 + 0xbe);
      this_01[0xbf] = *(CBrushPolygon *)((int)puVar10 + 0xbf);
      *(undefined4 *)(this_01 + 0xc0) = puVar10[0x30];
      *(undefined4 *)(this_01 + 0xa4) = puVar10[0x29];
      *(undefined4 *)(this_01 + 0xa8) = puVar10[0x2a];
      *(undefined4 *)(this_01 + 0xac) = puVar10[0x2b];
      *(undefined4 *)(this_01 + 0xb0) = puVar10[0x2c];
      *(undefined4 *)(this_01 + 0xb4) = puVar10[0x2d];
      *(undefined4 *)(this_01 + 0xb8) = puVar10[0x2e];
      *(undefined4 *)(this_01 + 0xc4) = puVar10[0x31];
      *(uint *)(this_01 + 200) = puVar10[0x32] & 0x7ffffeff;
      *(undefined4 *)(this_01 + 0xcc) = puVar10[0x33];
      *(undefined4 *)(this_01 + 0x188) = puVar10[0x62];
      *(undefined4 *)(this_01 + 0x18c) = puVar10[99];
      *(undefined4 *)(this_01 + 0x1ac) = puVar10[0x6b];
      *(undefined4 *)(this_01 + 4) = 3;
      piVar9 = (int *)thunk_FUN_361bf99c(0x20);
      *(int **)(this_01 + 8) = piVar9;
      *piVar9 = *(int *)local_44;
      *(int *)(*(int *)(this_01 + 8) + 4) = *(int *)(local_44 + 4);
      *(undefined4 *)(*(int *)(this_01 + 8) + 8) = *(undefined4 *)param_1;
      *(undefined4 *)(*(int *)(this_01 + 8) + 0xc) = *(undefined4 *)(param_1 + 4);
      *(int **)(*(int *)(this_01 + 8) + 0x10) = local_28;
      *(undefined4 *)(*(int *)(this_01 + 8) + 0x14) = 0;
      *(undefined4 *)(this_01 + 0xc) = 3;
      piVar9 = (int *)thunk_FUN_361bf99c(0x10);
      *(int **)(this_01 + 0x10) = piVar9;
      *piVar9 = (int)local_24;
      *(int **)(*(int *)(this_01 + 0x10) + 4) = local_3c;
      *(CBrushSector **)(*(int *)(this_01 + 0x10) + 8) = local_40;
      *(undefined4 *)(this_01 + 0x14) = 3;
      puVar10 = (undefined4 *)thunk_FUN_361bf99c(0x10);
      *(undefined4 **)(this_01 + 0x18) = puVar10;
      *puVar10 = 0;
      *(undefined4 *)(*(int *)(this_01 + 0x18) + 4) = 1;
      *(undefined4 *)(*(int *)(this_01 + 0x18) + 8) = 2;
      CBrushPolygon::InitializeShadowMap(this_01);
      *(undefined4 *)(this_01 + 0x1d0) = *puVar11;
      CAnimObject::SetData((CAnimObject *)(this_01 + 0x1ec),(CAnimData *)puVar11[0xc]);
      this_01[0x21c] = *(CBrushPolygon *)(puVar11 + 0x13);
      this_01[0x21d] = *(CBrushPolygon *)((int)puVar11 + 0x4d);
      this_01[0x21e] = *(CBrushPolygon *)((int)puVar11 + 0x4e);
      this_01[0x21f] = *(CBrushPolygon *)((int)puVar11 + 0x4f);
      *(undefined4 *)(this_01 + 0x220) = puVar11[0x14];
      *(undefined4 *)(this_01 + 0x204) = puVar11[0xd];
      *(undefined4 *)(this_01 + 0x208) = puVar11[0xe];
      *(undefined4 *)(this_01 + 0x20c) = puVar11[0xf];
      *(undefined4 *)(this_01 + 0x210) = puVar11[0x10];
      *(undefined4 *)(this_01 + 0x214) = puVar11[0x11];
      *(undefined4 *)(this_01 + 0x218) = puVar11[0x12];
      CAnimObject::SetData((CAnimObject *)(this_01 + 0x224),(CAnimData *)puVar11[0x1a]);
      this_01[0x254] = *(CBrushPolygon *)(puVar11 + 0x21);
      this_01[0x255] = *(CBrushPolygon *)((int)puVar11 + 0x85);
      this_01[0x256] = *(CBrushPolygon *)((int)puVar11 + 0x86);
      this_01[599] = *(CBrushPolygon *)((int)puVar11 + 0x87);
      *(undefined4 *)(this_01 + 600) = puVar11[0x22];
      *(undefined4 *)(this_01 + 0x23c) = puVar11[0x1b];
      *(undefined4 *)(this_01 + 0x240) = puVar11[0x1c];
      *(undefined4 *)(this_01 + 0x244) = puVar11[0x1d];
      *(undefined4 *)(this_01 + 0x248) = puVar11[0x1e];
      *(undefined4 *)(this_01 + 0x24c) = puVar11[0x1f];
      *(undefined4 *)(this_01 + 0x250) = puVar11[0x20];
      CAnimObject::SetData((CAnimObject *)(this_01 + 0x25c),(CAnimData *)puVar11[0x28]);
      this_01[0x28c] = *(CBrushPolygon *)(puVar11 + 0x2f);
      this_01[0x28d] = *(CBrushPolygon *)((int)puVar11 + 0xbd);
      this_01[0x28e] = *(CBrushPolygon *)((int)puVar11 + 0xbe);
      this_01[0x28f] = *(CBrushPolygon *)((int)puVar11 + 0xbf);
      *(undefined4 *)(this_01 + 0x290) = puVar11[0x30];
      *(undefined4 *)(this_01 + 0x274) = puVar11[0x29];
      *(undefined4 *)(this_01 + 0x278) = puVar11[0x2a];
      *(undefined4 *)(this_01 + 0x27c) = puVar11[0x2b];
      *(undefined4 *)(this_01 + 0x280) = puVar11[0x2c];
      *(undefined4 *)(this_01 + 0x284) = puVar11[0x2d];
      *(undefined4 *)(this_01 + 0x288) = puVar11[0x2e];
      *(undefined4 *)(this_01 + 0x294) = puVar11[0x31];
      *(uint *)(this_01 + 0x298) = puVar11[0x32] & 0x7ffffeff;
      *(undefined4 *)(this_01 + 0x29c) = puVar11[0x33];
      *(undefined4 *)(this_01 + 0x358) = puVar11[0x62];
      *(undefined4 *)(this_01 + 0x35c) = puVar11[99];
      *(undefined4 *)(this_01 + 0x37c) = puVar11[0x6b];
      *(undefined4 *)(this_01 + 0x1d4) = 3;
      piVar9 = (int *)thunk_FUN_361bf99c(0x20);
      *(int **)(this_01 + 0x1d8) = piVar9;
      *piVar9 = *local_34;
      *(int *)(*(int *)(this_01 + 0x1d8) + 4) = local_34[1];
      *(int *)(*(int *)(this_01 + 0x1d8) + 8) = *local_2c;
      *(int *)(*(int *)(this_01 + 0x1d8) + 0xc) = local_2c[1];
      *(int **)(*(int *)(this_01 + 0x1d8) + 0x10) = local_28;
      *(undefined4 *)(*(int *)(this_01 + 0x1d8) + 0x14) = 1;
      *(undefined4 *)(this_01 + 0x1dc) = 3;
      piVar9 = (int *)thunk_FUN_361bf99c(0x10);
      *(int **)(this_01 + 0x1e0) = piVar9;
      *piVar9 = (int)local_20;
      *(CBrushSector **)(*(int *)(this_01 + 0x1e0) + 4) = local_40;
      *(int **)(*(int *)(this_01 + 0x1e0) + 8) = local_3c;
      *(undefined4 *)(this_01 + 0x1e4) = 3;
      puVar11 = (undefined4 *)thunk_FUN_361bf99c(0x10);
      *(undefined4 **)(this_01 + 0x1e8) = puVar11;
      *puVar11 = 0;
      *(undefined4 *)(*(int *)(this_01 + 0x1e8) + 4) = 1;
      *(undefined4 *)(*(int *)(this_01 + 0x1e8) + 8) = 2;
      CBrushPolygon::InitializeShadowMap(this_01 + 0x1d0);
      this_00 = local_38;
      pCVar7 = local_38 + 8;
      FUN_36140490(pCVar7,&local_1c);
      FUN_360d7580(this_00 + 0x18,&local_14);
      iVar3 = FUN_360d6960((undefined4 *)pCVar7);
      if (*(int *)(this_00 + 0x30) != 0) {
        operator_delete__(*(void **)(this_00 + 0x34));
        *(undefined4 *)(this_00 + 0x30) = 0;
        *(undefined4 *)(this_00 + 0x34) = 0;
      }
      if (iVar3 != 0) {
        *(int *)(this_00 + 0x30) = iVar3;
        uVar6 = thunk_FUN_361bf99c(iVar3 * 8 + 8);
        *(undefined4 *)(this_00 + 0x34) = uVar6;
      }
      param_1 = (CSelection<class_CBrushPolygon,256> *)0x0;
      if (0 < iVar3) {
        local_2c = (int *)0x0;
        do {
          piVar2 = local_2c;
          iVar4 = *(int *)(this_00 + 0xc);
          piVar9 = (int *)(*(int *)(this_00 + 0x34) + (int)param_1 * 8);
          *(int **)((int)local_2c + iVar4 + 8) = piVar9;
          iVar5 = FUN_360d67e0(this_00,*(int *)(iVar4 + (int)local_2c));
          *piVar9 = iVar5;
          iVar4 = FUN_360d67e0(this_00,*(int *)((int)piVar2 + iVar4 + 4));
          piVar9[1] = iVar4;
          param_1 = param_1 + 1;
          local_2c = local_2c + 3;
        } while ((int)param_1 < iVar3);
      }
      MakePlanesFromVertices(this_00);
      UpdateSector(this_00);
      local_4 = local_4 & 0xffffff00;
      if ((local_14 != 0) && (local_10 != (void *)0x0)) {
        pvVar1 = (void *)((int)local_10 + -4);
        _eh_vector_destructor_iterator_
                  (local_10,0x1d0,*(int *)((int)local_10 + -4),CBrushPolygon::~CBrushPolygon);
        operator_delete__(pvVar1);
      }
      if (local_1c != 0) {
        operator_delete__(local_18);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

