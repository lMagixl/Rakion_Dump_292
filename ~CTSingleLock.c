
/* public: __thiscall CTSingleLock::~CTSingleLock(void) */

void __thiscall CTSingleLock::~CTSingleLock(CTSingleLock *this)

{
                    /* 0x44950  487  ??1CTSingleLock@@QAE@XZ */
  if (*(int *)(this + 4) != 0) {
    Unlock(this);
    return;
  }
  return;
}

