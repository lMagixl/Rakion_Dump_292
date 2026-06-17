
int __thiscall FUN_3620cd80(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  iVar1 = param_1;
  while( true ) {
    if (iVar2 == 0) {
      return iVar1;
    }
    iVar2 = iVar2 + -1;
    iVar1 = FUN_3620ccd0(iVar2,param_1,*(int *)((int)this + 0x10));
    if ((iVar1 <= *(int *)((int)this + 4)) ||
       (iVar1 = FUN_3620ccd0(iVar2,param_1,*(int *)((int)this + 0xc)),
       iVar1 <= *(int *)((int)this + 4))) break;
    iVar1 = 1;
  }
  return 0;
}

