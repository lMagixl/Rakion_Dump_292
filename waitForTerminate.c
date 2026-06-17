
/* public: void __thiscall ThreadBase<0,1>::waitForTerminate(unsigned long const &) */

void __thiscall ThreadBase<0,1>::waitForTerminate(ThreadBase<0,1> *this,ulong *param_1)

{
                    /* 0x133d80  4437  ?waitForTerminate@?$ThreadBase@$0A@$00@@QAEXABK@Z */
  WaitForSingleObject(*(HANDLE *)(this + 8),*param_1);
  return;
}

