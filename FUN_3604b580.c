
CListHead * __thiscall FUN_3604b580(void *this,void *param_1)

{
  CListHead::Clear(this);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  FUN_3604b240(this,param_1);
  return this;
}

