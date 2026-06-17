
void * __cdecl FUN_3601e0e0(void *param_1,undefined4 param_2,void *param_3)

{
  uint in_stack_00000020;
  int *in_stack_00000028;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_3620ea79;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_3601cdf0(param_1,(_String_base *)&param_2,(undefined4 *)&stack0x00000024);
  local_4._0_1_ = 1;
  if (0xf < in_stack_00000020) {
    FUN_36018c30();
    operator_delete(param_3);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (in_stack_00000028 != (int *)0x0) {
    FUN_3600cd20(in_stack_00000028);
  }
  ExceptionList = local_c;
  return param_1;
}

