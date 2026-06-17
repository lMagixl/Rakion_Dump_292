
/* public: __thiscall CTerrain::~CTerrain(void) */

void __thiscall CTerrain::~CTerrain(CTerrain *this)

{
  CListNode *this_00;
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x1718c0  492  ??1CTerrain@@QAE@XZ */
  puStack_8 = &LAB_3621a6e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  this_00 = (CListNode *)(this + 0x20);
  local_4 = 1;
  CListNode::Remove(this_00);
  TR_ClearTerrain(this);
  pvVar1 = *(void **)(this + 0x2c);
  if (pvVar1 != (void *)0x0) {
    FUN_36173ac0((int)pvVar1);
    operator_delete(pvVar1);
    *(undefined4 *)(this + 0x2c) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  iVar2 = CListNode::IsLinked(this_00);
  if (iVar2 != 0) {
    CListNode::Remove(this_00);
  }
  local_4 = 0xffffffff;
  iVar2 = CListNode::IsLinked((CListNode *)(this + 0x18));
  if (iVar2 != 0) {
    CListNode::Remove((CListNode *)(this + 0x18));
  }
  ExceptionList = local_c;
  return;
}

