
int __fastcall FUN_361db3cd(int param_1)

{
  int iVar1;
  void *extraout_ECX;
  void *this;
  void *extraout_ECX_00;
  bool bVar2;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined4 *local_8;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    bVar2 = *(int *)(param_1 + 0x50) == 0;
    if (bVar2) {
      local_10 = 0;
      local_18 = 8;
    }
    else {
      local_10 = 0x200;
      local_18 = 1;
    }
    local_c = (uint)bVar2;
    iVar1 = FUN_361c17d5((void *)0x0,*(int **)(param_1 + 4),(uint *)(param_1 + 0x58),
                         (uint *)(param_1 + 0x5c),(uint *)0x0,local_10,(int *)(param_1 + 0x54),
                         local_c);
    if (-1 < iVar1) {
      local_14 = 0;
      if (local_18 != 0) {
        local_8 = (undefined4 *)(param_1 + 0x10);
        this = extraout_ECX;
        do {
          iVar1 = FUN_361c184e(this,*(int **)(param_1 + 4),*(uint *)(param_1 + 0x58),
                               *(uint *)(param_1 + 0x5c),1,local_10,*(int *)(param_1 + 0x54),local_c
                               ,(int)local_8);
          if (iVar1 < 0) {
            return iVar1;
          }
          iVar1 = (**(code **)(*(int *)*local_8 + 0x3c))((int *)*local_8,0,local_8 + 8);
          if (iVar1 < 0) {
            return iVar1;
          }
          local_14 = local_14 + 1;
          local_8 = local_8 + 1;
          this = extraout_ECX_00;
        } while (local_14 < local_18);
      }
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

