
void __thiscall
FUN_3603b980(void *this,int param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)((int)this + 0xc) + param_1 * 0x28;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  *(undefined4 *)(iVar1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 0x20) = param_4;
  pcVar2 = StringDuplicate(param_3);
  StringFree(*(char **)(iVar1 + 8));
  *(char **)(iVar1 + 8) = pcVar2;
  return;
}

