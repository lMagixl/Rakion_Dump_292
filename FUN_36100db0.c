
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_36100db0(void *this,float param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  
  if (*(short *)((int)this + 0x1c3c) == 0) {
    return 2;
  }
  if ((param_1 < _DAT_3622376c) && (*(short *)((int)this + 0x1c3c) != 0)) {
    *param_2 = *(float *)((int)this + *(int *)((int)this + 0x1c40) * 0xc + 0x1c);
    return 0;
  }
  pfVar1 = (float *)((int)this + *(int *)((int)this + 0x1c40) * 0xc + 0x1c);
  if (param_1 < *pfVar1 - CTimer::TickQuantum * _DAT_36227cf0) {
    *param_2 = *pfVar1;
    return 0;
  }
  iVar2 = FUN_36100cb0(this,param_1,(int *)&param_1);
  if (iVar2 == 0) {
    *param_2 = *(float *)((int)this + (((int)param_1 + 1) % 600) * 0xc + 0x1c);
    iVar2 = 0;
  }
  return iVar2;
}

