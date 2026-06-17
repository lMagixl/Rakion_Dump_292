
/* public: int (__thiscall CEntity::*__thiscall
   CEntityClass::HandlerForStateAndEvent(long,long))(class CEntityEvent const &) */

_func_int_CEntityEvent_ptr * __thiscall
CEntityClass::HandlerForStateAndEvent(CEntityClass *this,long param_1,long param_2)

{
  _func_int_CEntityEvent_ptr *p_Var1;
  
                    /* 0x130060  2248
                       ?HandlerForStateAndEvent@CEntityClass@@QAEP8CEntity@@AEHABVCEntityEvent@@@ZJJ@Z
                        */
  p_Var1 = CDLLEntityClass::HandlerForStateAndEvent
                     (*(CDLLEntityClass **)(this + 0x20),param_1,param_2);
  return p_Var1;
}

