
float10 __thiscall FUN_36030460(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_2 * 0x20 + 0x10 + param_1[7]);
  lVar2 = *(longlong *)_pTimer;
  iVar3 = (**(code **)*param_1)();
  return (float10)((double)lVar1 / (double)lVar2) / (float10)iVar3;
}

