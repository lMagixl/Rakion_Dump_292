
void __thiscall FUN_361a3cb0(void *this,uint *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 >> 2 != 0) {
    iVar1 = ((param_2 >> 2) - 1 >> 1) + 1;
    do {
      FUN_361a3320(this,param_1,param_1 + 1);
      param_1 = param_1 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

