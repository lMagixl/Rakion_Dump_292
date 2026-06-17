
void __thiscall
FUN_3603b930(void *this,int param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)((int)this + 4) + param_1 * 0x14;
  *(undefined4 *)(iVar1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  pcVar2 = StringDuplicate(param_3);
  StringFree(*(char **)(iVar1 + 8));
  *(char **)(iVar1 + 8) = pcVar2;
  return;
}

