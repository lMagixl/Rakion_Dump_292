
/* public: __thiscall CBrushShadowLayer::~CBrushShadowLayer(void) */

void __thiscall CBrushShadowLayer::~CBrushShadowLayer(CBrushShadowLayer *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x1407f0  398  ??1CBrushShadowLayer@@QAE@XZ */
  puStack_8 = &LAB_36219966;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  DiscardShadows(this);
  local_4 = local_4 & 0xffffff00;
  iVar1 = CListNode::IsLinked((CListNode *)(this + 0xc));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(this + 0xc));
  }
  local_4 = 0xffffffff;
  iVar1 = CListNode::IsLinked((CListNode *)(this + 4));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(this + 4));
  }
  ExceptionList = local_c;
  return;
}

