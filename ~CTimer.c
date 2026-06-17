
/* public: __thiscall CTimer::~CTimer(void) */

void __thiscall CTimer::~CTimer(CTimer *this)

{
                    /* 0x44cc0  501  ??1CTimer@@QAE@XZ */
  if (*(int *)(this + 0x18) != 0) {
    timeKillEvent(*(UINT *)(this + 0x14));
  }
  _pTimer = (CTimer *)0x0;
  CTCriticalSection::~CTCriticalSection((CTCriticalSection *)(this + 0x1c));
  return;
}

