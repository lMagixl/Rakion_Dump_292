
undefined4 * __thiscall FUN_36186d30(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_3621aca0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_361bf99c(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 1;
    puVar1[2] = 1;
    puVar1[3] = 0;
    *puVar1 = &PTR_FUN_3623dadc;
    puVar1[4] = param_1;
  }
  *(undefined4 **)this = puVar1;
  ExceptionList = local_10;
  return this;
}

