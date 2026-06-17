
/* public: class CEntityComponent * __thiscall CEntityClass::ComponentForTypeAndID(enum
   EntityComponentType,long) */

CEntityComponent * __thiscall
CEntityClass::ComponentForTypeAndID(CEntityClass *this,EntityComponentType param_1,long param_2)

{
  CEntityComponent *pCVar1;
  
                    /* 0x130070  1354
                       ?ComponentForTypeAndID@CEntityClass@@QAEPAVCEntityComponent@@W4EntityComponentType@@J@Z
                        */
  pCVar1 = CDLLEntityClass::ComponentForTypeAndID
                     (*(CDLLEntityClass **)(this + 0x20),param_1,param_2);
  return pCVar1;
}

