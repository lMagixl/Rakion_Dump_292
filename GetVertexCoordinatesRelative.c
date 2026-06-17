
/* public: void __thiscall CBrushPolygonEdge::GetVertexCoordinatesRelative(class Vector<float,3>
   &,class Vector<float,3> &) */

void __thiscall
CBrushPolygonEdge::GetVertexCoordinatesRelative
          (CBrushPolygonEdge *this,Vector<float,3> *param_1,Vector<float,3> *param_2)

{
  int iVar1;
  
                    /* 0x4220  2196
                       ?GetVertexCoordinatesRelative@CBrushPolygonEdge@@QAEXAAV?$Vector@M$02@@0@Z */
  if (*(int *)(this + 4) != 0) {
    iVar1 = *(int *)(*(int *)this + 4);
    *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x18);
    iVar1 = **(int **)this;
    *(undefined4 *)param_2 = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 0x18);
    return;
  }
  iVar1 = **(int **)this;
  *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x18);
  iVar1 = *(int *)(*(int *)this + 4);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 0x18);
  return;
}

