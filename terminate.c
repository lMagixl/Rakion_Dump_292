
/* public: void __thiscall ThreadBase<0,1>::terminate(unsigned long const &) */

void __thiscall ThreadBase<0,1>::terminate(ThreadBase<0,1> *this,ulong *param_1)

{
                    /* 0x134000  4425  ?terminate@?$ThreadBase@$0A@$00@@QAEXABK@Z */
  if (*(int *)(this + 0x10) == 1) {
    *(undefined4 *)(this + 0x10) = 0;
    SetEvent(*(HANDLE *)(this + 0xc));
  }
  WaitForSingleObject(*(HANDLE *)(this + 8),*param_1);
  return;
}

