
/* public: void __thiscall CEntityClass::ReleaseComponents(void) */

void __thiscall CEntityClass::ReleaseComponents(CEntityClass *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0x12f670  3095  ?ReleaseComponents@CEntityClass@@QAEXXZ */
  iVar1 = 0;
  if (*(int *)(this + 0x20) != 0) {
    iVar1 = *(int *)(*(int *)(this + 0x20) + 0x1c);
  }
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      CEntityComponent::Release
                ((CEntityComponent *)(*(int *)(*(int *)(this + 0x20) + 0x18) + iVar2));
      iVar2 = iVar2 + 0x18;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

