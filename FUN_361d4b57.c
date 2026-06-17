
int __thiscall FUN_361d4b57(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = param_4;
  if ((((param_4 & 0xffff) != 0) && ((param_4 & 0xffff) < 6)) && ((param_4 & 0xfff00000) == 0)) {
    *(uint *)(param_2 + 0x40) = param_4 & 0x80000;
    piVar1 = FUN_361da5f0();
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      piVar1 = FUN_361da5f0();
      *param_1 = (int)piVar1;
      if (((((piVar1 != (int *)0x0) && (iVar2 = FUN_361d5f94(), -1 < iVar2)) &&
           ((iVar2 = FUN_361d2cba(param_1), iVar2 < 0 &&
            ((iVar2 = FUN_361d2df2(), iVar2 < 0 && (iVar2 = FUN_361d2ee3(), iVar2 < 0)))))) &&
          (iVar2 = FUN_361d30e5(), iVar2 < 0)) &&
         ((((iVar2 = FUN_361d32e9(), iVar2 < 0 && (iVar2 = FUN_361d370c(), iVar2 < 0)) &&
           (iVar2 = FUN_361d3c9e(), iVar2 < 0)) &&
          ((iVar2 = FUN_361d4084(), iVar2 < 0 && (iVar2 = FUN_361d47b5(), iVar2 < 0)))))) {
        FUN_361d1617();
      }
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[1])(1);
      param_1[1] = 0;
    }
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
      *param_1 = 0;
    }
  }
  return unaff_EBX;
}

