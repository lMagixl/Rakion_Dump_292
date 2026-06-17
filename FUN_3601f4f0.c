
int __thiscall FUN_3601f4f0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  int iVar4;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)this - (int)param_1] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  if (*(void **)((int)this + 0x28) != (void *)0x0) {
    FreeMemory(*(void **)((int)this + 0x28));
  }
  pvVar3 = AllocMemory(*(int *)((int)this + 0x24) << 2);
  *(void **)((int)this + 0x28) = pvVar3;
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x24)) {
    do {
      *(undefined4 *)(*(int *)((int)this + 0x28) + iVar4 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar4 * 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x24));
  }
  return (int)this;
}

