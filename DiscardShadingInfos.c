
/* public: void __thiscall CBrushPolygon::DiscardShadingInfos(void) */

void __thiscall CBrushPolygon::DiscardShadingInfos(CBrushPolygon *this)

{
  CListNode *pCVar1;
  CListNode *this_00;
  
                    /* 0x13a350  1510  ?DiscardShadingInfos@CBrushPolygon@@QAEXXZ */
  this_00 = *(CListNode **)(this + 0x1bc);
  while (pCVar1 = *(CListNode **)this_00, pCVar1 != (CListNode *)0x0) {
    *(uint *)(*(int *)(this_00 + 0x2c) + 0x10) =
         *(uint *)(*(int *)(this_00 + 0x2c) + 0x10) & 0xffffffdf;
    CListNode::Remove(this_00);
    *(undefined4 *)(this_00 + 8) = 0;
    this_00 = pCVar1;
  }
  return;
}

