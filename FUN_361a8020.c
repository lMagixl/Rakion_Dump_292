
undefined4 * FUN_361a8020(undefined4 param_1,undefined4 param_2,_String_base *param_3)

{
  undefined4 *puVar1;
  uint unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621bc01;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_36018c30();
  puVar1 = (undefined4 *)FUN_361bf99c(0x28);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[8] = 0xf;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    FUN_3601cb20(puVar1 + 2,param_3,0,0xffffffff,unaff_EDI);
    puVar1[9] = *(undefined4 *)(param_3 + 0x1c);
  }
  ExceptionList = local_10;
  return puVar1;
}

