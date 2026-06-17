
undefined4 * __thiscall FUN_3620b510(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return (undefined4 *)0x0;
    }
    puVar1 = FUN_3620b510(this,(int *)param_1[3],param_2);
    puVar1 = FUN_3620b510(this,(int *)param_1[4],puVar1);
    return puVar1;
  }
  if (1 < param_1[1]) {
    *param_2 = param_1;
    iVar2 = FUN_3620b590(this,(int)param_1,param_2 + 2,param_2 + 3);
    param_2[1] = iVar2;
    param_2 = param_2 + 4;
  }
  return param_2;
}

