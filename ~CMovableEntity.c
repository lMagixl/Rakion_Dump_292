
/* public: virtual __thiscall CMovableEntity::~CMovableEntity(void) */

void __thiscall CMovableEntity::~CMovableEntity(CMovableEntity *this)

{
  CEntity *pCVar1;
  CEntity *pCVar2;
  int iVar3;
  xEncryptMemory *pxVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1b3970  448  ??1CMovableEntity@@UAE@XZ */
  puStack_8 = &LAB_3621c008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 9;
  iVar3 = CListNode::IsLinked((CListNode *)(this + 0x34c));
  if (iVar3 != 0) {
    CListNode::Remove((CListNode *)(this + 0x34c));
  }
  if (*(int *)(this + 0x2ac) != 0) {
    operator_delete__(*(void **)(this + 0x2b0));
    *(undefined4 *)(this + 0x2ac) = 0;
    *(undefined4 *)(this + 0x2b0) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  iVar3 = CListNode::IsLinked((CListNode *)(this + 0x2a0));
  if (iVar3 != 0) {
    CListNode::Remove((CListNode *)(this + 0x2a0));
  }
  uVar5 = *(uint *)(this + 0x278);
  iVar3 = 1;
  local_4._0_1_ = 6;
  *(undefined ***)(this + 0x274) = &PTR_FUN_362239d0;
  pxVar4 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar4,uVar5,iVar3);
  uVar5 = *(uint *)(this + 0x26c);
  iVar3 = 1;
  local_4._0_1_ = 5;
  *(undefined ***)(this + 0x268) = &PTR_FUN_362239d0;
  pxVar4 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar4,uVar5,iVar3);
  uVar5 = *(uint *)(this + 0x254);
  iVar3 = 3;
  local_4._0_1_ = 4;
  *(undefined ***)(this + 0x250) = &PTR_FUN_36230738;
  pxVar4 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar4,uVar5,iVar3);
  pCVar2 = *(CEntity **)(this + 0x248);
  local_4._0_1_ = 3;
  if (pCVar2 != (CEntity *)0x0) {
    pCVar1 = pCVar2 + 0x18;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      CEntity::DeleteSelf(pCVar2);
    }
  }
  pCVar2 = *(CEntity **)(this + 0x244);
  local_4._0_1_ = 2;
  if (pCVar2 != (CEntity *)0x0) {
    pCVar1 = pCVar2 + 0x18;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      CEntity::DeleteSelf(pCVar2);
    }
  }
  pCVar2 = *(CEntity **)(this + 0x15c);
  local_4._0_1_ = 1;
  if (pCVar2 != (CEntity *)0x0) {
    pCVar1 = pCVar2 + 0x18;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      CEntity::DeleteSelf(pCVar2);
    }
  }
  pCVar2 = *(CEntity **)(this + 0x148);
  local_4 = (uint)local_4._1_3_ << 8;
  if (pCVar2 != (CEntity *)0x0) {
    pCVar1 = pCVar2 + 0x18;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      CEntity::DeleteSelf(pCVar2);
    }
  }
  local_4 = 0xffffffff;
  CRationalEntity::~CRationalEntity((CRationalEntity *)this);
  ExceptionList = local_c;
  return;
}

