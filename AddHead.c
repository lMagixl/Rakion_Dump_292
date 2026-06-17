
/* public: void __thiscall CListHead::AddHead(class CListNode &) */

void __thiscall CListHead::AddHead(CListHead *this,CListNode *param_1)

{
  int iVar1;
  
                    /* 0x2b410  984  ?AddHead@CListHead@@QAEXAAVCListNode@@@Z */
  iVar1 = *(int *)this;
  *(CListNode **)this = param_1;
  *(int *)param_1 = iVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 4);
  *(CListNode **)(iVar1 + 4) = param_1;
  return;
}

