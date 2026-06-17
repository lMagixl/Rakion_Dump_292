
undefined4 * __thiscall FUN_36001f80(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  
  iVar2 = param_1;
  iVar5 = param_1 - (int)this;
  param_1 = 0x19;
  puVar3 = this;
  do {
    puVar1 = (undefined4 *)(iVar5 + (int)puVar3);
    *puVar3 = *puVar1;
    puVar3[1] = puVar1[1];
    puVar3[2] = puVar1[2];
    puVar3 = puVar3 + 3;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)(iVar2 + 300);
  *(undefined4 *)((int)this + 0x130) = *(undefined4 *)(iVar2 + 0x130);
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)(iVar2 + 0x134);
  pcVar4 = StringDuplicate(*(char **)(iVar2 + 0x138));
  StringFree(*(char **)((int)this + 0x138));
  *(char **)((int)this + 0x138) = pcVar4;
  pcVar4 = StringDuplicate(*(char **)(iVar2 + 0x13c));
  StringFree(*(char **)((int)this + 0x13c));
  *(char **)((int)this + 0x13c) = pcVar4;
  pcVar4 = StringDuplicate(*(char **)(iVar2 + 0x140));
  StringFree(*(char **)((int)this + 0x140));
  *(char **)((int)this + 0x140) = pcVar4;
  return this;
}

