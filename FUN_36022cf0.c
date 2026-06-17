
uint __cdecl FUN_36022cf0(CTStream *param_1)

{
  undefined4 uVar1;
  CTStream *pCVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  pCVar2 = param_1;
  uVar1 = DAT_362b8f08;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620eeb2;
  local_c = ExceptionList;
  DAT_362b8f08 = 1;
  iVar5 = **(int **)(param_1 + 0x14);
  uVar4 = 0xffffffff;
  ExceptionList = &local_c;
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  if (0 < iVar5) {
    do {
      param_1 = (CTStream *)StringDuplicate(&DAT_36222fa0);
      local_4 = 0;
      operator>>(pCVar2,(CTString *)&param_1);
      uVar3 = FUN_360227c0(&DAT_362b8ff8,(CTString *)&param_1);
      if (uVar3 == 0) {
        local_14 = StringDuplicate((char *)param_1);
        local_10 = 0;
        local_4._0_1_ = 1;
        FUN_36022be0((CTString *)&local_14,0);
        local_4 = (uint)local_4._1_3_ << 8;
        StringFree(local_14);
        uVar3 = FUN_360227c0(&DAT_362b8ff8,(CTString *)&param_1);
      }
      uVar3 = *(uint *)(uVar3 + 8);
      uVar4 = uVar4 >> 8 ^ (uint)(&crc_aulCRCTable)[uVar3 >> 0x18 ^ uVar4 & 0xff];
      uVar4 = uVar4 >> 8 ^ (uint)(&crc_aulCRCTable)[uVar3 >> 0x10 & 0xff ^ uVar4 & 0xff];
      uVar4 = uVar4 >> 8 ^ (uint)(&crc_aulCRCTable)[uVar3 >> 8 & 0xff ^ uVar4 & 0xff];
      uVar4 = uVar4 >> 8 ^ (uint)(&crc_aulCRCTable)[uVar4 & 0xff ^ uVar3 & 0xff];
      local_4 = 0xffffffff;
      StringFree((char *)param_1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  DAT_362b8f08 = uVar1;
  ExceptionList = local_c;
  return ~uVar4;
}

