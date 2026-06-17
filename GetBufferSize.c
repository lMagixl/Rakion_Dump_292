
/* public: long __thiscall CConsole::GetBufferSize(void) */

long __thiscall CConsole::GetBufferSize(CConsole *this)

{
                    /* 0x21e30  1749  ?GetBufferSize@CConsole@@QAEJXZ */
  if (this == (CConsole *)0x0) {
    return 1;
  }
  return (*(int *)(this + 0x18) + 1) * *(int *)(this + 0x1c) + 1;
}

