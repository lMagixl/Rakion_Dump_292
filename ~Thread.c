
/* public: __thiscall Thread::~Thread(void) */

void __thiscall Thread::~Thread(Thread *this)

{
  if (*(HANDLE *)(this + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

