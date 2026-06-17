
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSoundLibrary::ClearLibrary(void) */

void __thiscall CSoundLibrary::ClearLibrary(CSoundLibrary *this)

{
  CSoundLibrary *pCVar1;
  int iVar2;
  
                    /* 0x9feb0  1262  ?ClearLibrary@CSoundLibrary@@QAEXXZ */
  iVar2 = 0;
  pCVar1 = this + 0x78;
  do {
    if (*(int *)pCVar1 == 0) {
      ReleasePlayingBuffer(this,iVar2,1);
    }
    iVar2 = iVar2 + 1;
    pCVar1 = pCVar1 + 0x14;
  } while (iVar2 < 0x32);
  *(undefined8 *)(this + 0x468) = _DAT_36227d98;
  ShutDown_dsound(this);
  ShutDown_waveout(this);
  if (*(void **)(this + 0x60) != (void *)0x0) {
    FreeMemory(*(void **)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  if (*(void **)(this + 100) != (void *)0x0) {
    FreeMemory(*(void **)(this + 100));
    *(undefined4 *)(this + 100) = 0;
  }
  return;
}

