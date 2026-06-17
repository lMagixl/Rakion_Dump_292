
void __cdecl FUN_36033e70(int param_1)

{
  int iVar1;
  CTStream *unaff_ESI;
  int iVar2;
  int local_54;
  int local_50;
  char *local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c;
  undefined4 local_37;
  undefined1 local_33;
  undefined4 local_32;
  undefined1 local_2e;
  undefined4 local_2d;
  undefined1 local_29;
  char *local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_3620fe25;
  local_14 = ExceptionList;
  local_3c = DAT_36225964;
  local_40 = DAT_36225960;
  ExceptionList = &local_14;
  CTStream::WriteID_t(unaff_ESI,(CChunkID *)&local_40);
  local_44 = FUN_36035f70((undefined4 *)(param_1 + 4));
  **(int **)(unaff_ESI + 0x14) = local_44;
  *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 4;
  if (0 < local_44) {
    local_50 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + local_50);
      iVar2 = *(int *)(param_1 + 8) + local_50;
      local_40 = iVar2;
      local_20 = StringDuplicate(*(char **)(iVar1 + 0xc));
      local_1c = *(undefined4 *)(iVar1 + 0x10);
      local_c = 0;
      local_37 = DAT_36225968;
      local_33 = DAT_3622596c;
      CTStream::WriteID_t(unaff_ESI,(CChunkID *)&local_37);
      operator<<(unaff_ESI,(CTFileName *)&local_20);
      local_2e = DAT_36225974;
      local_32 = DAT_36225970;
      CTStream::WriteID_t(unaff_ESI,(CChunkID *)&local_32);
      iVar1 = FUN_36035f30((undefined4 *)(iVar2 + 4));
      **(int **)(unaff_ESI + 0x14) = iVar1;
      *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 4;
      if (0 < iVar1) {
        local_54 = 0;
        local_48 = iVar1;
        do {
          iVar1 = *(int *)(*(int *)(iVar2 + 8) + 0x14 + local_54);
          local_28 = StringDuplicate(*(char **)(iVar1 + 0xc));
          local_24 = *(undefined4 *)(iVar1 + 0x10);
          local_c._0_1_ = 1;
          ska_IDToString((long)&local_4c);
          local_c._0_1_ = 2;
          local_2d = DAT_36225978;
          local_29 = DAT_3622597c;
          CTStream::WriteID_t(unaff_ESI,(CChunkID *)&local_2d);
          operator<<(unaff_ESI,(CTFileName *)&local_28);
          operator<<(unaff_ESI,(CTString *)&local_4c);
          local_c._0_1_ = 1;
          StringFree(local_4c);
          local_c = (uint)local_c._1_3_ << 8;
          StringFree(local_28);
          local_54 = local_54 + 0x1c;
          local_48 = local_48 + -1;
          iVar2 = local_40;
        } while (local_48 != 0);
      }
      local_c = 0xffffffff;
      StringFree(local_20);
      local_50 = local_50 + 0xc;
      local_44 = local_44 + -1;
    } while (local_44 != 0);
  }
  ExceptionList = local_14;
  return;
}

