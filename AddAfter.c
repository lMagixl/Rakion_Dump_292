
/* public: void __thiscall CListNode::AddAfter(class CListNode &) */

void __thiscall CListNode::AddAfter(CListNode *this,CListNode *param_1)

{
  int iVar1;
  
                    /* 0x2b4e0  946  ?AddAfter@CListNode@@QAEXAAV1@@Z */
  iVar1 = *(int *)this;
  *(CListNode **)(iVar1 + 4) = param_1;
  *(CListNode **)this = param_1;
  *(int *)param_1 = iVar1;
  *(CListNode **)(param_1 + 4) = this;
  return;
}

