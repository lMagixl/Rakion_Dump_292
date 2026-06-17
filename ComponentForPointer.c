
/* public: class CEntityComponent * __thiscall CEntityClass::ComponentForPointer(void *) */

CEntityComponent * __thiscall CEntityClass::ComponentForPointer(CEntityClass *this,void *param_1)

{
  CEntityComponent *pCVar1;
  
                    /* 0x130080  1351
                       ?ComponentForPointer@CEntityClass@@QAEPAVCEntityComponent@@PAX@Z */
  pCVar1 = CDLLEntityClass::ComponentForPointer(*(CDLLEntityClass **)(this + 0x20),param_1);
  return pCVar1;
}

