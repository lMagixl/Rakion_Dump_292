
/* public: __thiscall CTSingleLock::CTSingleLock(class CTCriticalSection *,int) */

CTSingleLock * __thiscall
CTSingleLock::CTSingleLock(CTSingleLock *this,CTCriticalSection *param_1,int param_2)

{
                    /* 0x44920  251  ??0CTSingleLock@@QAE@PAVCTCriticalSection@@H@Z */
  *(CTCriticalSection **)this = param_1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xfffffffe;
  if (param_2 != 0) {
    Lock(this);
  }
  return this;
}

