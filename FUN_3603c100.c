
void __thiscall FUN_3603c100(void *this,CTString *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  CTString *pCVar5;
  int iVar6;
  char *local_28;
  int local_24;
  int *local_20;
  int local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362106b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pcVar1 = StringDuplicate(&DAT_36226daa);
  StringFree(*(char **)param_1);
  *(char **)param_1 = pcVar1;
  FUN_3603d4d0(local_1c);
  local_4 = 0;
  iVar6 = 0;
  iVar2 = FUN_3603c2b0(this);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      FUN_3603d4f0(local_1c,*(int *)((int)this + 4) + iVar2);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x14;
      iVar3 = FUN_3603c2b0(this);
    } while (iVar6 < iVar3);
  }
  iVar6 = 0;
  iVar2 = FUN_3603c310((undefined4 *)((int)this + 8));
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      FUN_3603d4f0(local_1c,*(int *)((int)this + 0xc) + iVar2);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x28;
      iVar3 = FUN_3603c310((undefined4 *)((int)this + 8));
    } while (iVar6 < iVar3);
  }
  iVar6 = 0;
  iVar2 = FUN_3603c370((undefined4 *)((int)this + 0x10));
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      FUN_3603d4f0(local_1c,*(int *)((int)this + 0x14) + iVar2);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0xc;
      iVar3 = FUN_3603c370((undefined4 *)((int)this + 0x10));
    } while (iVar6 < iVar3);
  }
  local_20 = local_1c;
  iVar6 = 0;
  local_24 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar2 = FUN_3603c430((int)local_20);
  if (0 < iVar2) {
    do {
      puVar4 = (undefined4 *)FUN_3603c3a0(local_1c,iVar6);
      pCVar5 = (CTString *)(**(code **)*puVar4)(&local_28);
      local_4._0_1_ = 2;
      CTString::operator+=(param_1,pCVar5);
      local_4 = CONCAT31(local_4._1_3_,1);
      StringFree(local_28);
      iVar6 = iVar6 + 1;
      local_24 = iVar6;
      iVar2 = FUN_3603c430((int)local_1c);
    } while (iVar6 < iVar2);
  }
  local_4 = 0xffffffff;
  FUN_3603d640(local_1c);
  ExceptionList = pvStack_c;
  return;
}

