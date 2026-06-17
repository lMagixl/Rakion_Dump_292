
/* public: void __thiscall CListNode::Remove(void) */

void __thiscall CListNode::Remove(CListNode *this)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x2b4c0  3115  ?Remove@CListNode@@QAEXXZ */
  iVar1 = *(int *)this;
  piVar2 = *(int **)(this + 4);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}

