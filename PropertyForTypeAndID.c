
/* public: class CEntityProperty * __thiscall CEntityClass::PropertyForTypeAndID(unsigned
   long,unsigned long) */

CEntityProperty * __thiscall
CEntityClass::PropertyForTypeAndID(CEntityClass *this,ulong param_1,ulong param_2)

{
  CEntityProperty *pCVar1;
  
                    /* 0x130050  2873
                       ?PropertyForTypeAndID@CEntityClass@@QAEPAVCEntityProperty@@KK@Z */
  pCVar1 = CDLLEntityClass::PropertyForTypeAndID(*(CDLLEntityClass **)(this + 0x20),param_1,param_2)
  ;
  return pCVar1;
}

