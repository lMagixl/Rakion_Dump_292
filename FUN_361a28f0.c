
void FUN_361a28f0(uint *param_1,ushort *param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2 + 7) >> 3;
  sVar1 = (short)iVar2;
  if (iVar2 == 0) {
    *param_3 = 0;
    return;
  }
  do {
    FUN_361a1e10(param_1,param_1 + 1);
    param_1 = param_1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *param_3 = sVar1 * 8;
  return;
}

