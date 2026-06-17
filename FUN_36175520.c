
void __cdecl FUN_36175520(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  DAT_36300a80 = DAT_36300a80 + -1;
  param_1[2] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    DAT_36300a84 = DAT_36300a84 + -1;
    (**(code **)(*param_1 + 8))();
    (**(code **)*param_1)(1);
  }
  return;
}

