
undefined4 * __thiscall FUN_361342b0(void *this,byte param_1)

{
  *(undefined ***)this = &ThreadBase<0,1>::_vftable_;
  if (*(int *)((int)this + 0x10) == 1) {
    *(undefined4 *)((int)this + 0x10) = 0;
    SetEvent(*(HANDLE *)((int)this + 0xc));
  }
  WaitForSingleObject(*(HANDLE *)((int)this + 8),0);
  CloseHandle(*(HANDLE *)((int)this + 0xc));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

