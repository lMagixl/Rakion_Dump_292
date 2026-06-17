
undefined4 * __thiscall FUN_36018a40(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_36015fe0(this,param_2);
  puVar2 = FUN_36015e00(this,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return param_1;
}

