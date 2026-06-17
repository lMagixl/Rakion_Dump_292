
/* public: void __thiscall CWorld::CopyPolygonInWorld(class CBrushPolygon &,class CBrushSector
   &,long,long &,long &) */

void __thiscall
CWorld::CopyPolygonInWorld
          (CWorld *this,CBrushPolygon *param_1,CBrushSector *param_2,long param_3,long *param_4,
          long *param_5)

{
  int *piVar1;
  CBrushPolygon *this_00;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  int local_16c;
  undefined8 local_160;
  undefined8 local_158;
  double local_150;
  double local_148;
  int local_13c;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  double local_50 [9];
  
                    /* 0xd3e80  1394
                       ?CopyPolygonInWorld@CWorld@@QAEXAAVCBrushPolygon@@AAVCBrushSector@@JAAJ2@Z */
  this_00 = (CBrushPolygon *)(param_3 * 0x1d0 + *(int *)(param_2 + 0x1c));
  iVar9 = *(int *)param_1;
  iVar2 = param_3 * 0x50 + *(int *)(param_2 + 0x14);
  local_13c = iVar2;
  pfVar3 = (float *)(iVar2 + 4);
  *pfVar3 = *(float *)(iVar9 + 4);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar9 + 8);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar9 + 0xc);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
  iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1ac) + 0x38) + 0x14) + 0x668);
  iVar13 = *(int *)(*(int *)(*(int *)(param_2 + 0x38) + 0x14) + 0x668);
  local_120 = (double)*(float *)(iVar8 + 0x54);
  local_118 = (double)*(float *)(iVar8 + 0x58);
  local_110 = (double)*(float *)(iVar8 + 0x5c);
  local_108 = (double)*(float *)(iVar8 + 0x60);
  local_100 = (double)*(float *)(iVar8 + 100);
  local_f8 = (double)*(float *)(iVar8 + 0x68);
  local_f0 = (double)*(float *)(iVar8 + 0x6c);
  local_e8 = (double)*(float *)(iVar8 + 0x70);
  local_e0 = (double)*(float *)(iVar8 + 0x74);
  pdVar11 = &local_120;
  pdVar12 = local_50;
  for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pdVar12 = *(undefined4 *)pdVar11;
    pdVar11 = (double *)((int)pdVar11 + 4);
    pdVar12 = (double *)((int)pdVar12 + 4);
  }
  local_120 = (double)*(float *)(iVar13 + 0x54);
  local_118 = (double)*(float *)(iVar13 + 0x58);
  local_110 = (double)*(float *)(iVar13 + 0x5c);
  local_108 = (double)*(float *)(iVar13 + 0x60);
  local_100 = (double)*(float *)(iVar13 + 100);
  local_f8 = (double)*(float *)(iVar13 + 0x68);
  local_f0 = (double)*(float *)(iVar13 + 0x6c);
  local_e8 = (double)*(float *)(iVar13 + 0x70);
  local_e0 = (double)*(float *)(iVar13 + 0x74);
  pdVar11 = &local_120;
  pdVar12 = &local_98;
  for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pdVar12 = *(undefined4 *)pdVar11;
    pdVar11 = (double *)((int)pdVar11 + 4);
    pdVar12 = (double *)((int)pdVar12 + 4);
  }
  local_160 = (double)*(float *)(iVar8 + 0x3c);
  local_158 = (double)*(float *)(iVar8 + 0x40);
  local_150 = (double)*(float *)(iVar8 + 0x44);
  puVar4 = (undefined4 *)(iVar9 + 0x28);
  pdVar11 = &local_b8;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pdVar11 = *puVar4;
    puVar4 = puVar4 + 1;
    pdVar11 = (double *)((int)pdVar11 + 4);
  }
  local_138 = (double)*(float *)(iVar13 + 0x3c);
  local_130 = (double)*(float *)(iVar13 + 0x40);
  local_128 = (double)*(float *)(iVar13 + 0x44);
  puVar4 = (undefined4 *)FUN_3605dfb0(&local_b8,local_50);
  pdVar11 = &local_d8;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pdVar11 = *puVar4;
    puVar4 = puVar4 + 1;
    pdVar11 = (double *)((int)pdVar11 + 4);
  }
  local_c0 = local_d8 * local_160 + local_d0 * local_158 + local_c8 * local_150 + local_c0;
  pdVar11 = &local_d8;
  pdVar12 = &local_b8;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pdVar12 = *(undefined4 *)pdVar11;
    pdVar11 = (double *)((int)pdVar11 + 4);
    pdVar12 = (double *)((int)pdVar12 + 4);
  }
  local_160 = (double)CONCAT44((float)local_b0,(float)local_b8);
  local_158 = (double)CONCAT44((float)local_a0,(float)local_a8);
  local_120 = local_98;
  local_118 = (double)local_80;
  local_110 = (double)local_68;
  *pfVar3 = (float)local_b8;
  local_108 = (double)local_90;
  *(float *)(iVar2 + 8) = (float)local_b0;
  local_100 = (double)local_78;
  *(float *)(iVar2 + 0xc) = (float)local_a8;
  *(float *)(iVar2 + 0x10) = (float)local_a0;
  local_f8 = (double)local_60;
  local_f0 = (double)local_88;
  local_e8 = (double)local_70;
  local_e0 = (double)local_58;
  pdVar11 = &local_120;
  pdVar12 = local_50;
  for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pdVar12 = *(undefined4 *)pdVar11;
    pdVar11 = (double *)((int)pdVar11 + 4);
    pdVar12 = (double *)((int)pdVar12 + 4);
  }
  pdVar11 = &local_d8;
  puVar10 = &local_160;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)puVar10 = *(undefined4 *)pdVar11;
    pdVar11 = (double *)((int)pdVar11 + 4);
    puVar10 = (undefined8 *)((int)puVar10 + 4);
  }
  local_148 = local_148 - (local_160 * local_138 + local_158 * local_130 + local_150 * local_128);
  puVar10 = &local_160;
  pdVar11 = &local_b8;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pdVar11 = *(undefined4 *)puVar10;
    puVar10 = (undefined8 *)((int)puVar10 + 4);
    pdVar11 = (double *)((int)pdVar11 + 4);
  }
  puVar4 = (undefined4 *)FUN_3605dfb0(&local_b8,local_50);
  pdVar11 = &local_d8;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pdVar11 = *puVar4;
    puVar4 = puVar4 + 1;
    pdVar11 = (double *)((int)pdVar11 + 4);
  }
  pdVar11 = &local_d8;
  puVar4 = (undefined4 *)(local_13c + 0x28);
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar4 = *(undefined4 *)pdVar11;
    pdVar11 = (double *)((int)pdVar11 + 4);
    puVar4 = puVar4 + 1;
  }
  FUN_360cd910(pfVar3,(undefined4 *)(local_13c + 0x48),(undefined4 *)(local_13c + 0x4c));
  *(int *)this_00 = local_13c;
  iVar9 = FUN_3600be20((undefined4 *)(param_1 + 4));
  if (iVar9 != 0) {
    *(int *)(this_00 + 4) = iVar9;
    uVar5 = thunk_FUN_361bf99c(iVar9 * 8 + 8);
    *(undefined4 *)(this_00 + 8) = uVar5;
  }
  local_16c = 0;
  if (0 < iVar9) {
    do {
      piVar6 = (int *)(*(int *)(param_1 + 8) + local_16c * 8);
      piVar1 = (int *)*piVar6;
      if (piVar6[1] == 0) {
        iVar8 = *piVar1;
        iVar13 = piVar1[1];
      }
      else {
        iVar8 = piVar1[1];
        iVar13 = *piVar1;
      }
      local_138 = (double)*(float *)(iVar8 + 4);
      local_130 = (double)*(float *)(iVar8 + 8);
      local_128 = (double)*(float *)(iVar8 + 0xc);
      CBrushVertex::SetAbsolutePosition
                ((CBrushVertex *)(*(int *)(param_2 + 4) + *param_5 * 0x48),
                 (Vector<double,3> *)&local_138);
      local_160 = (double)*(float *)(iVar13 + 4);
      local_158 = (double)*(float *)(iVar13 + 8);
      local_150 = (double)*(float *)(iVar13 + 0xc);
      CBrushVertex::SetAbsolutePosition
                ((CBrushVertex *)(*(int *)(param_2 + 4) + (*param_5 + 1) * 0x48),
                 (Vector<double,3> *)&local_160);
      piVar1 = (int *)(*(int *)(param_2 + 0xc) + *param_4 * 0xc);
      *piVar1 = *(int *)(param_2 + 4) + *param_5 * 0x48;
      piVar1[1] = *(int *)(param_2 + 4) + (*param_5 + 1) * 0x48;
      *param_4 = *param_4 + 1;
      *param_5 = *param_5 + 2;
      piVar6 = (int *)(*(int *)(this_00 + 8) + local_16c * 8);
      *piVar6 = (int)piVar1;
      piVar6[1] = 0;
      local_16c = local_16c + 1;
    } while (local_16c < iVar9);
  }
  CBrushPolygon::CopyProperties(this_00,param_1,1);
  return;
}

