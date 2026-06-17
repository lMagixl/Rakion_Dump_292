
undefined4 * FUN_361bb190(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621c351;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_361bf99c(0x14);
  local_8 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    puVar2[2] = *param_3;
    puVar2[3] = param_3[1];
    iVar1 = param_3[2];
    puVar2[4] = iVar1;
    if (iVar1 != 0) {
      FUN_36010d50(iVar1);
    }
  }
  ExceptionList = local_10;
  return puVar2;
}

