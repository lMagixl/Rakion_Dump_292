
void FUN_361619c0(void)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *local_24;
  char *local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_360605c0(&local_10,0xff0080);
  local_14 = *DAT_362fdfe4;
  iVar6 = DAT_362fdfe4[1];
  local_1c = 0;
  if ((*(byte *)(DAT_362fdfe4 + 0xd) & 1) != 0) {
    local_18 = iVar6;
    ska_IDToString((long)&local_20);
    pcVar7 = local_20;
    local_4 = 0;
    pcVar1 = strrchr(local_20,0x5f);
    if (pcVar1 != (char *)0x0) {
      uVar2 = (int)pcVar1 - (int)pcVar7;
      pcVar3 = (char *)thunk_FUN_361bf99c(uVar2 + 1);
      pcVar1 = pcVar3;
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar1 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar1 = pcVar1 + 4;
      }
      for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar1 = pcVar1 + 1;
      }
      pcVar3[uVar2] = '\0';
      local_24 = StringDuplicate(pcVar3);
      local_4._0_1_ = 1;
      lVar4 = ska_FindID((CTString *)&local_24);
      local_4._0_1_ = 0;
      StringFree(local_24);
      if (-1 < lVar4) {
        local_24 = StringDuplicate(pcVar3);
        local_4._0_1_ = 2;
        lVar4 = ska_StringToID((CTString *)&local_24);
        local_4._0_1_ = 0;
        StringFree(local_24);
        if (lVar4 == DAT_362a6bac) {
          local_1c = 1;
        }
      }
      operator_delete__(pcVar3);
      iVar6 = local_18;
    }
    local_4 = 0xffffffff;
    StringFree(local_20);
  }
  if (((DAT_362fdfe4[2] == DAT_362a6bac) || (local_1c != 0)) && (0 < iVar6)) {
    local_14 = local_14 << 2;
    do {
      *(undefined4 *)(local_14 + DAT_362fe084) = local_10;
      local_14 = local_14 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  ExceptionList = local_c;
  return;
}

