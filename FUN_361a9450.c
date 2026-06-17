
undefined4 * __thiscall FUN_361a9450(void *this,int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bd2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_36243888;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined1 *)((int)this + 8) = 0;
  FUN_361a3240((undefined4 *)((int)this + 0xc));
  FUN_361a3200((LPCRITICAL_SECTION)((int)this + 0x10));
  local_4 = 0;
  FUN_361a3110((void *)((int)this + 0x28),param_1 + 1);
  ExceptionList = local_c;
  return this;
}

