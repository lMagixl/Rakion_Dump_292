
void __fastcall FUN_361434c0(void *param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)param_1 + 0x48) = *(undefined4 *)((int)param_1 + 0xe8);
  *(undefined4 *)((int)param_1 + 0x44) = *(undefined4 *)((int)param_1 + 0xe4);
  FUN_361428a0((int)param_1);
  iVar1 = *(int *)((int)param_1 + 0x3c);
  *(undefined4 *)((int)param_1 + 0xe0) = *(undefined4 *)((int)param_1 + 0x40);
  *(int *)((int)param_1 + 0xdc) = iVar1;
  *(undefined4 **)((int)param_1 + 0xe4) = *(undefined4 **)((int)param_1 + 0x44);
  *(undefined4 *)((int)param_1 + 0xe8) = *(undefined4 *)((int)param_1 + 0x48);
  if (iVar1 == 0) {
    FUN_36143460(param_1,**(undefined4 **)((int)param_1 + 0x44),*(undefined4 *)((int)param_1 + 0x48)
                );
  }
  else {
    FUN_36143b30((void *)((int)param_1 + 0x20),iVar1);
  }
  if (*(int *)((int)param_1 + 0xe0) != 0) {
    FUN_36143b30((void *)((int)param_1 + 0x20),*(int *)((int)param_1 + 0xe0));
    FUN_36143b30((void *)((int)param_1 + 0x20),*(int *)((int)param_1 + 0xe4));
    return;
  }
  FUN_36143460(param_1,*(undefined4 *)((int)param_1 + 0xe8),
               *(undefined4 *)(*(int *)((int)param_1 + 0xe4) + 4));
  FUN_36143b30((void *)((int)param_1 + 0x20),*(int *)((int)param_1 + 0xe4));
  return;
}

