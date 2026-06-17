
/* public: char const * __thiscall CConsole::GetBuffer(void) */

char * __thiscall CConsole::GetBuffer(CConsole *this)

{
                    /* 0x21e10  1748  ?GetBuffer@CConsole@@QAEPBDXZ */
  if (this == (CConsole *)0x0) {
    return &DAT_36224012;
  }
  return (char *)((*(int *)(this + 0x1c) - *(int *)(this + 0x24)) * (*(int *)(this + 0x18) + 1) +
                 *(int *)(this + 8));
}

