
/* public: __thiscall CObjectPolygonEdge::CObjectPolygonEdge(class CObjectEdge *,int) */

void __thiscall
CObjectPolygonEdge::CObjectPolygonEdge(CObjectPolygonEdge *this,CObjectEdge *param_1,int param_2)

{
                    /* 0x49d50  181  ??0CObjectPolygonEdge@@QAE@PAVCObjectEdge@@H@Z */
  *(CObjectEdge **)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}

