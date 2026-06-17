
/* private: void __thiscall CGfxLibrary::EndDriver_D3D(void) */

void __thiscall CGfxLibrary::EndDriver_D3D(CGfxLibrary *this)

{
                    /* 0x739f0  1561  ?EndDriver_D3D@CGfxLibrary@@AAEXXZ */
  if (DAT_362c4d70 != (void *)0x0) {
    FreeMemory(DAT_362c4d70);
    DAT_362c4d70 = (void *)0x0;
  }
  FUN_36073810(0);
  FUN_360731a0(0);
  FUN_36072de0(0);
  *(undefined4 *)(this + 0xa60) = 0;
  *(undefined4 *)(this + 0xa64) = 0;
  if (((byte)this[0xa54] & 4) != 0) {
    (**(code **)(**(int **)(this + 0xa5c) + 0x48))(*(int **)(this + 0xa5c),0,PTR_DAT_362a3f20);
  }
  (**(code **)(**(int **)(this + 0xa5c) + 8))(*(int **)(this + 0xa5c));
  (**(code **)(**(int **)(this + 0xa58) + 8))(*(int **)(this + 0xa58));
  return;
}

