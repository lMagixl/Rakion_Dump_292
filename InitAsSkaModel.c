
/* public: void __thiscall CEntity::InitAsSkaModel(void) */

void __thiscall CEntity::InitAsSkaModel(CEntity *this)

{
  CListNode *this_00;
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x1269a0  2301  ?InitAsSkaModel@CEntity@@QAEXXZ */
  this_00 = *(CListNode **)(this + 0x80);
  *(undefined4 *)(this + 4) = 9;
  if (this_00 != (CListNode *)0x0) {
    iVar1 = CListNode::IsLinked(this_00);
    if (iVar1 != 0) {
      CListNode::Remove(this_00);
    }
    operator_delete(this_00);
  }
  puVar2 = (undefined4 *)FUN_361bf99c(0x30);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 **)(this + 0x80) = puVar2;
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffffdf;
    return;
  }
  *(undefined4 *)(this + 0x80) = 0;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffffdf;
  return;
}

