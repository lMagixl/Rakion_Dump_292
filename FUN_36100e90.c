
void __thiscall FUN_36100e90(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x14) == 0) {
    pvVar1 = AllocMemory(param_1);
    *(int *)((int)this + 0x10) = param_1;
    *(int *)((int)this + 0x14) = param_1;
    *(void **)((int)this + 0x18) = pvVar1;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return;
  }
  iVar4 = param_1 - *(int *)((int)this + 0x14);
  GrowMemory((void **)((int)this + 0x18),param_1);
  iVar3 = *(int *)((int)this + 0xc);
  if ((*(int *)((int)this + 8) < iVar3) || (*(int *)((int)this + 0x10) == 0)) {
    pvVar1 = (void *)((int)*(void **)((int)this + 0x18) + iVar3);
    memmove((void *)((int)pvVar1 + iVar4),pvVar1,*(int *)((int)this + 0x14) - iVar3);
    piVar2 = (int *)((int)this + 0x2c);
    iVar3 = 100;
    do {
      if (*(int *)((int)this + 0xc) <= piVar2[-3]) {
        piVar2[-3] = piVar2[-3] + iVar4;
      }
      if (*(int *)((int)this + 0xc) <= *piVar2) {
        *piVar2 = *piVar2 + iVar4;
      }
      if (*(int *)((int)this + 0xc) <= piVar2[3]) {
        piVar2[3] = piVar2[3] + iVar4;
      }
      if (*(int *)((int)this + 0xc) <= piVar2[6]) {
        piVar2[6] = piVar2[6] + iVar4;
      }
      if (*(int *)((int)this + 0xc) <= piVar2[9]) {
        piVar2[9] = piVar2[9] + iVar4;
      }
      if (*(int *)((int)this + 0xc) <= piVar2[0xc]) {
        piVar2[0xc] = piVar2[0xc] + iVar4;
      }
      piVar2 = piVar2 + 0x12;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + iVar4;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - *(int *)((int)this + 0x14));
  *(int *)((int)this + 0x14) = param_1;
  return;
}

