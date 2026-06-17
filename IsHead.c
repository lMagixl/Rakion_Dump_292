
/* public: int __thiscall CListNode::IsHead(void)const  */

int __thiscall CListNode::IsHead(CListNode *this)

{
                    /* 0x12d0  2404  ?IsHead@CListNode@@QBEHXZ */
  return (uint)(*(int *)(*(int *)(this + 4) + 4) == 0);
}

