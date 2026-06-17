
/* public: __thiscall CTFileName::~CTFileName(void) */

void __thiscall CTFileName::~CTFileName(CTFileName *this)

{
                    /* 0x1780  484  ??1CTFileName@@QAE@XZ */
  StringFree(*(char **)this);
  return;
}

