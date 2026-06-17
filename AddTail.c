
/* public: void __thiscall CListHead::AddTail(class CListNode &) */

void __thiscall CListHead::AddTail(CListHead *this,CListNode *param_1)

{
  undefined4 *puVar1;
  
                    /* 0x2b430  1019  ?AddTail@CListHead@@QAEXAAVCListNode@@@Z */
  puVar1 = *(undefined4 **)(this + 8);
  *(CListNode **)(this + 8) = param_1;
  *(undefined4 *)param_1 = *puVar1;
  *(undefined4 **)(param_1 + 4) = puVar1;
  *puVar1 = param_1;
  return;
}

