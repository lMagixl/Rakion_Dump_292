
/* public: void __thiscall CObjectPolygonEdge::GetVertices(class CObjectVertex * &,class
   CObjectVertex * &) */

void __thiscall
CObjectPolygonEdge::GetVertices
          (CObjectPolygonEdge *this,CObjectVertex **param_1,CObjectVertex **param_2)

{
                    /* 0x54240  2201  ?GetVertices@CObjectPolygonEdge@@QAEXAAPAVCObjectVertex@@0@Z
                        */
  if (*(int *)(this + 4) != 0) {
    *param_1 = *(CObjectVertex **)(*(int *)this + 0x14);
    *param_2 = *(CObjectVertex **)(*(int *)this + 0x10);
    return;
  }
  *param_1 = *(CObjectVertex **)(*(int *)this + 0x10);
  *param_2 = *(CObjectVertex **)(*(int *)this + 0x14);
  return;
}

