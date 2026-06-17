
void __thiscall FUN_3604ae70(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_36051ef0(param_1);
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 0x10);
  iVar3 = FUN_3604ab20(this,(int)param_1);
  *(undefined4 *)(iVar1 + iVar3 * 4) = *(undefined4 *)(iVar1 + -4 + iVar2 * 4);
  FUN_3604aad0(this,1);
  return;
}

