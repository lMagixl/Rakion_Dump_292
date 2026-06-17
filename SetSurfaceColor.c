
/* public: void __thiscall CModelObject::SetSurfaceColor(long,long,unsigned long) */

void __thiscall
CModelObject::SetSurfaceColor(CModelObject *this,long param_1,long param_2,ulong param_3)

{
  CModelData *pCVar1;
  int iVar2;
  int iVar3;
  
                    /* 0xb56e0  3600  ?SetSurfaceColor@CModelObject@@QAEXJJK@Z */
  pCVar1 = GetData(this);
  if (param_1 < *(int *)(pCVar1 + 0x54)) {
    iVar2 = FUN_3600c0e0((undefined4 *)(pCVar1 + param_1 * 0x60 + 0xf8));
    if (param_2 < iVar2) {
      *(ulong *)(*(int *)(pCVar1 + param_1 * 0x60 + 0xfc) + 4 + param_2 * 0x70) = param_3;
      iVar2 = 0;
      if (0 < *(int *)(pCVar1 + param_1 * 0x60 + 0xd8)) {
        iVar3 = 0;
        do {
          if (*(int *)(*(int *)(pCVar1 + param_1 * 0x60 + 0xec) + 0x10 + iVar3) == param_2) {
            *(ulong *)(*(int *)(pCVar1 + param_1 * 0x60 + 0xec) + iVar3 + 0xc) = param_3;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x1c;
        } while (iVar2 < *(int *)(pCVar1 + param_1 * 0x60 + 0xd8));
      }
    }
  }
  return;
}

