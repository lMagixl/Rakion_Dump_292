
int __cdecl FUN_36073120(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
  bVar1 = FUN_36072c10();
  iVar2 = CONCAT31(extraout_var,bVar1);
  while( true ) {
    if (iVar2 != 0) {
      return param_1;
    }
    iVar2 = FUN_36073070(param_1);
    bVar1 = FUN_36072c10();
    if (CONCAT31(extraout_var_00,bVar1) != 0) break;
    param_1 = FUN_36073070(param_1);
    bVar1 = FUN_36072c10();
    iVar2 = CONCAT31(extraout_var_01,bVar1);
  }
  return iVar2;
}

