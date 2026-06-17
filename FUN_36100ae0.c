
undefined4 __thiscall FUN_36100ae0(void *this,int *param_1,uint param_2)

{
  short *psVar1;
  int iVar2;
  
  if ((param_2 == 0) && (*(int *)((int)this + 0x10) < param_1[5] + 9)) {
    return 0;
  }
  param_2 = *param_1 << 0x18 | param_1[8];
  (**(code **)(*(int *)this + 0x10))(&param_2,4);
  (**(code **)(*(int *)this + 0x10))(param_1 + 9,4);
  (**(code **)(*(int *)this + 0x10))(param_1 + 7,2);
  if ((short)param_1[7] != 0) {
    (**(code **)(*(int *)this + 0x10))(param_1[2] + 1,param_1[5] + -1);
  }
  iVar2 = *(int *)((int)this + 0x1c44) + -1;
  if (iVar2 < 0) {
    iVar2 = *(int *)((int)this + 0x1c44) + 599;
  }
  psVar1 = (short *)((int)this + iVar2 * 0xc + 0x26);
  *psVar1 = *psVar1 + 1;
  return 1;
}

