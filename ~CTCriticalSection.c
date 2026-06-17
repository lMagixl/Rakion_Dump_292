
/* public: __thiscall CTCriticalSection::~CTCriticalSection(void) */

void __thiscall CTCriticalSection::~CTCriticalSection(CTCriticalSection *this)

{
                    /* 0x447c0  483  ??1CTCriticalSection@@QAE@XZ */
  FUN_360446b0(*(int *)this);
  operator_delete(*(void **)this);
  return;
}

