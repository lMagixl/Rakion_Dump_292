
CListNode * __thiscall FUN_3601f470(void *this,undefined4 param_1,CListHead *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620ec68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  CListHead::AddTail(param_2,this);
  ExceptionList = local_c;
  return this;
}

