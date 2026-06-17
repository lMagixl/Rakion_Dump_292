
undefined4 __thiscall FUN_36106860(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  
  bVar2 = false;
  piVar3 = *(int **)this;
  do {
    if ((int *)*piVar3 == (int *)0x0) break;
    iVar1 = piVar3[2];
    if (iVar1 < param_1) break;
    bVar2 = true;
    if (iVar1 == param_1) {
      *param_2 = piVar3 + -6;
      return 1;
    }
    piVar3 = (int *)*piVar3;
  } while (param_1 <= iVar1);
  if (!bVar2) {
    *param_2 = 0;
    return 3;
  }
  *param_2 = 0;
  return 2;
}

