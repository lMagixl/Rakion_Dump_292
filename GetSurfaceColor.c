
/* public: unsigned long __thiscall CModelObject::GetSurfaceColor(long,long) */

ulong __thiscall CModelObject::GetSurfaceColor(CModelObject *this,long param_1,long param_2)

{
  CModelData *pCVar1;
  int iVar2;
  int iVar3;
  
                    /* 0xb5670  2145  ?GetSurfaceColor@CModelObject@@QAEKJJ@Z */
  pCVar1 = GetData(this);
  if (param_1 < *(int *)(pCVar1 + 0x54)) {
    iVar2 = FUN_3600c0e0((undefined4 *)(pCVar1 + param_1 * 0x60 + 0xf8));
    if (param_2 < iVar2) {
      iVar2 = 0;
      if (0 < *(int *)(pCVar1 + param_1 * 0x60 + 0xd8)) {
        iVar3 = *(int *)(pCVar1 + param_1 * 0x60 + 0xec);
        do {
          if (*(int *)(iVar3 + 0x10) == param_2) {
            return *(ulong *)(iVar3 + 0xc);
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x1c;
        } while (iVar2 < *(int *)(pCVar1 + param_1 * 0x60 + 0xd8));
      }
      return 0;
    }
  }
  return 0xffffffff;
}

