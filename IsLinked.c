
/* public: int __thiscall CListNode::IsLinked(void)const  */

int __thiscall CListNode::IsLinked(CListNode *this)

{
                    /* 0x2b4b0  2414  ?IsLinked@CListNode@@QBEHXZ */
  return (uint)(*(int *)(this + 4) != 0);
}

