
/* public: void __thiscall CShadowMap::MarkDrawn(void) */

void __thiscall CShadowMap::MarkDrawn(CShadowMap *this)

{
  undefined4 *puVar1;
  
                    /* 0x91d70  2626  ?MarkDrawn@CShadowMap@@QAEXXZ */
  CListNode::Remove((CListNode *)(this + 8));
  puVar1 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
  *(undefined4 *)(this + 0x48) = *puVar1;
  *(undefined4 *)(this + 0x4c) = puVar1[1];
  CListHead::AddTail((CListHead *)(_pGfx + 0xb0c),(CListNode *)(this + 8));
  return;
}

