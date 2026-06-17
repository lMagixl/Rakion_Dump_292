
/* public: void __thiscall CDLLEntityClass::PrecacheClass(long,long) */

void __thiscall CDLLEntityClass::PrecacheClass(CDLLEntityClass *this,long param_1,long param_2)

{
  long lVar1;
  CEntityComponent *this_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12fbd0  2800  ?PrecacheClass@CDLLEntityClass@@QAEXJJ@Z */
  lVar1 = _precache_bNowPrecaching;
  puStack_8 = &LAB_36218d04;
  pvStack_c = ExceptionList;
  _precache_bNowPrecaching = 1;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  this_00 = ComponentForTypeAndID(this,3,param_1);
  CEntityComponent::ObtainWithCheck(this_00);
  (**(code **)(*(int *)(*(int *)(this_00 + 0x14) + 0x20) + 0x3c))
            (*(int *)(*(int *)(this_00 + 0x14) + 0x20),param_2);
  _precache_bNowPrecaching = lVar1;
  ExceptionList = pvStack_c;
  return;
}

