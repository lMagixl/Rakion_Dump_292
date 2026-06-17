
/* public: __thiscall CAttachedSound::~CAttachedSound(void) */

void __thiscall CAttachedSound::~CAttachedSound(CAttachedSound *this)

{
                    /* 0xa7ce0  386  ??1CAttachedSound@@QAE@XZ */
  StringFree(*(char **)(this + 0xc));
  return;
}

