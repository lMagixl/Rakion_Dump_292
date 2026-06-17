
/* public: __thiscall CBrushShadowMap::~CBrushShadowMap(void) */

void __thiscall CBrushShadowMap::~CBrushShadowMap(CBrushShadowMap *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x140ca0  399  ??1CBrushShadowMap@@QAE@XZ */
  puStack_8 = &LAB_36219986;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 1;
  DiscardAllLayers(this);
  if (*(void **)(this + 0x9c) != (void *)0x0) {
    FreeMemory(*(void **)(this + 0x9c));
    *(undefined4 *)(this + 0x9c) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  iVar1 = CListNode::IsLinked((CListNode *)(this + 0x88));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(this + 0x88));
  }
  local_4 = 0xffffffff;
  CShadowMap::~CShadowMap((CShadowMap *)this);
  ExceptionList = local_c;
  return;
}

