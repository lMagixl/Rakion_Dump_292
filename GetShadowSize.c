
/* public: unsigned long __thiscall CShadowMap::GetShadowSize(void) */

ulong __thiscall CShadowMap::GetShadowSize(CShadowMap *this)

{
  uint uVar1;
  
                    /* 0x91d10  2099  ?GetShadowSize@CShadowMap@@QAEKXZ */
  uVar1 = *(uint *)(this + -8);
  if (((((uVar1 & 0x400000) == 0) || ((uVar1 & 0x8020) != 0)) && ((~(uVar1 >> 0xe) & 1) != 0)) &&
     (*(CShadowMap **)(this + 0x30) != this + 0x1c)) {
    return (*(int *)(this + 0x2c) >> ((byte)*(undefined4 *)(this + 0x14) & 0x1f)) *
           (*(int *)(this + 0x28) >> ((byte)*(undefined4 *)(this + 0x14) & 0x1f)) * 4;
  }
  return 0;
}

