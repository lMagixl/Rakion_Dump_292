
/* public: void __thiscall CWorld::AddTimer(class CRationalEntity *) */

void __thiscall CWorld::AddTimer(CWorld *this,CRationalEntity *param_1)

{
  CListNode *this_00;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0xc81e0  1026  ?AddTimer@CWorld@@QAEXPAVCRationalEntity@@@Z */
  this_00 = (CListNode *)(param_1 + 0x104);
  iVar2 = CListNode::IsLinked(this_00);
  if (iVar2 != 0) {
    CListNode::Remove(this_00);
  }
  piVar1 = *(int **)(this + 0x134);
  do {
    piVar3 = piVar1;
    if ((int *)*piVar3 == (int *)0x0) break;
    piVar1 = (int *)*piVar3;
  } while ((float)piVar3[2] < *(float *)(param_1 + 0x10c));
  *(CListNode **)piVar3[1] = this_00;
  *(int *)(param_1 + 0x108) = piVar3[1];
  *(int **)this_00 = piVar3;
  piVar3[1] = (int)this_00;
  return;
}

