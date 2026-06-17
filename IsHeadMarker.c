
/* public: int __thiscall CListNode::IsHeadMarker(void)const  */

int __thiscall CListNode::IsHeadMarker(CListNode *this)

{
                    /* 0x1290  2405  ?IsHeadMarker@CListNode@@QBEHXZ */
  return (uint)(*(int *)(this + 4) == 0);
}

