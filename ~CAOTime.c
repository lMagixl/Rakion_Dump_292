
/* private: __thiscall CAOTime::~CAOTime(void) */

void __thiscall CAOTime::~CAOTime(CAOTime *this)

{
                    /* 0x19ebc0  378  ??1CAOTime@@AAE@XZ */
  if (*(void **)(this + 0xc) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}

