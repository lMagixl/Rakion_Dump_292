
int __cdecl FUN_360d2680(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = FUN_360d3080(param_1 + 9);
  iVar2 = FUN_360d3050(param_1 + 2);
  iVar3 = FUN_3600bef0(param_1);
  return (iVar2 * 3 + iVar1 * 2 + iVar3 + param_1[0xb] + param_1[4]) * 4;
}

