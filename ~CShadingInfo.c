
/* public: __thiscall CShadingInfo::~CShadingInfo(void) */

void __thiscall CShadingInfo::~CShadingInfo(CShadingInfo *this)

{
  int iVar1;
  
                    /* 0xf2d60  475  ??1CShadingInfo@@QAE@XZ */
  iVar1 = CListNode::IsLinked((CListNode *)this);
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)this);
    return;
  }
  return;
}

