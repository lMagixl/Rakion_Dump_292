
void __thiscall FUN_3611c3b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *this_00;
  void *this_01;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36218604;
  local_c = ExceptionList;
  iVar4 = 0;
  this_00 = (void *)(param_1 + 0x74);
  local_1c = (int *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_3611f700((int)this_00);
  if (0 < iVar1) {
    this_01 = (void *)((int)this + 0xd94);
    do {
      iVar1 = FUN_3611f3b0(this_00,iVar4);
      iVar2 = FUN_3611f840((int)this_01);
      if (iVar2 - *(int *)((int)this + 0xda8) < 1) {
        FUN_36122b30(this_01,*(int *)((int)this + 0xdac));
      }
      iVar2 = *(int *)((int)this + 0xda8);
      *(int *)((int)this + 0xda8) = iVar2 + 1;
      iVar2 = FUN_3611fd70(this_01,iVar2);
      piVar3 = (int *)(iVar2 + 0xc);
      *piVar3 = (int)local_1c;
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
      *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar1 + 0x18);
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
      iVar4 = iVar4 + 1;
      iVar1 = FUN_3611f700((int)this_00);
      local_1c = piVar3;
    } while (iVar4 < iVar1);
  }
  local_4 = 0xffffffff;
  FUN_36070fa0(*(CDrawPort **)((int)this + 8),local_1c,(CAnyProjection3D *)((int)this + 0x3c));
  ExceptionList = local_c;
  return;
}

