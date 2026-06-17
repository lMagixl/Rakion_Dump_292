
undefined4 __cdecl FUN_361b4b00(int *param_1,CShell *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((((iVar1 != 6) || (*(int *)param_2 != 6)) && ((iVar1 != 7 || (*(int *)param_2 != 7)))) &&
     ((iVar1 != 5 || (*(int *)param_2 != 5)))) {
    *param_1 = 0;
    *(undefined4 *)param_2 = 0;
    CShell::ErrorF(param_2,(char *)_pShell,s_Type_mismatch_36243b74);
    return 0;
  }
  return 1;
}

