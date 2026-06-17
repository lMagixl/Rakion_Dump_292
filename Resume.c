
/* public: void __thiscall CSoundObject::Resume(void) */

void __thiscall CSoundObject::Resume(CSoundObject *this)

{
                    /* 0xa2d50  3172  ?Resume@CSoundObject@@QAEXXZ */
  *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) & 0xdfffffff;
  return;
}

