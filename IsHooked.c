
/* public: int __thiscall CSoundObject::IsHooked(void)const  */

int __thiscall CSoundObject::IsHooked(CSoundObject *this)

{
  return (uint)(*(int *)(this + 4) != 0);
                    /* 0x329d0  2407  ?IsHooked@CSoundObject@@QBEHXZ */
}

