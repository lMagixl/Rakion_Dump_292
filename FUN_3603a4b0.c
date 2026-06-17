
int __cdecl FUN_3603a4b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_10;
  
  iVar1 = FUN_3603a330();
  puVar2 = (undefined4 *)thunk_FUN_36039b40(&DAT_362bec70,param_1);
  puVar3 = (undefined4 *)thunk_FUN_36039b40(&DAT_362bec70,iVar1);
  *puVar3 = *puVar2;
  piVar4 = (int *)thunk_FUN_36039b40(&DAT_362bec70,param_1);
  iVar5 = *piVar4;
  if (iVar5 == 1) {
    iVar5 = thunk_FUN_36039b40(&DAT_362bec70,param_1);
    DAT_362bec6c = FUN_3603a4b0(*(int *)(iVar5 + 8));
    iVar5 = thunk_FUN_36039b40(&DAT_362bec70,iVar1);
    *(int *)(iVar5 + 8) = DAT_362bec6c;
  }
  else if (iVar5 == 2) {
    iVar5 = thunk_FUN_36039b40(&DAT_362bec70,param_1);
    DAT_362bec6c = FUN_3603a4b0(*(int *)(iVar5 + 8));
    iVar5 = thunk_FUN_36039b40(&DAT_362bec70,iVar1);
    *(int *)(iVar5 + 8) = DAT_362bec6c;
    iVar5 = thunk_FUN_36039b40(&DAT_362bec70,param_1);
    local_10 = *(int *)(iVar5 + 0x10);
    while (local_10 != -1) {
      iVar5 = FUN_3603a4b0(local_10);
      FUN_3603a1f0(iVar1,iVar5);
      iVar5 = thunk_FUN_36039b40(&DAT_362bec70,local_10);
      local_10 = *(int *)(iVar5 + 0x18);
    }
  }
  else if (iVar5 == 3) {
    iVar5 = thunk_FUN_36039b40(&DAT_362bec70,param_1);
    iVar6 = thunk_FUN_36039b40(&DAT_362bec70,iVar1);
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar5 + 4);
    iVar5 = thunk_FUN_36039b40(&DAT_362bec70,param_1);
    DAT_362bec6c = FUN_3603a4b0(*(int *)(iVar5 + 8));
    iVar5 = thunk_FUN_36039b40(&DAT_362bec70,iVar1);
    *(int *)(iVar5 + 8) = DAT_362bec6c;
  }
  return iVar1;
}

