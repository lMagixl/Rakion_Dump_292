
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3603a640(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 * 0x1c + 8 + DAT_362bec74);
  iVar2 = param_1 * 0x1c + DAT_362bec74;
  if (0 < iVar1) {
    FUN_3603a640(iVar1);
  }
  iVar1 = *(int *)(iVar2 + 0xc);
  if (0 < iVar1) {
    FUN_3603a640(iVar1);
  }
  iVar1 = *(int *)(iVar2 + 0x14);
  if (0 < iVar1) {
    FUN_3603a640(iVar1);
  }
  iVar2 = DAT_362bec80 + 1;
  DAT_362bec80 = iVar2;
  iVar1 = FUN_3600bef0((undefined4 *)&DAT_362bec78);
  if (iVar1 < iVar2) {
    iVar1 = FUN_3600bef0((undefined4 *)&DAT_362bec78);
    FUN_36026aa0(&DAT_362bec78,iVar1 + _DAT_362bec84);
    *(int *)(DAT_362bec7c + -4 + DAT_362bec80 * 4) = param_1;
    return;
  }
  *(int *)(DAT_362bec7c + -4 + iVar2 * 4) = param_1;
  return;
}

