
/* public: void __thiscall CriticalSection::leaveCriticalSection(void) */

void __thiscall CriticalSection::leaveCriticalSection(CriticalSection *this)

{
                    /* 0x1bc0  4231  ?leaveCriticalSection@CriticalSection@@QAEXXZ */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

