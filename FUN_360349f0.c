
void __thiscall FUN_360349f0(void *this,CTStream *param_1)

{
  CTStream *this_00;
  undefined4 *puVar1;
  CTStream *pCVar2;
  CModelInstance *pCVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *local_1c;
  undefined1 local_18;
  undefined4 local_11;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  this_00 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fec5;
  local_c = ExceptionList;
  local_18 = DAT_362259d4;
  local_1c = DAT_362259d0;
  ExceptionList = &local_c;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_1c);
  puVar1 = (undefined4 *)((int)this + 0xcc);
  puVar6 = *(undefined4 **)(this_00 + 0x14);
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar6 = puVar6 + 1;
  }
  *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 0x1c;
  param_1 = (CTStream *)StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  if (*(int *)((int)this + 0xe8) != -1) {
    puVar1 = (undefined4 *)ska_IDToString((long)&local_1c);
    local_4._0_1_ = 1;
    pCVar2 = (CTStream *)StringDuplicate((char *)*puVar1);
    StringFree((char *)param_1);
    local_4 = (uint)local_4._1_3_ << 8;
    param_1 = pCVar2;
    StringFree(local_1c);
  }
  operator<<(this_00,(CTString *)&param_1);
  local_11 = DAT_362259d8;
  local_d = DAT_362259dc;
  CTStream::WriteID_t(this_00,(CChunkID *)&local_11);
  iVar4 = FUN_36036010((int)this + 0x4c);
  **(int **)(this_00 + 0x14) = iVar4;
  iVar5 = 0;
  *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 4;
  if (0 < iVar4) {
    do {
      pCVar3 = (CModelInstance *)FUN_36036020((void *)((int)this + 0x4c),iVar5);
      WriteModelInstance_t(this_00,pCVar3,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  local_4 = 0xffffffff;
  StringFree((char *)param_1);
  ExceptionList = local_c;
  return;
}

