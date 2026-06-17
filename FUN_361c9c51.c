
undefined4 __thiscall
FUN_361c9c51(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x8876086c;
  }
  else if (*(int *)((int)this + 8) == 0) {
    *(int **)((int)this + 8) = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    *(undefined4 *)((int)this + 0xc) = param_2;
    *(undefined4 *)((int)this + 0x10) = param_3;
    *(undefined4 *)((int)this + 0x14) = param_4;
    *(undefined4 *)((int)this + 0x18) = param_5;
    *(undefined4 *)((int)this + 0x1c) = param_6;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80004005;
  }
  return uVar1;
}

