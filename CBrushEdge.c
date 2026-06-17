
/* public: __thiscall CBrushEdge::CBrushEdge(class CBrushVertex *,class CBrushVertex *) */

void __thiscall CBrushEdge::CBrushEdge(CBrushEdge *this,CBrushVertex *param_1,CBrushVertex *param_2)

{
                    /* 0x40f0  37  ??0CBrushEdge@@QAE@PAVCBrushVertex@@0@Z */
  *(CBrushVertex **)this = param_1;
  *(CBrushVertex **)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = 0;
  return;
}

