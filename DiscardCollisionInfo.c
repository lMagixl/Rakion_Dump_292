
/* public: void __thiscall CEntity::DiscardCollisionInfo(void) */

void __thiscall CEntity::DiscardCollisionInfo(CEntity *this)

{
  CCollisionInfo *this_00;
  
                    /* 0x12aae0  1509  ?DiscardCollisionInfo@CEntity@@QAEXXZ */
  if (*(int *)(this + 0x84) != 0) {
    if ((*(int *)(this + 4) != 4) && (*(int *)(this + 4) != 8)) {
      CWorld::RemoveEntityFromCollisionGrid
                (*(CWorld **)(this + 0xa8),this,(AABBox<float,3> *)(*(int *)(this + 0x84) + 0x18));
    }
    this_00 = *(CCollisionInfo **)(this + 0x84);
    if (this_00 != (CCollisionInfo *)0x0) {
      CCollisionInfo::~CCollisionInfo(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + 0x84) = 0;
  }
  if ((*(uint *)(this + 8) & 0x200) != 0) {
    CMovableEntity::ClearTemporaryData((CMovableEntity *)this);
    return;
  }
  return;
}

