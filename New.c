
/* public: class CEntity * __thiscall CEntityClass::New(void) */

CEntity * __thiscall CEntityClass::New(CEntityClass *this)

{
  CEntity *pCVar1;
  
                    /* 0x12f5a0  2665  ?New@CEntityClass@@QAEPAVCEntity@@XZ */
  pCVar1 = (CEntity *)(**(code **)(*(int *)(this + 0x20) + 0x30))();
  AddReference(this);
  *(CEntityClass **)(pCVar1 + 0x78) = this;
  (**(code **)(*(int *)pCVar1 + 0x28))();
  return pCVar1;
}

