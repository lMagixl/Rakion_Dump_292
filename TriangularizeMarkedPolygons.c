
/* public: void __thiscall CBrushSector::TriangularizeMarkedPolygons(void) */

void __thiscall CBrushSector::TriangularizeMarkedPolygons(CBrushSector *this)

{
  CBrushSector *pCVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  CBrushPolygon *this_00;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_34;
  int local_24;
  void *local_20;
  int local_1c;
  void *local_18;
  int local_14;
  CBrushSector *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x13d4e0  3852  ?TriangularizeMarkedPolygons@CBrushSector@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621989c;
  local_c = ExceptionList;
  local_44 = *(int *)(this + 0x18);
  iVar12 = 0;
  local_4c = 0;
  if (0 < local_44) {
    puVar14 = (undefined4 *)(*(int *)(this + 0x1c) + 0x14);
    ExceptionList = &local_c;
    do {
      iVar7 = FUN_3600bef0(puVar14);
      if ((iVar7 != 3) && ((int)puVar14[0x2d] < 0)) {
        local_4c = local_4c + 1;
        iVar7 = FUN_3600bef0(puVar14);
        iVar12 = iVar12 + iVar7 / 3;
      }
      puVar14 = puVar14 + 0x74;
      local_44 = local_44 + -1;
    } while (local_44 != 0);
    if (local_4c != 0) {
      local_24 = 0;
      local_20 = (void *)0x0;
      local_1c = 0;
      local_18 = (void *)0x0;
      local_4._0_1_ = 1;
      local_4._1_3_ = 0;
      iVar7 = FUN_360d6960((undefined4 *)(this + 8));
      iVar8 = FUN_360d69b0((undefined4 *)(this + 0x18));
      FUN_360d6800(&local_24,iVar7 + iVar12 * 3);
      FUN_360d7250(&local_1c,(iVar8 - local_4c) + iVar12);
      local_4c = 0;
      if (0 < iVar7) {
        iVar8 = 0;
        iVar12 = iVar7;
        do {
          puVar14 = (undefined4 *)(*(int *)(this + 0xc) + iVar8);
          puVar15 = (undefined4 *)((int)local_20 + iVar8);
          *puVar15 = *puVar14;
          puVar15[1] = puVar14[1];
          iVar8 = iVar8 + 0xc;
          iVar12 = iVar12 + -1;
          puVar15[2] = puVar14[2];
          local_4c = iVar7;
        } while (iVar12 != 0);
      }
      pCVar1 = this + 0x18;
      local_50 = 0;
      local_14 = 0;
      local_4._0_1_ = 2;
      iVar12 = local_4c;
      local_10 = pCVar1;
      if (0 < *(int *)pCVar1) {
        do {
          iVar8 = local_14 * 0x1d0;
          iVar7 = *(int *)(this + 0x1c) + iVar8;
          if (*(int *)(*(int *)(this + 0x1c) + 200 + iVar8) < 0) {
            local_34 = FUN_3600bef0((undefined4 *)(*(int *)(this + 0x1c) + 0x14 + iVar8));
            local_34 = local_34 / 3;
            if (0 < local_34) {
              puVar14 = (undefined4 *)((int)local_20 + iVar12 * 0xc + 0x10);
              piVar13 = (int *)(local_50 * 0x1d0 + 0x10 + (int)local_18);
              iVar12 = local_34 * 3 + iVar12;
              local_50 = local_50 + local_34;
              local_44 = 0;
              do {
                iVar7 = *(int *)(*(int *)(this + 0x1c) + iVar8 + 0x10);
                piVar16 = (int *)(*(int *)(*(int *)(this + 0x1c) + iVar8 + 0x18) + local_44);
                uVar9 = *(undefined4 *)(iVar7 + *piVar16 * 4);
                uVar5 = *(undefined4 *)(iVar7 + piVar16[1] * 4);
                uVar6 = *(undefined4 *)(iVar7 + piVar16[2] * 4);
                puVar14[-4] = uVar9;
                puVar14[-3] = uVar5;
                puVar14[-1] = uVar5;
                *puVar14 = uVar6;
                puVar14[2] = uVar6;
                puVar14[3] = uVar9;
                piVar13[-3] = 3;
                piVar16 = (int *)thunk_FUN_361bf99c(0x20);
                piVar13[-2] = (int)piVar16;
                *piVar16 = (int)(puVar14 + -4);
                *(undefined4 *)(piVar13[-2] + 4) = 0;
                *(undefined4 **)(piVar13[-2] + 8) = puVar14 + -1;
                *(undefined4 *)(piVar13[-2] + 0xc) = 0;
                *(undefined4 **)(piVar13[-2] + 0x10) = puVar14 + 2;
                *(undefined4 *)(piVar13[-2] + 0x14) = 0;
                piVar13[-1] = 3;
                puVar15 = (undefined4 *)thunk_FUN_361bf99c(0x10);
                *piVar13 = (int)puVar15;
                *puVar15 = uVar9;
                *(undefined4 *)(*piVar13 + 4) = uVar5;
                *(undefined4 *)(*piVar13 + 8) = uVar6;
                piVar13[1] = 3;
                puVar15 = (undefined4 *)thunk_FUN_361bf99c(0x10);
                piVar13[2] = (int)puVar15;
                *puVar15 = 0;
                *(undefined4 *)(piVar13[2] + 4) = 1;
                *(undefined4 *)(piVar13[2] + 8) = 2;
                piVar13[-4] = *(int *)(iVar8 + *(int *)(this + 0x1c));
                iVar7 = *(int *)(this + 0x1c) + 0x1c + iVar8;
                CAnimObject::SetData
                          ((CAnimObject *)(piVar13 + 3),
                           *(CAnimData **)(*(int *)(this + 0x1c) + 0x30 + iVar8));
                *(undefined1 *)(piVar13 + 0xf) = *(undefined1 *)(iVar7 + 0x30);
                *(undefined1 *)((int)piVar13 + 0x3d) = *(undefined1 *)(iVar7 + 0x31);
                *(undefined1 *)((int)piVar13 + 0x3e) = *(undefined1 *)(iVar7 + 0x32);
                *(undefined1 *)((int)piVar13 + 0x3f) = *(undefined1 *)(iVar7 + 0x33);
                piVar13[0x10] = *(int *)(iVar7 + 0x34);
                piVar13[9] = *(int *)(iVar7 + 0x18);
                piVar13[10] = *(int *)(iVar7 + 0x1c);
                piVar13[0xb] = *(int *)(iVar7 + 0x20);
                piVar13[0xc] = *(int *)(iVar7 + 0x24);
                piVar13[0xd] = *(int *)(iVar7 + 0x28);
                piVar13[0xe] = *(int *)(iVar7 + 0x2c);
                iVar7 = *(int *)(this + 0x1c) + 0x54 + iVar8;
                CAnimObject::SetData
                          ((CAnimObject *)(piVar13 + 0x11),
                           *(CAnimData **)(*(int *)(this + 0x1c) + 0x68 + iVar8));
                *(undefined1 *)(piVar13 + 0x1d) = *(undefined1 *)(iVar7 + 0x30);
                *(undefined1 *)((int)piVar13 + 0x75) = *(undefined1 *)(iVar7 + 0x31);
                *(undefined1 *)((int)piVar13 + 0x76) = *(undefined1 *)(iVar7 + 0x32);
                *(undefined1 *)((int)piVar13 + 0x77) = *(undefined1 *)(iVar7 + 0x33);
                piVar13[0x1e] = *(int *)(iVar7 + 0x34);
                piVar13[0x17] = *(int *)(iVar7 + 0x18);
                piVar13[0x18] = *(int *)(iVar7 + 0x1c);
                piVar13[0x19] = *(int *)(iVar7 + 0x20);
                piVar13[0x1a] = *(int *)(iVar7 + 0x24);
                piVar13[0x1b] = *(int *)(iVar7 + 0x28);
                piVar13[0x1c] = *(int *)(iVar7 + 0x2c);
                iVar7 = *(int *)(this + 0x1c) + 0x8c + iVar8;
                CAnimObject::SetData
                          ((CAnimObject *)(piVar13 + 0x1f),
                           *(CAnimData **)(*(int *)(this + 0x1c) + 0xa0 + iVar8));
                *(undefined1 *)(piVar13 + 0x2b) = *(undefined1 *)(iVar7 + 0x30);
                *(undefined1 *)((int)piVar13 + 0xad) = *(undefined1 *)(iVar7 + 0x31);
                *(undefined1 *)((int)piVar13 + 0xae) = *(undefined1 *)(iVar7 + 0x32);
                *(undefined1 *)((int)piVar13 + 0xaf) = *(undefined1 *)(iVar7 + 0x33);
                piVar13[0x2c] = *(int *)(iVar7 + 0x34);
                piVar13[0x25] = *(int *)(iVar7 + 0x18);
                piVar13[0x26] = *(int *)(iVar7 + 0x1c);
                piVar13[0x27] = *(int *)(iVar7 + 0x20);
                piVar13[0x28] = *(int *)(iVar7 + 0x24);
                piVar13[0x29] = *(int *)(iVar7 + 0x28);
                piVar13[0x2a] = *(int *)(iVar7 + 0x2c);
                piVar13[0x2d] = *(int *)(*(int *)(this + 0x1c) + 0xc4 + iVar8);
                piVar13[0x2e] = *(uint *)(*(int *)(this + 0x1c) + 200 + iVar8) & 0x7ffffeff;
                piVar13[0x2f] = *(int *)(*(int *)(this + 0x1c) + 0xcc + iVar8);
                iVar7 = *(int *)(this + 0x1c);
                piVar13[0x5e] = *(int *)(iVar7 + 0x188 + iVar8);
                piVar13[0x5f] = *(int *)(iVar7 + 0x18c + iVar8);
                piVar13[0x67] = *(int *)(*(int *)(this + 0x1c) + 0x1ac + iVar8);
                CBrushPolygon::InitializeShadowMap((CBrushPolygon *)(piVar13 + -4));
                puVar14 = puVar14 + 9;
                local_44 = local_44 + 0xc;
                piVar13 = piVar13 + 0x74;
                local_34 = local_34 + -1;
                local_4c = iVar12;
              } while (local_34 != 0);
            }
          }
          else {
            this_00 = (CBrushPolygon *)(local_50 * 0x1d0 + (int)local_18);
            *(undefined4 *)this_00 = *(undefined4 *)(iVar8 + *(int *)(this + 0x1c));
            iVar12 = *(int *)(this + 0x1c) + 0x1c + iVar8;
            CAnimObject::SetData((CAnimObject *)(this_00 + 0x1c),*(CAnimData **)(iVar12 + 0x14));
            this_00[0x4c] = *(CBrushPolygon *)(iVar12 + 0x30);
            this_00[0x4d] = *(CBrushPolygon *)(iVar12 + 0x31);
            this_00[0x4e] = *(CBrushPolygon *)(iVar12 + 0x32);
            this_00[0x4f] = *(CBrushPolygon *)(iVar12 + 0x33);
            *(undefined4 *)(this_00 + 0x50) = *(undefined4 *)(iVar12 + 0x34);
            *(undefined4 *)(this_00 + 0x34) = *(undefined4 *)(iVar12 + 0x18);
            *(undefined4 *)(this_00 + 0x38) = *(undefined4 *)(iVar12 + 0x1c);
            *(undefined4 *)(this_00 + 0x3c) = *(undefined4 *)(iVar12 + 0x20);
            *(undefined4 *)(this_00 + 0x40) = *(undefined4 *)(iVar12 + 0x24);
            *(undefined4 *)(this_00 + 0x44) = *(undefined4 *)(iVar12 + 0x28);
            *(undefined4 *)(this_00 + 0x48) = *(undefined4 *)(iVar12 + 0x2c);
            iVar12 = *(int *)(this + 0x1c) + 0x54 + iVar8;
            CAnimObject::SetData
                      ((CAnimObject *)(this_00 + 0x54),
                       *(CAnimData **)(*(int *)(this + 0x1c) + 0x68 + iVar8));
            this_00[0x84] = *(CBrushPolygon *)(iVar12 + 0x30);
            this_00[0x85] = *(CBrushPolygon *)(iVar12 + 0x31);
            this_00[0x86] = *(CBrushPolygon *)(iVar12 + 0x32);
            this_00[0x87] = *(CBrushPolygon *)(iVar12 + 0x33);
            *(undefined4 *)(this_00 + 0x88) = *(undefined4 *)(iVar12 + 0x34);
            *(undefined4 *)(this_00 + 0x6c) = *(undefined4 *)(iVar12 + 0x18);
            *(undefined4 *)(this_00 + 0x70) = *(undefined4 *)(iVar12 + 0x1c);
            *(undefined4 *)(this_00 + 0x74) = *(undefined4 *)(iVar12 + 0x20);
            *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(iVar12 + 0x24);
            *(undefined4 *)(this_00 + 0x7c) = *(undefined4 *)(iVar12 + 0x28);
            *(undefined4 *)(this_00 + 0x80) = *(undefined4 *)(iVar12 + 0x2c);
            iVar12 = *(int *)(this + 0x1c) + 0x8c + iVar8;
            CAnimObject::SetData
                      ((CAnimObject *)(this_00 + 0x8c),
                       *(CAnimData **)(*(int *)(this + 0x1c) + 0xa0 + iVar8));
            this_00[0xbc] = *(CBrushPolygon *)(iVar12 + 0x30);
            this_00[0xbd] = *(CBrushPolygon *)(iVar12 + 0x31);
            this_00[0xbe] = *(CBrushPolygon *)(iVar12 + 0x32);
            this_00[0xbf] = *(CBrushPolygon *)(iVar12 + 0x33);
            *(undefined4 *)(this_00 + 0xc0) = *(undefined4 *)(iVar12 + 0x34);
            *(undefined4 *)(this_00 + 0xa4) = *(undefined4 *)(iVar12 + 0x18);
            *(undefined4 *)(this_00 + 0xa8) = *(undefined4 *)(iVar12 + 0x1c);
            *(undefined4 *)(this_00 + 0xac) = *(undefined4 *)(iVar12 + 0x20);
            *(undefined4 *)(this_00 + 0xb0) = *(undefined4 *)(iVar12 + 0x24);
            *(undefined4 *)(this_00 + 0xb4) = *(undefined4 *)(iVar12 + 0x28);
            *(undefined4 *)(this_00 + 0xb8) = *(undefined4 *)(iVar12 + 0x2c);
            *(undefined4 *)(this_00 + 0xc4) = *(undefined4 *)(*(int *)(this + 0x1c) + 0xc4 + iVar8);
            *(uint *)(this_00 + 200) = *(uint *)(*(int *)(this + 0x1c) + 200 + iVar8) & 0x7ffffeff;
            *(undefined4 *)(this_00 + 0xcc) = *(undefined4 *)(*(int *)(this + 0x1c) + 0xcc + iVar8);
            iVar12 = *(int *)(this + 0x1c);
            *(undefined4 *)(this_00 + 0x188) = *(undefined4 *)(iVar12 + 0x188 + iVar8);
            *(undefined4 *)(this_00 + 0x18c) = *(undefined4 *)(iVar12 + 0x18c + iVar8);
            *(undefined4 *)(this_00 + 0x1ac) =
                 *(undefined4 *)(*(int *)(this + 0x1c) + 0x1ac + iVar8);
            iVar12 = FUN_3600be20((undefined4 *)(*(int *)(this + 0x1c) + 4 + iVar8));
            if (iVar12 != 0) {
              *(int *)(this_00 + 4) = iVar12;
              uVar9 = thunk_FUN_361bf99c(iVar12 * 8 + 8);
              *(undefined4 *)(this_00 + 8) = uVar9;
            }
            local_48 = 0;
            if (0 < iVar12) {
              do {
                iVar3 = *(int *)(*(int *)(this + 0x1c) + 8 + iVar8);
                iVar4 = *(int *)(this_00 + 8);
                iVar10 = local_48 * 8;
                iVar11 = FUN_36137140(this + 8,*(int *)(iVar3 + iVar10));
                *(int *)(iVar4 + iVar10) = (int)((int)local_20 + iVar11 * 0xc);
                ((int *)(iVar4 + iVar10))[1] = *(int *)(iVar3 + iVar10 + 4);
                local_48 = local_48 + 1;
              } while (local_48 < iVar12);
            }
            FUN_36010070(this_00 + 0xc,(undefined4 *)(iVar7 + 0xc));
            FUN_360100e0(this_00 + 0x14,(undefined4 *)(iVar7 + 0x14));
            CBrushPolygon::InitializeShadowMap(this_00);
            local_50 = local_50 + 1;
            iVar12 = local_4c;
          }
          local_14 = local_14 + 1;
        } while (local_14 < *(int *)pCVar1);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_36140490(this + 8,&local_24);
      FUN_360d7580(this + 0x18,&local_1c);
      iVar12 = FUN_360d6960((undefined4 *)(this + 8));
      iVar7 = 0;
      if (*(int *)(this + 0x30) != 0) {
        operator_delete__(*(void **)(this + 0x34));
        *(undefined4 *)(this + 0x30) = 0;
        *(undefined4 *)(this + 0x34) = 0;
      }
      if (iVar12 != 0) {
        *(int *)(this + 0x30) = iVar12;
        uVar9 = thunk_FUN_361bf99c(iVar12 * 8 + 8);
        *(undefined4 *)(this + 0x34) = uVar9;
      }
      if (0 < iVar12) {
        local_40 = 0;
        do {
          piVar16 = (int *)(*(int *)(this + 0xc) + local_40);
          piVar13 = (int *)(*(int *)(this + 0x34) + iVar7 * 8);
          piVar16[2] = (int)piVar13;
          iVar8 = FUN_360d67e0(this,*piVar16);
          *piVar13 = iVar8;
          iVar8 = FUN_360d67e0(this,piVar16[1]);
          piVar13[1] = iVar8;
          iVar7 = iVar7 + 1;
          local_40 = local_40 + 0xc;
        } while (iVar7 < iVar12);
      }
      MakePlanesFromVertices(this);
      local_4 = local_4 & 0xffffff00;
      if ((local_1c != 0) && (local_18 != (void *)0x0)) {
        pvVar2 = (void *)((int)local_18 + -4);
        _eh_vector_destructor_iterator_
                  (local_18,0x1d0,*(int *)((int)local_18 + -4),CBrushPolygon::~CBrushPolygon);
        operator_delete__(pvVar2);
      }
      if (local_24 != 0) {
        operator_delete__(local_20);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

