
undefined4 *
FUN_3601e360(undefined4 param_1,undefined4 param_2,undefined4 param_3,_String_base *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620eac1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_36018c30();
  puVar1 = (undefined4 *)FUN_361bf99c(0x34);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_3601cc90(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0xc) = param_5;
    *(undefined1 *)((int)puVar1 + 0x31) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}

