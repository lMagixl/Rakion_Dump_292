
CListHead * __thiscall FUN_36021bf0(void *this,void *param_1)

{
  CListHead::Clear(this);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  FUN_36021b70(this,param_1);
  return this;
}

