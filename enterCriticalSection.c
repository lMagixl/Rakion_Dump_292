
/* public: void __thiscall CriticalSection::enterCriticalSection(void) */

void __thiscall CriticalSection::enterCriticalSection(CriticalSection *this)

{
                    /* 0x1bb0  4161  ?enterCriticalSection@CriticalSection@@QAEXXZ */
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

