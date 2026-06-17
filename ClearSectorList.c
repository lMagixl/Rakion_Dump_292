
/* public: void __thiscall CCastRay::ClearSectorList(void) */

void __thiscall CCastRay::ClearSectorList(CCastRay *this)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
                    /* 0xdbf70  1273  ?ClearSectorList@CCastRay@@QAEXXZ */
  iVar3 = 0;
  iVar2 = FUN_360de560(0x362cc0c4);
  if (0 < iVar2) {
    do {
      puVar1 = (uint *)(*(int *)(DAT_362cc0c8 + iVar3 * 4) + 0x44);
      *puVar1 = *puVar1 & 0xffffffbf;
      iVar3 = iVar3 + 1;
      iVar2 = FUN_360de560(0x362cc0c4);
    } while (iVar3 < iVar2);
  }
  DAT_362cc0cc = 0;
  *(undefined4 *)(this + 0x84) = 0;
  return;
}

