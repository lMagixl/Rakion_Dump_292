
void __fastcall FUN_361dbf33(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  *param_1 = &PTR_FUN_36249dd8;
  if (iVar1 != 0) {
    param_1[3] = iVar1 - (uint)*(byte *)(iVar1 + -1);
  }
  FUN_361dbe62(param_1);
  return;
}

