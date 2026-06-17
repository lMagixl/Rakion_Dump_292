
int __fastcall FUN_36106840(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)*param_1;
  while ((int *)*piVar2 != (int *)0x0) {
    iVar1 = iVar1 + 0x24 + piVar2[-4];
    piVar2 = (int *)*piVar2;
  }
  return iVar1;
}

