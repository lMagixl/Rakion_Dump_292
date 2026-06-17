
/* public: virtual __thiscall ThreadBase<0,10>::~ThreadBase<0,10>(void) */

void __thiscall ThreadBase<0,10>::~ThreadBase<0,10>(ThreadBase<0,10> *this)

{
                    /* 0x13250  376  ??1?$ThreadBase@$0A@$09@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(int *)(this + 0x10) == 1) {
    *(undefined4 *)(this + 0x10) = 0;
    SetEvent(*(HANDLE *)(this + 0xc));
  }
  WaitForSingleObject(*(HANDLE *)(this + 8),0);
  CloseHandle(*(HANDLE *)(this + 0xc));
  return;
}

