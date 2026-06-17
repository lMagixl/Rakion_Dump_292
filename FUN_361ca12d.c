
undefined4 __thiscall
FUN_361ca12d(void *this,int *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  uint *puVar1;
  undefined4 *this_00;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    *(int **)((int)this + 8) = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    puVar1 = (uint *)((int)this + 0xc);
    *puVar1 = param_2;
    *(uint *)((int)this + 0x1c) = param_3;
    this_00 = (undefined4 *)((int)this + 0x10);
    *this_00 = param_4;
    *(undefined4 *)((int)this + 0x14) = param_5;
    *(undefined4 *)((int)this + 0x18) = param_6;
    FUN_361c17d5(this_00,*(int **)((int)this + 8),puVar1,puVar1,(uint *)((int)this + 0x1c),0,this_00
                 ,0);
    *(undefined4 *)((int)this + 0x484) = 0;
    *(undefined4 *)((int)this + 0x474) = 0;
    *(undefined4 *)((int)this + 0x478) = 0;
    *(undefined4 *)((int)this + 0x488) = 0x3f800000;
    *(uint *)((int)this + 0x47c) = *puVar1;
    *(uint *)((int)this + 0x480) = *puVar1;
    uVar2 = 0;
  }
  return uVar2;
}

