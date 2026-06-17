
void __thiscall FUN_360d0fe0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36214b72;
  local_c = ExceptionList;
  iVar4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      iVar1 = *(int *)(param_1 + 0x1c);
      iVar2 = iVar4 * 0x1d0;
      piVar3 = (int *)(iVar1 + iVar2);
      if (((~(((uint)(*(float *)((int)this + 0x108) - (float)piVar3[0x67]) |
              (uint)(*(float *)(iVar1 + 0x1a0 + iVar2) - *(float *)((int)this + 0xf4)) |
              (uint)(*(float *)((int)this + 0x100) - *(float *)(iVar1 + 0x194 + iVar2)) |
              (uint)((float)piVar3[0x69] - *(float *)((int)this + 0xf8)) |
              (uint)(*(float *)((int)this + 0x104) - (float)piVar3[0x66]) |
              (uint)((float)piVar3[0x6a] - *(float *)((int)this + 0xfc))) >> 0x1f) & 1) != 0) &&
         ((piVar3[0x32] & 0x800U) == 0)) {
        FUN_360d0bb0(this,piVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x18));
  }
  ExceptionList = local_c;
  return;
}

