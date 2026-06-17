
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_36102400(void *this,float param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < _DAT_3622376c) {
    (**(code **)(*(int *)this + 4))();
  }
  iVar3 = FUN_36100cb0(this,param_1,(int *)&param_1);
  if (iVar3 == 0) {
    if ((int)param_1 < *(int *)((int)this + 0x1c40)) {
      *(short *)((int)this + 0x1c3c) =
           *(short *)((int)this + 0x1c3c) +
           (*(short *)((int)this + 0x1c40) - SUB42(param_1,0)) + -600;
    }
    else {
      *(short *)((int)this + 0x1c3c) =
           *(short *)((int)this + 0x1c3c) + ((short)*(int *)((int)this + 0x1c40) - SUB42(param_1,0))
      ;
    }
    iVar3 = *(int *)((int)this + 0xc);
    *(float *)((int)this + 0x1c40) = param_1;
    piVar1 = (int *)((int)this + (int)param_1 * 0xc + 0x20);
    iVar2 = *piVar1;
    if (iVar3 <= iVar2) {
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (iVar2 - iVar3);
      *(int *)((int)this + 0xc) = *piVar1;
      return 0;
    }
    *(int *)((int)this + 0x10) =
         *(int *)((int)this + 0x10) + (*(int *)((int)this + 0x14) - iVar3) + iVar2;
    *(int *)((int)this + 0xc) = *piVar1;
    iVar3 = 0;
  }
  return iVar3;
}

