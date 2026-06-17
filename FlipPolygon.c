
/* public: void __thiscall CWorld::FlipPolygon(class CBrushPolygon &) */

void __thiscall CWorld::FlipPolygon(CWorld *this,CBrushPolygon *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  float *pfVar14;
  int local_108;
  float local_100 [4];
  double local_f0;
  double local_e8;
  int local_dc;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined4 local_70 [8];
  double local_50 [9];
  
                    /* 0xd4ab0  1656  ?FlipPolygon@CWorld@@QAEXAAVCBrushPolygon@@@Z */
  iVar7 = *(int *)(param_1 + 0x1ac);
  iVar3 = *(int *)(iVar7 + 0x14);
  puVar4 = (undefined4 *)(*(int *)param_1 + 0x28);
  pdVar12 = &local_d8;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pdVar12 = *puVar4;
    puVar4 = puVar4 + 1;
    pdVar12 = (double *)((int)pdVar12 + 4);
  }
  iVar1 = FUN_360d6990((undefined4 *)(iVar7 + 0x10));
  local_dc = iVar1 + 1;
  FUN_360d6e80((undefined4 *)(iVar7 + 0x10),local_dc);
  iVar8 = *(int *)(iVar7 + 0x14);
  iVar9 = 0;
  if (0 < *(int *)(iVar7 + 0x18)) {
    iVar10 = 0;
    do {
      piVar2 = (int *)(*(int *)(iVar7 + 0x1c) + iVar10);
      *piVar2 = *piVar2 + (iVar8 - iVar3);
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x1d0;
    } while (iVar9 < *(int *)(iVar7 + 0x18));
  }
  iVar8 = 0;
  iVar3 = FUN_3600bef0((undefined4 *)(param_1 + 0x14));
  if (0 < iVar3) {
    do {
      iVar3 = *(int *)(param_1 + 0x18);
      uVar6 = *(undefined4 *)(iVar3 + iVar8 * 4);
      *(undefined4 *)(iVar3 + iVar8 * 4) = *(undefined4 *)(iVar3 + 8 + iVar8 * 4);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 8 + iVar8 * 4) = uVar6;
      iVar8 = iVar8 + 3;
      iVar3 = FUN_3600bef0((undefined4 *)(param_1 + 0x14));
    } while (iVar8 < iVar3);
  }
  iVar8 = iVar1 * 0x50 + *(int *)(iVar7 + 0x14);
  puVar4 = (undefined4 *)FUN_3604c180(&local_d8,local_70);
  pdVar12 = (double *)(iVar8 + 0x28);
  pdVar11 = pdVar12;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pdVar11 = *puVar4;
    puVar4 = puVar4 + 1;
    pdVar11 = (double *)((int)pdVar11 + 4);
  }
  local_100[0] = (float)*pdVar12;
  local_100[1] = (float)*(double *)(iVar8 + 0x30);
  local_100[2] = (float)*(double *)(iVar8 + 0x38);
  local_100[3] = (float)*(double *)(iVar8 + 0x40);
  *(float *)(iVar8 + 0x14) = (float)*pdVar12;
  *(float *)(iVar8 + 0x18) = (float)*(double *)(iVar8 + 0x30);
  *(float *)(iVar8 + 0x1c) = (float)*(double *)(iVar8 + 0x38);
  *(float *)(iVar8 + 0x20) = (float)*(double *)(iVar8 + 0x40);
  iVar3 = *(int *)(*(int *)(*(int *)(iVar7 + 0x38) + 0x14) + 0x668);
  local_d8 = (double)*(float *)(iVar3 + 0x3c);
  local_d0 = (double)*(float *)(iVar3 + 0x40);
  local_c8 = (double)*(float *)(iVar3 + 0x44);
  local_b8 = (double)*(float *)(iVar3 + 0x54);
  local_b0 = (double)*(float *)(iVar3 + 0x58);
  local_a8 = (double)*(float *)(iVar3 + 0x5c);
  local_a0 = (double)*(float *)(iVar3 + 0x60);
  local_98 = (double)*(float *)(iVar3 + 100);
  local_90 = (double)*(float *)(iVar3 + 0x68);
  local_88 = (double)*(float *)(iVar3 + 0x6c);
  local_80 = (double)*(float *)(iVar3 + 0x70);
  local_78 = (double)*(float *)(iVar3 + 0x74);
  pdVar11 = &local_b8;
  pdVar13 = local_50;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pdVar13 = *(undefined4 *)pdVar11;
    pdVar11 = (double *)((int)pdVar11 + 4);
    pdVar13 = (double *)((int)pdVar13 + 4);
  }
  puVar4 = local_70;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *(undefined4 *)pdVar12;
    pdVar12 = (double *)((int)pdVar12 + 4);
    puVar4 = puVar4 + 1;
  }
  pfVar5 = (float *)FUN_3605dfb0(local_70,local_50);
  pfVar14 = local_100;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar14 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar14 = pfVar14 + 1;
  }
  local_e8 = (double)CONCAT44(local_100[1],local_100[0]) * local_d8 +
             (double)CONCAT44(local_100[3],local_100[2]) * local_d0 + local_f0 * local_c8 + local_e8
  ;
  pfVar5 = local_100;
  pdVar12 = &local_d8;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(float *)pdVar12 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pdVar12 = (double *)((int)pdVar12 + 4);
  }
  local_100[0] = (float)local_d8;
  local_100[1] = (float)local_d0;
  local_100[2] = (float)local_c8;
  local_d0 = (double)CONCAT44((float)local_c0,(undefined4)local_d0);
  *(float *)(iVar8 + 4) = local_100[0];
  *(float *)(iVar8 + 8) = local_100[1];
  *(float *)(iVar8 + 0xc) = local_100[2];
  *(float *)(iVar8 + 0x10) = (float)local_c0;
  FUN_360cd910((float *)(iVar8 + 4),(undefined4 *)(iVar8 + 0x48),(undefined4 *)(iVar8 + 0x4c));
  *(int *)param_1 = iVar8;
  operator_delete__(*(void **)(iVar7 + 0x2c));
  local_108 = local_dc;
  *(undefined4 *)(iVar7 + 0x28) = 0;
  *(undefined4 *)(iVar7 + 0x2c) = 0;
  if (local_dc != 0) {
    *(int *)(iVar7 + 0x28) = local_dc;
    uVar6 = thunk_FUN_361bf99c((local_dc + 1) * 0x78);
    *(undefined4 *)(iVar7 + 0x2c) = uVar6;
  }
  if (0 < local_108) {
    iVar8 = 0;
    iVar3 = 0;
    do {
      *(int *)(iVar8 + *(int *)(iVar7 + 0x14)) = *(int *)(iVar7 + 0x2c) + iVar3;
      iVar3 = iVar3 + 0x78;
      iVar8 = iVar8 + 0x50;
      local_108 = local_108 + -1;
    } while (local_108 != 0);
  }
  iVar7 = FUN_3600be20((undefined4 *)(param_1 + 4));
  iVar3 = 0;
  if (0 < iVar7) {
    do {
      iVar1 = iVar3 * 8;
      iVar8 = iVar3 * 8;
      iVar3 = iVar3 + 1;
      *(uint *)(*(int *)(param_1 + 8) + iVar8 + 4) =
           (uint)(*(int *)(*(int *)(param_1 + 8) + 4 + iVar1) == 0);
    } while (iVar3 < iVar7);
  }
  return;
}

