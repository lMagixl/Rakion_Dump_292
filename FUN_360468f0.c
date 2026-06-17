
int __fastcall FUN_360468f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x2c);
  if ((iVar2 < 0x400) || (0x400 < iVar2)) {
    iVar2 = 0x400;
  }
  iVar1 = FUN_36046780(*(void **)(param_1 + 4),*(undefined4 **)(param_1 + 0x60),
                       *(uint *)(param_1 + 0x5c),iVar2);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + iVar1;
  if (2 < DAT_362bef9c) {
    CPrintF(s_zipRead___9d_>_9d_36227a2c,iVar2,iVar1);
  }
  return iVar1;
}

