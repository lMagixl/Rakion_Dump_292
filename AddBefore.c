
/* public: void __thiscall CListNode::AddBefore(class CListNode &) */

void __thiscall CListNode::AddBefore(CListNode *this,CListNode *param_1)

{
  undefined4 *puVar1;
  
                    /* 0x2b500  958  ?AddBefore@CListNode@@QAEXAAV1@@Z */
  puVar1 = *(undefined4 **)(this + 4);
  *(CListNode **)(this + 4) = param_1;
  *puVar1 = param_1;
  *(CListNode **)param_1 = this;
  *(undefined4 **)(param_1 + 4) = puVar1;
  return;
}

