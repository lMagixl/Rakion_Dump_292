
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class CBrushPolygon * __thiscall CEntity::GetNearestPolygon(class Vector<float,3> &,class
   Plane<float,3> &,float &) */

CBrushPolygon * __thiscall
CEntity::GetNearestPolygon
          (CEntity *this,Vector<float,3> *param_1,Plane<float,3> *param_2,float *param_3)

{
  uint *puVar1;
  CBrushPolygon *this_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  
                    /* 0x134c00  2014
                       ?GetNearestPolygon@CEntity@@QAEPAVCBrushPolygon@@AAV?$Vector@M$02@@AAV?$Plane@M$02@@AAM@Z
                        */
  _DAT_362fd5b0 = *(undefined4 *)(this + 0x3c);
  _DAT_362fd5b4 = *(undefined4 *)(this + 0x40);
  _DAT_362fd5b8 = *(undefined4 *)(this + 0x44);
  piVar4 = *(int **)(this + 0xac);
  DAT_362fd5a8 = (CBrushPolygon *)0x0;
  _DAT_362fd5a4 = 0x7f61b1e6;
  _DAT_362fd5ac = this;
  for (; *piVar4 != 0; piVar4 = (int *)*piVar4) {
    CRelationLnk::GetSrc((CRelationLnk *)(piVar4 + -4));
    FUN_36134860();
  }
  FUN_36134950();
  iVar3 = 0;
  iVar2 = FUN_360de560(0x362fd5d8);
  if (0 < iVar2) {
    do {
      puVar1 = (uint *)(*(int *)(DAT_362fd5dc + iVar3 * 4) + 0x44);
      *puVar1 = *puVar1 & 0xffffffef;
      iVar3 = iVar3 + 1;
      iVar2 = FUN_360de560(0x362fd5d8);
    } while (iVar3 < iVar2);
  }
  this_00 = DAT_362fd5a8;
  DAT_362fd5e0 = 0;
  if (DAT_362fd5a8 == (CBrushPolygon *)0x0) {
    return (CBrushPolygon *)0x0;
  }
  iVar2 = *(int *)DAT_362fd5a8;
  *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 4);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar2 + 8);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)param_1 = DAT_362fd5bc;
  *(undefined4 *)(param_1 + 4) = DAT_362fd5c0;
  *(undefined4 *)(param_1 + 8) = DAT_362fd5c4;
  fVar5 = CBrushPolygon::GetDistanceFromEdges(this_00,(Vector<float,3> *)&DAT_362fd5bc);
  *param_3 = fVar5;
  return DAT_362fd5a8;
}

