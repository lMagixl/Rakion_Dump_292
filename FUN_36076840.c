
void __cdecl FUN_36076840(char *param_1,undefined4 param_2)

{
  DWORD DVar1;
  undefined4 *puVar2;
  char **ppcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211e48;
  local_c = ExceptionList;
  if (param_1 == (char *)0x0) {
    ExceptionList = &local_c;
    DVar1 = GetLastError();
    if (DVar1 != 0) {
      ppcVar3 = &param_1;
      puVar2 = (undefined4 *)GetWindowsError((ulong)ppcVar3);
      local_4 = 0;
      WarningMessage(s_I__s___s_36228bca + 2,param_2,*puVar2,ppcVar3,DVar1);
      local_4 = 0xffffffff;
      StringFree(param_1);
    }
  }
  ExceptionList = local_c;
  return;
}

