
undefined4 __cdecl FUN_361fc0e0(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  
  *param_3 = param_1;
  *param_4 = param_2;
  if (param_1 != 0) {
    if ((((param_1 == 1) || ((param_1 & param_1 - 1) == 0)) && (param_2 != 0)) &&
       ((param_2 == 1 || ((param_2 & param_2 - 1) == 0)))) {
      *param_3 = param_1;
      *param_4 = param_2;
      return 0;
    }
    if ((param_1 == 1) || ((param_1 & param_1 - 1) == 0)) goto LAB_361fc134;
  }
  uVar1 = FUN_361fbfe0(param_1);
  *param_3 = uVar1;
LAB_361fc134:
  if ((param_2 == 0) || ((param_2 != 1 && ((param_2 & param_2 - 1) != 0)))) {
    uVar1 = FUN_361fbfe0(param_2);
    *param_4 = uVar1;
  }
  return 1;
}

