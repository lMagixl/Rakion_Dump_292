
void __thiscall FUN_36146820(void *this,int param_1,int *param_2,char *param_3)

{
  int iVar1;
  int local_38 [4];
  int aiStack_28 [10];
  
  FUN_3608b220(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x28),local_38);
  iVar1 = aiStack_28[*(int *)((int)this + 0x18) - *(int *)((int)this + 0x14)];
  *param_2 = (iVar1 >> 3) + *(int *)(param_1 + 0x30);
  *param_3 = '\x01' << ((byte)iVar1 & 7);
  return;
}

