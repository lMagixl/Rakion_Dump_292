
/* public: void __thiscall CSoundLibrary::ReleasePlayingBuffer(long,int) */

void __thiscall CSoundLibrary::ReleasePlayingBuffer(CSoundLibrary *this,long param_1,int param_2)

{
                    /* 0x9eb60  3096  ?ReleasePlayingBuffer@CSoundLibrary@@QAEXJH@Z */
  *(undefined4 *)(this + param_1 * 0x14 + 0x74) = 0;
  *(undefined4 *)(this + param_1 * 0x14 + 0x70) = 0;
  if (param_2 != 0) {
    FUN_3609ea10();
  }
  return;
}

