
/* public: void __thiscall CEntityClass::ObtainComponents_t(void) */

void __thiscall CEntityClass::ObtainComponents_t(CEntityClass *this)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12f5d0  2694  ?ObtainComponents_t@CEntityClass@@QAEXXZ */
  puStack_c = &LAB_36218c90;
  local_10 = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_10;
  while( true ) {
    iVar1 = *(int *)(this + 0x20);
    if (*(int *)(iVar1 + 0x1c) <= iVar2) break;
    if ((gam_iPrecachePolicy < 2) && (*(int *)(*(int *)(iVar1 + 0x18) + iVar2 * 0x18) != 3)) {
      iVar2 = iVar2 + 1;
    }
    else {
      local_8 = 0;
      CEntityComponent::Obtain_t((CEntityComponent *)(*(int *)(iVar1 + 0x18) + iVar2 * 0x18));
      iVar2 = iVar2 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}

