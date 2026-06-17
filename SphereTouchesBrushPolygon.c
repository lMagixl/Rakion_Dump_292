
/* public: int __thiscall CClipTest::SphereTouchesBrushPolygon(class CMovingSphere const &,class
   CBrushPolygon *) */

int __thiscall
CClipTest::SphereTouchesBrushPolygon(CClipTest *this,CMovingSphere *param_1,CBrushPolygon *param_2)

{
  Vector<float,3> *pVVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *this_00;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int local_24;
  CClipTest *local_20;
  int local_1c;
  float local_18;
  undefined4 local_14;
  uint local_10;
  Vector<float,3> local_c [12];
  
                    /* 0x130be0  3646
                       ?SphereTouchesBrushPolygon@CClipTest@@QAEHABVCMovingSphere@@PAVCBrushPolygon@@@Z
                        */
  iVar7 = *(int *)param_2;
  this_00 = (float *)(iVar7 + 4);
  pVVar1 = (Vector<float,3> *)(param_1 + 0x10);
  fVar3 = (*this_00 * *(float *)pVVar1 +
          *(float *)(param_1 + 0x14) * *(float *)(iVar7 + 8) +
          *(float *)(param_1 + 0x18) * *(float *)(iVar7 + 0xc)) - *(float *)(iVar7 + 0x10);
  if ((fVar3 <= *(float *)(param_1 + 0xc)) && (-*(float *)(param_1 + 0xc) <= fVar3)) {
    local_18 = *(float *)pVVar1;
    local_14 = *(undefined4 *)(param_1 + 0x14);
    local_10 = *(uint *)(param_1 + 0x18);
    local_20 = this;
    FUN_3605fbc0(this_00,(float *)local_c,&local_18);
    FUN_360cd910(this_00,&local_24,&local_1c);
    local_18 = *(float *)(local_c + local_24 * 4 + -4);
    local_14 = *(undefined4 *)(local_c + local_1c * 4 + -4);
    local_10 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      piVar5 = *(int **)(param_2 + 8);
      iVar7 = local_24 * 4 + -4;
      local_24 = *(int *)(param_2 + 4);
      do {
        iVar4 = *(int *)*piVar5;
        iVar2 = ((int *)*piVar5)[1];
        CIntersector::AddEdge
                  ((CIntersector *)&local_18,*(float *)(iVar7 + iVar4 + 4),
                   *(float *)(local_1c * 4 + iVar4),*(float *)(iVar7 + iVar2 + 4),
                   *(float *)(local_1c * 4 + iVar2));
        piVar5 = piVar5 + 2;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      local_24 = 0;
    }
    uVar6 = local_10 & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    if (uVar6 == 0) {
      iVar7 = 0;
      if (*(int *)(param_2 + 4) < 1) {
        return 0;
      }
      while( true ) {
        CBrushPolygonEdge::GetVertexCoordinatesAbsolute
                  ((CBrushPolygonEdge *)(*(int *)(param_2 + 8) + iVar7 * 8),local_c,
                   (Vector<float,3> *)&local_18);
        iVar4 = PointTouchesCylinder
                          (local_20,pVVar1,local_c,(Vector<float,3> *)&local_18,
                           *(float *)(param_1 + 0xc));
        if ((iVar4 != 0) ||
           (iVar4 = PointTouchesSphere(local_20,pVVar1,local_c,*(float *)(param_1 + 0xc)),
           iVar4 != 0)) break;
        iVar7 = iVar7 + 1;
        if (*(int *)(param_2 + 4) <= iVar7) {
          return 0;
        }
      }
    }
    return 1;
  }
  return 0;
}

