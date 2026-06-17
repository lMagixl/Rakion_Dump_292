
/* public: void __thiscall CDLLEntityClass::PrecacheSkaModel(long) */

void __thiscall CDLLEntityClass::PrecacheSkaModel(CDLLEntityClass *this,long param_1)

{
  long lVar1;
  CEntityComponent *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12fb70  2805  ?PrecacheSkaModel@CDLLEntityClass@@QAEXJ@Z */
  lVar1 = _precache_bNowPrecaching;
  puStack_8 = &LAB_36218cf2;
  local_c = ExceptionList;
  _precache_bNowPrecaching = 1;
  local_4 = 0;
  ExceptionList = &local_c;
  this_00 = ComponentForTypeAndID(this,5,param_1);
  CEntityComponent::ObtainWithCheck(this_00);
  _precache_bNowPrecaching = lVar1;
  ExceptionList = local_c;
  return;
}

