
/* public: class CEntityProperty * __thiscall CEntityClass::PropertyForName(class CTString const &)
    */

CEntityProperty * __thiscall CEntityClass::PropertyForName(CEntityClass *this,CTString *param_1)

{
  CEntityProperty *pCVar1;
  
                    /* 0x130040  2870
                       ?PropertyForName@CEntityClass@@QAEPAVCEntityProperty@@ABVCTString@@@Z */
  pCVar1 = CDLLEntityClass::PropertyForName(*(CDLLEntityClass **)(this + 0x20),param_1);
  return pCVar1;
}

