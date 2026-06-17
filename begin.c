
/* public: void __thiscall ThreadBase<0,10>::begin(void) */

void __thiscall ThreadBase<0,10>::begin(ThreadBase<0,10> *this)

{
  uintptr_t uVar1;
  
                    /* 0x13290  4131  ?begin@?$ThreadBase@$0A@$09@@QAEXXZ */
  *(undefined4 *)(this + 0x10) = 1;
  uVar1 = _beginthreadex((void *)0x0,0,mainThread,this,0,(uint *)(this + 4));
  *(uintptr_t *)(this + 8) = uVar1;
  return;
}

