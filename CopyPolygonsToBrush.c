
/* public: void __thiscall CWorld::CopyPolygonsToBrush(class CSelection<class CBrushPolygon,256>
   &,class CEntity *) */

void __thiscall
CWorld::CopyPolygonsToBrush
          (CWorld *this,CSelection<class_CBrushPolygon,256> *param_1,CEntity *param_2)

{
  CBrushSector *this_00;
  CSelection<class_CBrushPolygon,256> *this_01;
  CSelection<class_CBrushPolygon,256> *pCVar1;
  CBrushMip *pCVar2;
  CBrushSector *this_02;
  int iVar3;
  CBrushPolygon *pCVar4;
  int iVar5;
  int iVar6;
  long local_18;
  int local_14;
  CSelection<class_CBrushPolygon,256> *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd4310  1395
                       ?CopyPolygonsToBrush@CWorld@@QAEXAAV?$CSelection@VCBrushPolygon@@$0BAA@@@PAVCEntity@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214c39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar2 = CBrush3D::GetFirstMip(*(CBrush3D **)(param_2 + 0x7c));
  this_02 = (CBrushSector *)FUN_36043bf0(pCVar2,1);
  this_01 = param_1;
  *(CBrushMip **)(this_02 + 0x38) = pCVar2;
  *(undefined4 *)(this_02 + 0x40) = 0xff;
  iVar3 = FUN_360cb720((int)param_1);
  this_00 = this_02 + 0x18;
  FUN_360d7250(this_00,iVar3);
  FUN_360d6e00(this_02 + 0x10,iVar3);
  iVar6 = 0;
  param_1 = (CSelection<class_CBrushPolygon,256> *)0x0;
  iVar3 = FUN_360cb720((int)this_01);
  if (0 < iVar3) {
    do {
      iVar3 = FUN_360cb0a0(this_01,iVar6);
      iVar3 = FUN_3600be20((undefined4 *)(iVar3 + 4));
      param_1 = param_1 + iVar3;
      iVar6 = iVar6 + 1;
      iVar3 = FUN_360cb720((int)this_01);
    } while (iVar6 < iVar3);
  }
  pCVar1 = param_1;
  FUN_360d6800(this_02 + 8,(int)param_1);
  FUN_360d6d80(this_02,(int)pCVar1 * 2);
  iVar6 = 0;
  iVar3 = 0;
  if (0 < *(int *)this_02) {
    iVar5 = 0;
    do {
      *(CBrushSector **)(iVar5 + 0x40 + *(int *)(this_02 + 4)) = this_02;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x48;
    } while (iVar3 < *(int *)this_02);
  }
  iVar3 = 0;
  if (0 < *(int *)this_00) {
    iVar5 = 0;
    do {
      *(CBrushSector **)(iVar5 + 0x1ac + *(int *)(this_02 + 0x1c)) = this_02;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x1d0;
    } while (iVar3 < *(int *)this_00);
  }
  iVar5 = 0;
  param_1 = (CSelection<class_CBrushPolygon,256> *)0x0;
  local_18 = 0;
  local_10 = this_01;
  local_14 = 0;
  local_4 = 0;
  iVar3 = FUN_360cb720((int)this_01);
  if (0 < iVar3) {
    do {
      pCVar4 = (CBrushPolygon *)FUN_360cb0a0(this_01,iVar6);
      CopyPolygonInWorld(this,pCVar4,this_02,iVar5,&local_18,(long *)&param_1);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 1;
      local_14 = iVar6;
      iVar3 = FUN_360cb720((int)this_01);
    } while (iVar6 < iVar3);
  }
  local_4 = 0xffffffff;
  CBrushMip::Reoptimize(*(CBrushMip **)(this_02 + 0x38));
  pCVar2 = CBrush3D::GetFirstMip(*(CBrush3D **)(param_2 + 0x7c));
  CBrushMip::UpdateBoundingBox(pCVar2);
  RebuildLinks(this);
  FindShadowLayers(this,(AABBox<float,3> *)(pCVar2 + 0x24),0,1);
  ExceptionList = local_c;
  return;
}

