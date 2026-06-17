
/* public: int __thiscall CListHead::IsEmpty(void)const  */

int __thiscall CListHead::IsEmpty(CListHead *this)

{
                    /* 0x2b3f0  2387  ?IsEmpty@CListHead@@QBEHXZ */
  return (uint)(*(CListHead **)this == this + 4);
}

