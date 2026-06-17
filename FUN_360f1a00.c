
void __thiscall FUN_360f1a00(void *this,undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong local_18;
  undefined4 local_10 [2];
  undefined4 local_8;
  undefined4 local_4;
  
  local_10[0] = param_2;
  if (*(void **)((int)this + 0x1c) == (void *)0x0) {
    local_8 = 0;
    local_4 = 0;
  }
  else {
    plVar1 = FUN_360f17f0(*(void **)((int)this + 0x1c),&local_18);
    local_8 = (undefined4)*plVar1;
    local_4 = *(undefined4 *)((int)plVar1 + 4);
  }
  (**(code **)(*(int *)this + 0x10))(local_10,0x10);
  (**(code **)(*(int *)this + 0x10))(local_4,param_2);
  return;
}

