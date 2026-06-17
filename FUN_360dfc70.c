
void __thiscall FUN_360dfc70(void *this,CListHead *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = *(int *)((int)this + 0x10);
    FUN_360df200(this,*(int *)(param_1 + 0x10));
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar2 = iVar2 * 4;
      do {
        *(undefined4 *)(iVar2 + *(int *)((int)this + 0xc)) =
             *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1 * 4);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar1 < *(int *)(param_1 + 0x10));
    }
    FUN_360df250(param_1,*(int *)(param_1 + 0x10));
    CListHead::MoveList(this,param_1);
  }
  return;
}

