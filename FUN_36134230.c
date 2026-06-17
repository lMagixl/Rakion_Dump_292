
void __cdecl FUN_36134230(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36218fe1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    iVar1 = param_2[1];
    param_1[1] = iVar1;
    if (iVar1 != 0) {
      FUN_36010d50(iVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

