
CListHead * __thiscall FUN_3604b5c0(void *this,void *param_1)

{
  CListHead::Clear(this);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  FUN_3604b330(this,param_1);
  return this;
}

