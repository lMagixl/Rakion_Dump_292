
/* public: __thiscall CriticalSection::CriticalSection(void) */

CriticalSection * __thiscall CriticalSection::CriticalSection(CriticalSection *this)

{
                    /* 0x1b90  290  ??0CriticalSection@@QAE@XZ */
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  return this;
}

