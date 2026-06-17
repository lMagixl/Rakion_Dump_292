
/* public: void __thiscall CTSingleLock::Unlock(void) */

void __thiscall CTSingleLock::Unlock(CTSingleLock *this)

{
  int iVar1;
  
                    /* 0x448d0  3875  ?Unlock@CTSingleLock@@QAEXXZ */
  if (*(int *)(this + 4) != 0) {
    iVar1 = FUN_36044800(*(undefined4 **)this);
    if ((iVar1 == 0) && (*(int *)(*(int *)this + 4) != -1)) {
      *(undefined4 *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x2c) =
           *(undefined4 *)(this + 8);
      *(undefined4 *)(this + 8) = 0xfffffffe;
    }
  }
  *(undefined4 *)(this + 4) = 0;
  return;
}

