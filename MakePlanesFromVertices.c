
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBrushSector::MakePlanesFromVertices(void) */

void __thiscall CBrushSector::MakePlanesFromVertices(CBrushSector *this)

{
  int iVar1;
  double *pdVar2;
  Plane<float,3> *pPVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  double *pdVar6;
  int local_144;
  int local_140;
  int local_13c;
  double local_138;
  double local_130;
  double local_128;
  int local_120;
  CBrushPolygonEdge *local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 *local_d0;
  CBrushSector *local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  double local_50;
  double local_48;
  double local_40;
  float local_2c;
  undefined1 local_28 [36];
  
                    /* 0x13c9c0  2617  ?MakePlanesFromVertices@CBrushSector@@QAEXXZ */
  local_cc = this;
  if (*(int *)(this + 0x10) != 0) {
    operator_delete__(*(void **)(this + 0x14));
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  if (*(int *)(this + 0x28) != 0) {
    operator_delete__(*(void **)(this + 0x2c));
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
  }
  iVar1 = FUN_360d69b0((undefined4 *)(this + 0x18));
  FUN_360d6e00(this + 0x10,iVar1);
  FUN_360d72d0(this + 0x28,iVar1);
  local_fc = FUN_360d69b0((undefined4 *)(this + 0x18));
  if (0 < local_fc) {
    local_140 = 0;
    local_144 = 0;
    local_13c = 0;
    do {
      local_138 = _DAT_36227d98;
      local_130 = _DAT_36227d98;
      puVar5 = (undefined4 *)(*(int *)(this + 0x14) + local_144);
      local_128 = _DAT_36227d98;
      puVar4 = (undefined4 *)(*(int *)(this + 0x1c) + local_13c);
      pPVar3 = (Plane<float,3> *)(*(int *)(this + 0x2c) + local_140);
      *puVar4 = puVar5;
      *puVar5 = pPVar3;
      local_d0 = puVar5;
      iVar1 = FUN_3600be20(puVar4 + 1);
      if (0 < iVar1) {
        local_11c = (CBrushPolygonEdge *)puVar4[2];
        local_120 = iVar1;
        do {
          CBrushPolygonEdge::GetVertexCoordinatesPreciseRelative
                    (local_11c,(Vector<double,3> *)&local_b0,(Vector<double,3> *)&local_50);
          local_68 = local_b0;
          local_64 = local_ac;
          local_60 = local_a8;
          local_5c = local_a4;
          local_58 = local_a0;
          local_f8 = (double)CONCAT44(local_ac,local_b0);
          local_f8 = local_f8 + local_50;
          local_f0 = (double)CONCAT44(local_a4,local_a8);
          local_e8 = (double)CONCAT44(local_9c,local_a0);
          local_f0 = local_f0 + local_48;
          local_e8 = local_e8 + local_40;
          local_118 = (double)CONCAT44(local_ac,local_b0);
          local_118 = local_118 - local_50;
          local_110 = (double)CONCAT44(local_a4,local_a8);
          local_110 = local_110 - local_48;
          local_108 = (double)CONCAT44(local_9c,local_a0);
          local_108 = local_108 - local_40;
          local_138 = local_e8 * local_110 + local_138;
          local_130 = local_f8 * local_108 + local_130;
          local_128 = local_f0 * local_118 + local_128;
          local_54 = local_9c;
          local_11c = local_11c + 8;
          local_120 = local_120 + -1;
          local_c8 = local_f8;
          local_c0 = local_f0;
          local_b8 = local_e8;
          local_80 = local_118;
          local_78 = local_110;
          local_70 = local_108;
        } while (local_120 != 0);
        local_120 = 0;
        this = local_cc;
        puVar5 = local_d0;
      }
      if (SQRT(local_138 * local_138 + local_130 * local_130 + local_128 * local_128) <
          _DAT_362280b8) {
        local_98 = _DAT_36227d98;
        local_90 = _DAT_36227d28;
        local_88 = _DAT_36227d98;
        local_138 = _DAT_36227d98;
        local_130 = _DAT_36227d28;
        local_128 = _DAT_36227d98;
      }
      pdVar2 = FUN_3604f9e0(local_28,(undefined4 *)&local_138,(double *)&local_68);
      pdVar6 = (double *)(puVar5 + 10);
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pdVar6 = *(undefined4 *)pdVar2;
        pdVar2 = (double *)((int)pdVar2 + 4);
        pdVar6 = (double *)((int)pdVar6 + 4);
      }
      local_dc = (float)*(double *)(puVar5 + 10);
      local_d8 = (float)*(double *)(puVar5 + 0xc);
      local_d4 = (float)*(double *)(puVar5 + 0xe);
      local_2c = (float)*(double *)(puVar5 + 0x10);
      *(float *)pPVar3 = local_dc;
      *(float *)(pPVar3 + 4) = local_d8;
      *(float *)(pPVar3 + 8) = local_d4;
      *(float *)(pPVar3 + 0xc) = local_2c;
      CMappingVectors::FromPlane((CMappingVectors *)(pPVar3 + 0x10),pPVar3);
      local_13c = local_13c + 0x1d0;
      local_144 = local_144 + 0x50;
      local_140 = local_140 + 0x78;
      local_fc = local_fc + -1;
    } while (local_fc != 0);
  }
  return;
}

