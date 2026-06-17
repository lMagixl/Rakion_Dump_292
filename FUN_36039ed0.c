
void __fastcall FUN_36039ed0(undefined4 *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  void *this;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1[4] != 0) {
    iVar2 = 0;
    if (0 < (int)param_1[4]) {
      do {
        FUN_36039d50(*(undefined4 **)(param_1[3] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[4]);
    }
    FreeMemory((void *)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_36021560(&local_8,param_1);
  while( true ) {
    bVar1 = FUN_36021580(&local_4);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      FUN_36021570(&local_4);
    }
    bVar1 = FUN_36021580(&local_8);
    if (CONCAT31(extraout_var_00,bVar1) != 0) break;
    iVar2 = FUN_360215a0(&local_8);
    if (*(void **)(iVar2 + 8) != (void *)0x0) {
      FUN_36039cf0(*(void **)(iVar2 + 8),3);
    }
    this = (void *)FUN_36021590(&local_8);
    if (this != (void *)0x0) {
      FUN_36021830(this,1);
    }
  }
  return;
}

