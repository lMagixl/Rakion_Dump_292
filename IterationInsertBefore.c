
/* public: void __thiscall CListNode::IterationInsertBefore(class CListNode &) */

void __thiscall CListNode::IterationInsertBefore(CListNode *this,CListNode *param_1)

{
                    /* 0x1270  2515  ?IterationInsertBefore@CListNode@@QAEXAAV1@@Z */
  **(undefined4 **)(this + 4) = param_1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(CListNode **)param_1 = this;
  *(CListNode **)(this + 4) = param_1;
  return;
}

