
/* public: void __thiscall Thread::closeThread(void) */

void __thiscall Thread::closeThread(Thread *this)

{
                    /* 0x449e0  4146  ?closeThread@Thread@@QAEXXZ */
  if (*(HANDLE *)(this + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

