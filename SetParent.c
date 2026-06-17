
/* public: void __thiscall CEntity::SetParent(class CEntity *) */

void __thiscall CEntity::SetParent(CEntity *this,CEntity *param_1)

{
  CEntity *pCVar1;
  CEntity *pCVar2;
  
                    /* 0x124be0  3544  ?SetParent@CEntity@@QAEXPAV1@@Z */
  if (*(int *)(this + 0xb8) != 0) {
    *(undefined4 *)(this + 0xb8) = 0;
    CListNode::Remove((CListNode *)(this + 0xbc));
  }
  pCVar2 = param_1;
  if (param_1 != (CEntity *)0x0) {
    while (pCVar2 != this) {
      pCVar1 = pCVar2 + 0xb8;
      pCVar2 = *(CEntity **)pCVar1;
      if (*(CEntity **)pCVar1 == (CEntity *)0x0) {
        *(CEntity **)(this + 0xb8) = param_1;
        CListHead::AddTail((CListHead *)(param_1 + 0xc4),(CListNode *)(this + 0xbc));
        *(undefined4 *)(this + 0xd0) = *(undefined4 *)(this + 0x3c);
        *(undefined4 *)(this + 0xd4) = *(undefined4 *)(this + 0x40);
        *(undefined4 *)(this + 0xd8) = *(undefined4 *)(this + 0x44);
        *(undefined4 *)(this + 0xdc) = *(undefined4 *)(this + 0x48);
        *(undefined4 *)(this + 0xe0) = *(undefined4 *)(this + 0x4c);
        *(undefined4 *)(this + 0xe4) = *(undefined4 *)(this + 0x50);
        CPlacement3D::AbsoluteToRelativeSmooth
                  ((CPlacement3D *)(this + 0xd0),(CPlacement3D *)(*(int *)(this + 0xb8) + 0x3c));
        return;
      }
    }
  }
  return;
}

