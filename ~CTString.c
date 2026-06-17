
/* public: __thiscall CTString::~CTString(void) */

void __thiscall CTString::~CTString(CTString *this)

{
                    /* 0x10c0  489  ??1CTString@@QAE@XZ */
  StringFree(*(char **)this);
  return;
}

