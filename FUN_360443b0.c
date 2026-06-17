
CListHead * __thiscall FUN_360443b0(void *this,void *param_1)

{
  CListHead::Clear(this);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  FUN_36043eb0(this,param_1);
  return this;
}

