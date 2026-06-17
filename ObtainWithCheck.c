
/* public: void __thiscall CEntityComponent::ObtainWithCheck(void) */

void __thiscall CEntityComponent::ObtainWithCheck(CEntityComponent *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x132ee0  2697  ?ObtainWithCheck@CEntityComponent@@QAEXXZ */
  puStack_c = &LAB_36218f40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  Obtain_t(this);
  ExceptionList = local_10;
  return;
}

