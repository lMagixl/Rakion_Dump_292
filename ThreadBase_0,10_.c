
/* public: __thiscall ThreadBase<0,10>::ThreadBase<0,10>(void) */

ThreadBase<0,10> * __thiscall ThreadBase<0,10>::ThreadBase<0,10>(ThreadBase<0,10> *this)

{
  HANDLE pvVar1;
  
                    /* 0x9ad0  4  ??0?$ThreadBase@$0A@$09@@QAE@XZ */
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)(this + 0xc) = pvVar1;
  return this;
}

