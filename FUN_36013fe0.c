
void __thiscall FUN_36013fe0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)this != 0) {
    operator_delete__(*(void **)((int)this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar3 = FUN_3600c180(param_1);
  if (iVar3 != 0) {
    FUN_3600c0f0(this,iVar3);
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar1 = param_1[1];
        iVar2 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar2 + iVar4 * 8) = *(undefined4 *)(iVar1 + iVar4 * 8);
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = *(undefined4 *)(iVar1 + 4 + iVar4 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
  }
  return;
}

