
/* public: void __thiscall CTSingleLock::Lock(void) */

void __thiscall CTSingleLock::Lock(CTSingleLock *this)

{
  int iVar1;
  
                    /* 0x44810  2564  ?Lock@CTSingleLock@@QAEXXZ */
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(this + 4) = 1;
    return;
  }
  iVar1 = FUN_360447e0(*(undefined4 **)this);
  if ((iVar1 == 1) && (*(int *)(*(int *)this + 4) != -1)) {
    iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    *(undefined4 *)(this + 8) = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(*(int *)this + 4);
    *(undefined4 *)(this + 4) = 1;
    return;
  }
  *(undefined4 *)(this + 4) = 1;
  return;
}

