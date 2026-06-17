
/* public: void __thiscall CEntity::ModelChangeNotify(void) */

void __thiscall CEntity::ModelChangeNotify(CEntity *this)

{
  CModelData *pCVar1;
  
                    /* 0x12d030  2653  ?ModelChangeNotify@CEntity@@QAEXXZ */
  if ((*(int *)(this + 4) == 9) || (*(int *)(this + 4) == 10)) {
    pCVar1 = *(CModelData **)(this + 0x7c);
  }
  else {
    if (*(CModelObject **)(this + 0x7c) == (CModelObject *)0x0) {
      return;
    }
    pCVar1 = CModelObject::GetData(*(CModelObject **)(this + 0x7c));
  }
  if (pCVar1 == (CModelData *)0x0) {
    return;
  }
  UpdateSpatialRange(this);
  FindCollisionInfo(this);
  return;
}

