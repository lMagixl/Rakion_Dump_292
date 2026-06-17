
/* private: void __thiscall ThreadBase<0,10>::threading(void) */

void __thiscall ThreadBase<0,10>::threading(ThreadBase<0,10> *this)

{
  DWORD DVar1;
  ThreadBase<0,10> *pTStack_4;
  
                    /* 0xa180  4428  ?threading@?$ThreadBase@$0A@$09@@AAEXXZ */
  pTStack_4 = this;
  (**(code **)(*(int *)this + 8))();
  if (*(int *)(this + 0x10) != 0) {
    do {
      DVar1 = WaitForMultipleObjects(1,(HANDLE *)(this + 0xc),0,10);
      if (DVar1 == 0xffffffff) break;
      if (DVar1 != 0) {
        if (DVar1 == 0x102) {
          (**(code **)(*(int *)this + 4))();
        }
        else if (DVar1 < 0x80) {
          pTStack_4 = (ThreadBase<0,10> *)(DVar1 - 1);
          (*(code *)**(undefined4 **)this)(&pTStack_4);
        }
        else {
          ResetEvent(*(HANDLE *)(this + DVar1 * 4 + -500));
        }
      }
    } while (*(int *)(this + 0x10) != 0);
  }
  (**(code **)(*(int *)this + 0xc))();
  _endthread();
  return;
}

