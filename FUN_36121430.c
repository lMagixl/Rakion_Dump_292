
uint __thiscall FUN_36121430(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  this_00 = *(void **)(param_1 + 0x1ac);
  uVar5 = 0xffffffff;
  iVar2 = FUN_3600bea0((undefined4 *)(param_1 + 0xc));
  if (0 < iVar2) {
    iVar1 = *(int *)((int)this + 0xe0c);
    piVar4 = *(int **)(param_1 + 0x10);
    uVar5 = 0xffffffff;
    do {
      iVar3 = FUN_360d67e0(this_00,*piVar4);
      uVar5 = uVar5 & *(uint *)((iVar3 + *(int *)((int)this_00 + 0xbc)) * 0x1c + 0x10 + iVar1);
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar5;
}

