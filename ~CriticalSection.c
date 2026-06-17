
/* public: __thiscall CriticalSection::~CriticalSection(void) */

void __thiscall CriticalSection::~CriticalSection(CriticalSection *this)

{
                    /* 0x1ba0  504  ??1CriticalSection@@QAE@XZ */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

