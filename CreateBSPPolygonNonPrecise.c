
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBrushPolygon::CreateBSPPolygonNonPrecise(class BSPPolygon<double,3> &)
    */

void __thiscall
CBrushPolygon::CreateBSPPolygonNonPrecise(CBrushPolygon *this,BSPPolygon<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  BSPPolygon<double,3> *pBVar7;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double *local_38;
  BSPPolygon<double,3> *local_34;
  double local_30;
  double local_28;
  double local_20;
  float local_14;
  float local_10;
  float local_c;
  
                    /* 0x13bbf0  1412
                       ?CreateBSPPolygonNonPrecise@CBrushPolygon@@QAEXAAV?$BSPPolygon@N$02@@@Z */
  iVar4 = *(int *)this;
  local_58 = (double)*(float *)(iVar4 + 4);
  local_40 = (double)*(float *)(iVar4 + 0x10);
  local_50 = (double)*(float *)(iVar4 + 8);
  local_48 = (double)*(float *)(iVar4 + 0xc);
  pdVar5 = &local_58;
  pBVar7 = param_1;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pBVar7 = *(undefined4 *)pdVar5;
    pdVar5 = (double *)((int)pdVar5 + 4);
    pBVar7 = pBVar7 + 4;
  }
  iVar4 = FUN_36137160((void *)(*(int *)(this + 0x1ac) + 0x10),*(int *)this);
  *(int *)(param_1 + 0x34) = iVar4;
  iVar4 = *(int *)this;
  dVar1 = (double)*(float *)(iVar4 + 4) * _DAT_36237340;
  dVar2 = (double)*(float *)(iVar4 + 8) * _DAT_36237340;
  dVar3 = (double)*(float *)(iVar4 + 0xc) * _DAT_36237340;
  *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) - _DAT_36237340;
  local_a0 = dVar1;
  local_98 = dVar2;
  local_90 = dVar3;
  iVar4 = FUN_3600be20((undefined4 *)(this + 4));
  local_34 = param_1 + 0x20;
  FUN_3604c350(local_34,iVar4);
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      local_38 = (double *)FUN_3604bc20(local_34,iVar6);
      CBrushPolygonEdge::GetVertexCoordinatesAbsolute
                ((CBrushPolygonEdge *)(*(int *)(this + 8) + iVar6 * 8),(Vector<float,3> *)&local_14,
                 (Vector<float,3> *)&local_a0);
      local_30 = (double)local_14;
      local_28 = (double)local_10;
      local_20 = (double)local_c;
      local_88 = local_30 + dVar1;
      local_80 = local_28 + dVar2;
      local_78 = local_20 + dVar3;
      *local_38 = local_88;
      local_58 = (double)(float)local_a0;
      local_38[1] = local_80;
      local_50 = (double)local_a0._4_4_;
      local_48 = (double)local_98._0_4_;
      local_38[2] = local_78;
      local_70 = local_58 + dVar1;
      local_68 = local_50 + dVar2;
      local_60 = local_48 + dVar3;
      local_38[3] = local_70;
      local_38[4] = local_68;
      iVar6 = iVar6 + 1;
      local_38[5] = local_60;
    } while (iVar6 < iVar4);
  }
  return;
}

