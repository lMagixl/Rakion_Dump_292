
/* public: void * __thiscall Thread::getThreadHandle(void) */

void * __thiscall Thread::getThreadHandle(Thread *this)

{
                    /* 0x44960  4210  ?getThreadHandle@Thread@@QAEQAXXZ */
  return *(void **)(this + 4);
}

