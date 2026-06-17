
/* public: int __thiscall CTSingleLock::TryToLock(void) */

int __thiscall CTSingleLock::TryToLock(CTSingleLock *this)

{
  int iVar1;
  
                    /* 0x44870  3862  ?TryToLock@CTSingleLock@@QAEHXZ */
  if (*(int *)(this + 4) == 0) {
    iVar1 = FUN_360447f0(*(undefined4 **)this);
    if (((0 < iVar1) && (*(undefined4 *)(this + 4) = 1, iVar1 == 1)) &&
       (*(int *)(*(int *)this + 4) != -1)) {
      iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      *(undefined4 *)(this + 8) = *(undefined4 *)(iVar1 + 0x2c);
      *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(*(int *)this + 4);
    }
  }
  return *(int *)(this + 4);
}

