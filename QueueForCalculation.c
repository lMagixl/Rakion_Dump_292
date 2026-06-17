
/* public: void __thiscall CBrushShadowMap::QueueForCalculation(void) */

void __thiscall CBrushShadowMap::QueueForCalculation(CBrushShadowMap *this)

{
  int iVar1;
  
                    /* 0x1407b0  2897  ?QueueForCalculation@CBrushShadowMap@@QAEXXZ */
  iVar1 = CListNode::IsLinked((CListNode *)(this + 0x88));
  if (iVar1 == 0) {
    CListHead::AddTail((CListHead *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(this + 0xdc) + 0x38) +
                                                           0x14) + 0x668) + 0xa8) + 0x34) + 0x28),
                       (CListNode *)(this + 0x88));
  }
  return;
}

