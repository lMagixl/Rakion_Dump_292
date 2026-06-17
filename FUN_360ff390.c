
undefined4 __thiscall FUN_360ff390(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
  if ((*(byte *)(iVar1 + -0x410) & 2) != 0) {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  *(int *)this = *(int *)this + (0xc - *(int *)(iVar1 + -0x40c));
  uVar2 = *(uint *)(iVar1 + -0x414);
  if (*(uint *)((int)this + 4) < uVar2) {
    *(uint *)((int)this + 4) = uVar2;
  }
  CListHead::RemHead((CListHead *)((int)this + 8));
  if (param_1 != 0) {
    FUN_360ff0d0((uint *)(iVar1 + -0x414));
  }
  return 1;
}

