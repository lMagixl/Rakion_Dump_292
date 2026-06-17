
/* public: void __thiscall CLightSource::UpdateTerrains(void) */

void __thiscall CLightSource::UpdateTerrains(CLightSource *this)

{
  int iVar1;
  
                    /* 0x149650  3929  ?UpdateTerrains@CLightSource@@QAEXXZ */
  iVar1 = *(int *)(this + 0xc);
  if (iVar1 != 0) {
    UpdateTerrains(this,*(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(iVar1 + 0x40),
                   *(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48),
                   *(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
                   *(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(iVar1 + 0x40),
                   *(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48),
                   *(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50));
  }
  return;
}

