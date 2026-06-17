
void __thiscall FUN_36026f80(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = StringDuplicate(&DAT_36222fa0);
  StringFree((char *)*param_1);
  *param_1 = pcVar3;
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 0x10);
  iVar4 = FUN_36026940(this,(int)param_1);
  *(undefined4 *)(iVar1 + iVar4 * 4) = *(undefined4 *)(iVar1 + -4 + iVar2 * 4);
  FUN_360268f0(this,1);
  return;
}

