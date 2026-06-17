
undefined4 * __thiscall FUN_361a7b90(void *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  uint unaff_ESI;
  uint in_stack_00000020;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621bb48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_4 = 0;
  *(undefined1 *)((int)this + 8) = 0;
  FUN_3601cb20((void *)((int)this + 4),(_String_base *)&param_2,0,0xffffffff,unaff_ESI);
  local_4 = 0xffffffff;
  if (0xf < in_stack_00000020) {
    FUN_36018c30();
    operator_delete(param_3);
  }
  ExceptionList = local_c;
  return this;
}

