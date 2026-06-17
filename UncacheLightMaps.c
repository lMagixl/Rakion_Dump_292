
/* public: void __thiscall CBrushSector::UncacheLightMaps(void) */

void __thiscall CBrushSector::UncacheLightMaps(CBrushSector *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13c810  3870  ?UncacheLightMaps@CBrushSector@@QAEXXZ */
  puStack_8 = &LAB_36219698;
  local_c = ExceptionList;
  iVar1 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(this + 0x18)) {
    do {
      CShadowMap::Uncache((CShadowMap *)(iVar1 * 0x1d0 + 0xd0 + *(int *)(this + 0x1c)));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x18));
  }
  ExceptionList = local_c;
  return;
}

