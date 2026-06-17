
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_36100cb0(void *this,float param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(ushort *)((int)this + 0x1c3c) != 0) {
    iVar1 = *(int *)((int)this + 0x1c40);
    do {
      if (ABS(*(float *)((int)this + (iVar1 % 600) * 0xc + 0x1c) - param_1) <
          CTimer::TickQuantum * _DAT_36227cf0) {
        *param_2 = iVar1 % 600;
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)((int)this + 0x1c3c));
  }
  *param_2 = -1;
  return 2;
}

