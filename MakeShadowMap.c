
/* public: void __thiscall CBrushPolygon::MakeShadowMap(class CWorld *,int) */

void __thiscall CBrushPolygon::MakeShadowMap(CBrushPolygon *this,CWorld *param_1,int param_2)

{
  int iVar1;
  undefined1 local_134 [308];
  
                    /* 0x1466a0  2620  ?MakeShadowMap@CBrushPolygon@@QAEXPAVCWorld@@H@Z */
  iVar1 = FUN_361465b0(local_134,(int)this,(int)param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = CListNode::IsLinked((CListNode *)(this + 0x158));
    if (iVar1 != 0) {
      CListNode::Remove((CListNode *)(this + 0x158));
    }
  }
  return;
}

