
void __thiscall FUN_3620ccf0(void *this,byte *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 < **(byte **)((int)this + 0x10)) {
    iVar1 = FUN_3620ccd0(0,(int)param_1,(int)*(byte **)((int)this + 0x10));
  }
  else if (**(byte **)((int)this + 0xc) < *param_1) {
    iVar1 = FUN_3620ccd0(0,(int)param_1,(int)*(byte **)((int)this + 0xc));
  }
  else {
    iVar1 = 0;
  }
  iVar3 = 1;
  if (iVar1 < *(int *)((int)this + 4)) {
    do {
      if (*(int *)this <= iVar3) {
        return;
      }
      iVar2 = *(int *)((int)this + 0x10);
      if ((param_1[iVar3] < *(byte *)(iVar2 + iVar3)) ||
         (iVar2 = *(int *)((int)this + 0xc), *(byte *)(iVar2 + iVar3) < param_1[iVar3])) {
        iVar2 = FUN_3620ccd0(iVar3,(int)param_1,iVar2);
        iVar1 = iVar1 + iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 < *(int *)((int)this + 4));
  }
  return;
}

