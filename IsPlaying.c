
/* public: int __thiscall CSoundObject::IsPlaying(void)const  */

int __thiscall CSoundObject::IsPlaying(CSoundObject *this)

{
                    /* 0x329b0  2449  ?IsPlaying@CSoundObject@@QBEHXZ */
  return *(uint *)(this + 0x2c) & 0x80000000;
}

