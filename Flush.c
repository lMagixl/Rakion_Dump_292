
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSoundLibrary::Flush(void) */

void __thiscall CSoundLibrary::Flush(CSoundLibrary *this)

{
  CSoundObject *pCVar1;
  int *piVar2;
  CSoundObject *this_00;
  uint unaff_EBX;
  CSoundLibrary *pCStack_4;
  
  pCStack_4 = this;
                    /* 0x9f2e0  1658  ?Flush@CSoundLibrary@@QAEXXZ */
  IFeel_StopEffect((char *)0x0);
  *(undefined8 *)(this + 0x468) = _DAT_36227d98;
  if (((byte)this[0x44] & 1) == 0) {
    this_00 = *(CSoundObject **)(this + 0x458);
    while (pCVar1 = *(CSoundObject **)this_00, pCVar1 != (CSoundObject *)0x0) {
      CSoundObject::Stop(this_00,1);
      this_00 = pCVar1;
    }
    piVar2 = *(int **)(this + 0x30);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x48))(piVar2);
      do {
        (**(code **)(**(int **)(this + 0x30) + 0x24))(*(int **)(this + 0x30),&pCStack_4);
      } while (((uint)pCStack_4 & 1) != 0);
    }
    piVar2 = *(int **)(this + 0x24);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x48))(piVar2);
      do {
        (**(code **)(**(int **)(this + 0x24) + 0x24))(*(int **)(this + 0x24),&stack0xfffffff8);
      } while ((unaff_EBX & 1) != 0);
    }
  }
  return;
}

