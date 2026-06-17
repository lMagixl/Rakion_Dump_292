
/* public: int __thiscall CListNode::IsTail(void)const  */

int __thiscall CListNode::IsTail(CListNode *this)

{
                    /* 0x12f0  2479  ?IsTail@CListNode@@QBEHXZ */
  return (uint)(**(int **)this == 0);
}

