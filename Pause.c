
/* public: void __thiscall CSoundObject::Pause(void) */

void __thiscall CSoundObject::Pause(CSoundObject *this)

{
                    /* 0xa2d10  2759  ?Pause@CSoundObject@@QAEXXZ */
  if ((*(uint *)(this + 0x2c) & 0x20000000) == 0) {
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x20000000;
    if ((((byte)_pSound[0x44] & 2) != 0) && (-1 < *(int *)(this + 0x28))) {
      CSoundLibrary::ReleasePlayingBuffer(_pSound,*(int *)(this + 0x28),1);
      *(undefined4 *)(this + 0x28) = 0xffffffff;
    }
  }
  return;
}

