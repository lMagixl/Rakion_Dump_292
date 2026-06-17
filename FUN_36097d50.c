
void __thiscall
FUN_36097d50(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_2;
  (**(code **)((&PTR_PTR_362a50a8)[*(int *)(param_1 + 4) * 5] + param_2 * 0xc + 4))
            (this,param_3,param_4,param_5,param_6);
  return;
}

