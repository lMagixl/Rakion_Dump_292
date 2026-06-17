
/* public: int __thiscall CShadowMap::IsFlat(void) */

int __thiscall CShadowMap::IsFlat(CShadowMap *this)

{
                    /* 0x3e20  2395  ?IsFlat@CShadowMap@@QAEHXZ */
  if ((*(CShadowMap **)(this + 0x30) == this + 0x1c) &&
     ((*(int *)(this + 0x34) == 0 || (((byte)this[0x10] & 2) != 0)))) {
    return 1;
  }
  return 0;
}

