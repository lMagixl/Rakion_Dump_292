
/* public: int __thiscall Thread::createThread(unsigned long (__stdcall*)(void *),void * const) */

int __thiscall Thread::createThread(Thread *this,_func_ulong_void_ptr *param_1,void *param_2)

{
  HANDLE pvVar1;
  
                    /* 0x449b0  4156  ?createThread@Thread@@QAEHP6GKPAX@ZQAX@Z */
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)param_1,param_2,0,
                        (LPDWORD)this);
  *(HANDLE *)(this + 4) = pvVar1;
  return (uint)(pvVar1 != (HANDLE)0x0);
}

