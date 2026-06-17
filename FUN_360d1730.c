
void __thiscall FUN_360d1730(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (((*(byte *)(iVar1 + 0x10) & 4) == 0) && ((*(uint *)(iVar1 + 0xc) & 0xffc00) != 0)) {
    *(int *)((int)this + 0x114) = param_1;
    *(uint *)((int)this + 0x10) = *(uint *)(iVar1 + 0xc) >> 10 & 0x3ff;
    *(uint *)((int)this + 0x14) = (*(uint *)(iVar1 + 0xc) & 0x3ff) << 10;
    *(uint *)((int)this + 0x18) = *(uint *)(iVar1 + 0xc) >> 0x14 & 0x3ff;
    *(uint *)((int)this + 0x1c) = (*(uint *)(iVar1 + 0xc) & 0x3ff) << 0x14;
    FUN_360ceae0((int)this);
    FUN_360d1350(this);
    FUN_360d1650(this);
  }
  return;
}

