
/* public: long __thiscall CAnimObject::GetFramesInCurrentAnim(void)const  */

long __thiscall CAnimObject::GetFramesInCurrentAnim(CAnimObject *this)

{
                    /* 0x20330  1892  ?GetFramesInCurrentAnim@CAnimObject@@QBEJXZ */
  return *(long *)(*(int *)(this + 8) * 0x2c + 0x24 + *(int *)(*(int *)(this + 0x14) + 0x18));
}

