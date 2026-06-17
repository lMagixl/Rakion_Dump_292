
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: double __thiscall CSoundData::GetSecondsLength(void) */

double __thiscall CSoundData::GetSecondsLength(CSoundData *this)

{
                    /* 0x9c730  2090  ?GetSecondsLength@CSoundData@@QAENXZ */
  if (((byte)this[0x44] & 1) == 0) {
    return *(double *)(this + 0x30);
  }
  return _DAT_36227d98;
}

