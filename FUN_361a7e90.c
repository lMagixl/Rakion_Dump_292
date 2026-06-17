
void * __cdecl FUN_361a7e90(void *param_1,undefined4 param_2,void *param_3)

{
  uint unaff_ESI;
  uint in_stack_00000020;
  undefined4 in_stack_00000024;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_3621bbe1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  local_4 = 1;
  *(undefined1 *)((int)param_1 + 4) = 0;
  FUN_3601cb20(param_1,(_String_base *)&param_2,0,0xffffffff,unaff_ESI);
  *(undefined4 *)((int)param_1 + 0x1c) = in_stack_00000024;
  local_4 = local_4 & 0xffffff00;
  if (0xf < in_stack_00000020) {
    FUN_36018c30();
    operator_delete(param_3);
  }
  ExceptionList = local_c;
  return param_1;
}

