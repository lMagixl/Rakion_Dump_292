
undefined4 __thiscall FUN_361c91db(void *this,int *param_1)

{
  undefined4 uVar1;
  undefined1 local_e8 [33];
  byte local_c7;
  byte local_bc;
  byte local_b8;
  undefined1 local_14 [12];
  byte local_8;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x8876086c;
  }
  else {
    *(int **)((int)this + 8) = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    (**(code **)(**(int **)((int)this + 8) + 0x1c))(*(int **)((int)this + 8),local_e8);
    (**(code **)(**(int **)((int)this + 8) + 0x24))(*(int **)((int)this + 8),local_14);
    if (((local_c7 & 2) == 0) && ((local_8 & 0x10) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined4 *)((int)this + 0x1c) = uVar1;
    if (((local_bc & 0x10) == 0) || ((local_b8 & 0x20) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined4 *)((int)this + 0x18) = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}

