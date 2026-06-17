
undefined4 * __fastcall FUN_361a89d0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_LAB_36243734;
  param_1[1] = 0;
  iVar1 = FUN_361a71a0();
  param_1[3] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[3] + 4) = param_1[3];
  *(undefined4 *)param_1[3] = param_1[3];
  *(undefined4 *)(param_1[3] + 8) = param_1[3];
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}

