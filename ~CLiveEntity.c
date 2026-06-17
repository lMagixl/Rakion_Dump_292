
/* public: virtual __thiscall CLiveEntity::~CLiveEntity(void) */

void __thiscall CLiveEntity::~CLiveEntity(CLiveEntity *this)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x62f0  435  ??1CLiveEntity@@UAE@XZ */
  puStack_8 = &LAB_36218a19;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &CEntity::_vftable_;
  uStack_4 = 1;
  FUN_360cc660((void *)(*(int *)(this + 0xa8) + 0x3c),(int)this);
  if ((*(uint *)(this + 8) & 0x200) != 0) {
    FUN_361030e0((void *)(*(int *)(this + 0xa8) + 0x68),(int)this);
  }
  FUN_360d84b0((void *)(*(int *)(this + 0xa8) + 0x4c),(int)this);
  FUN_360325c0((undefined4 *)(this + 0xac));
  RM_ClearCallbackData();
  if (*(undefined4 **)(this + 0x7c) != (undefined4 *)0x0) {
    iVar1 = (**(code **)**(undefined4 **)(this + 0x7c))();
    if (iVar1 == 1) {
      FUN_3612ed80((void *)(*(int *)(*(int *)(this + 0xa8) + 0x34) + 0x14),
                   *(CBrush3D **)(this + 0x7c));
    }
    else {
      if (iVar1 != 2) goto LAB_361298ca;
      FUN_3612edd0((void *)(*(int *)(*(int *)(this + 0xa8) + 0x38) + 0x14),
                   *(CTerrain **)(this + 0x7c));
    }
    *(undefined4 *)(this + 0x7c) = 0;
  }
LAB_361298ca:
  *(undefined4 *)(this + 4) = 2;
  CEntityClass::RemReference(*(CEntityClass **)(this + 0x78));
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x88) = 0xbf800000;
  DAT_362cce7c = DAT_362cce7c + -1;
  uStack_4 = uStack_4 & 0xffffff00;
  iVar1 = CListNode::IsLinked((CListNode *)(this + 0xbc));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(this + 0xbc));
  }
  uStack_4 = 0xffffffff;
  CRelationDst::~CRelationDst((CRelationDst *)(this + 0xac));
  ExceptionList = pvStack_c;
  return;
}

