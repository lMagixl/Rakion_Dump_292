
/* public: void __thiscall CEntity::InitAsModel(void) */

void __thiscall CEntity::InitAsModel(CEntity *this)

{
  CListNode *this_00;
  CModelObject *pCVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1268d0  2299  ?InitAsModel@CEntity@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218948;
  local_c = ExceptionList;
  pCVar1 = *(CModelObject **)(this + 0x7c);
  ExceptionList = &local_c;
  *(undefined4 *)(this + 4) = 3;
  if (pCVar1 != (CModelObject *)0x0) {
    CModelObject::~CModelObject(pCVar1);
    operator_delete(pCVar1);
  }
  pCVar1 = (CModelObject *)FUN_361bf99c(0xac);
  local_4 = 0;
  if (pCVar1 == (CModelObject *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CModelObject::CModelObject(pCVar1);
  }
  this_00 = *(CListNode **)(this + 0x80);
  local_4 = 0xffffffff;
  *(undefined4 *)(this + 0x7c) = uVar2;
  if (this_00 != (CListNode *)0x0) {
    iVar3 = CListNode::IsLinked(this_00);
    if (iVar3 != 0) {
      CListNode::Remove(this_00);
    }
    operator_delete(this_00);
  }
  puVar4 = (undefined4 *)FUN_361bf99c(0x30);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  *(undefined4 **)(this + 0x80) = puVar4;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffffdf;
  ExceptionList = local_c;
  return;
}

