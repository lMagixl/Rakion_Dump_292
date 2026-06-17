
/* public: void __thiscall CBrushPolygonEdge::GetVertexCoordinatesPreciseRelative(class
   Vector<double,3> &,class Vector<double,3> &) */

void __thiscall
CBrushPolygonEdge::GetVertexCoordinatesPreciseRelative
          (CBrushPolygonEdge *this,Vector<double,3> *param_1,Vector<double,3> *param_2)

{
  int iVar1;
  
                    /* 0x42a0  2195
                       ?GetVertexCoordinatesPreciseRelative@CBrushPolygonEdge@@QAEXAAV?$Vector@N$02@@0@Z
                        */
  if (*(int *)(this + 4) != 0) {
    iVar1 = *(int *)(*(int *)this + 4);
    *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x34);
    iVar1 = **(int **)this;
    *(undefined4 *)param_2 = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iVar1 + 0x34);
    return;
  }
  iVar1 = **(int **)this;
  *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x34);
  iVar1 = *(int *)(*(int *)this + 4);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iVar1 + 0x34);
  return;
}

