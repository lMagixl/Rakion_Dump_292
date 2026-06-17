
/* public: void __thiscall CRationalEntity::SetTimerAt(float) */

void __thiscall CRationalEntity::SetTimerAt(CRationalEntity *this,float param_1)

{
  int iVar1;
  
                    /* 0x127030  3617  ?SetTimerAt@CRationalEntity@@QAEXM@Z */
  *(float *)(this + 0x10c) = param_1;
  if (((((~(*(uint *)(this + 0x10) >> 0x1c) & 1) == 0) && (_bWorldEditorApp == 0)) &&
      (iVar1 = (**(code **)(*(int *)this + 0x90))(), iVar1 != 0)) &&
     ((*(uint *)(this + 0x10) & 0x1000000) == 0)) {
    return;
  }
  if (*(int *)(this + 0x10c) == -0x40800000) {
    iVar1 = CListNode::IsLinked((CListNode *)(this + 0x104));
    if (iVar1 != 0) {
      CListNode::Remove((CListNode *)(this + 0x104));
    }
    return;
  }
  CWorld::AddTimer(*(CWorld **)(this + 0xa8),this);
  return;
}

