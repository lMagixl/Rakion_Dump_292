
/* public: void __thiscall CListNode::IterationInsertAfter(class CListNode &) */

void __thiscall CListNode::IterationInsertAfter(CListNode *this,CListNode *param_1)

{
                    /* 0x1250  2514  ?IterationInsertAfter@CListNode@@QAEXAAV1@@Z */
  *(CListNode **)(*(int *)this + 4) = param_1;
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(CListNode **)(param_1 + 4) = this;
  *(CListNode **)this = param_1;
  return;
}

