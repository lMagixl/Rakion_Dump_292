
void __cdecl
FUN_36075210(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = param_3;
  do {
    do {
      *param_2 = (char)*param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    param_2 = param_2 + (param_5 - param_3);
    param_4 = param_4 + -1;
    iVar1 = param_3;
  } while (param_4 != 0);
  return;
}

