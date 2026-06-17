
bool __cdecl FUN_361e5735(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  piVar1 = param_1;
  bVar3 = true;
  if ((*(byte *)(param_1 + 0x43) & 0x20) == 0) {
    if ((*(byte *)((int)param_1 + 0x5d) & 8) == 0) goto LAB_361e5761;
  }
  else if ((param_1[0x17] & 0x300U) != 0x300) goto LAB_361e5761;
  bVar3 = false;
LAB_361e5761:
  FUN_361e109c(param_1,&param_1,4);
  if (bVar3) {
    iVar2 = FUN_361e56e5((undefined1 *)&param_1);
    bVar3 = iVar2 != piVar1[0x40];
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

