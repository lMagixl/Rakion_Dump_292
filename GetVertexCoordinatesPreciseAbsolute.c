
/* public: void __thiscall CBrushPolygonEdge::GetVertexCoordinatesPreciseAbsolute(class
   Vector<double,3> &,class Vector<double,3> &) */

void __thiscall
CBrushPolygonEdge::GetVertexCoordinatesPreciseAbsolute
          (CBrushPolygonEdge *this,Vector<double,3> *param_1,Vector<double,3> *param_2)

{
  undefined4 *puVar1;
  
                    /* 0x4370  2194
                       ?GetVertexCoordinatesPreciseAbsolute@CBrushPolygonEdge@@QAEXAAV?$Vector@N$02@@0@Z
                        */
  if (*(int *)(this + 4) != 0) {
    puVar1 = *(undefined4 **)(*(int *)(*(int *)this + 4) + 0x38);
    *(undefined4 *)param_1 = *puVar1;
    *(undefined4 *)(param_1 + 4) = puVar1[1];
    *(undefined4 *)(param_1 + 8) = puVar1[2];
    *(undefined4 *)(param_1 + 0xc) = puVar1[3];
    *(undefined4 *)(param_1 + 0x10) = puVar1[4];
    *(undefined4 *)(param_1 + 0x14) = puVar1[5];
    puVar1 = *(undefined4 **)(**(int **)this + 0x38);
    *(undefined4 *)param_2 = *puVar1;
    *(undefined4 *)(param_2 + 4) = puVar1[1];
    *(undefined4 *)(param_2 + 8) = puVar1[2];
    *(undefined4 *)(param_2 + 0xc) = puVar1[3];
    *(undefined4 *)(param_2 + 0x10) = puVar1[4];
    *(undefined4 *)(param_2 + 0x14) = puVar1[5];
    return;
  }
  puVar1 = *(undefined4 **)(**(int **)this + 0x38);
  *(undefined4 *)param_1 = *puVar1;
  *(undefined4 *)(param_1 + 4) = puVar1[1];
  *(undefined4 *)(param_1 + 8) = puVar1[2];
  *(undefined4 *)(param_1 + 0xc) = puVar1[3];
  *(undefined4 *)(param_1 + 0x10) = puVar1[4];
  *(undefined4 *)(param_1 + 0x14) = puVar1[5];
  puVar1 = *(undefined4 **)(*(int *)(*(int *)this + 4) + 0x38);
  *(undefined4 *)param_2 = *puVar1;
  *(undefined4 *)(param_2 + 4) = puVar1[1];
  *(undefined4 *)(param_2 + 8) = puVar1[2];
  *(undefined4 *)(param_2 + 0xc) = puVar1[3];
  *(undefined4 *)(param_2 + 0x10) = puVar1[4];
  *(undefined4 *)(param_2 + 0x14) = puVar1[5];
  return;
}

