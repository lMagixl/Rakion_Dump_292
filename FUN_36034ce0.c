
void __cdecl FUN_36034ce0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  CTStream *unaff_ESI;
  undefined4 *this;
  char *local_38;
  int local_34;
  undefined1 local_30;
  undefined1 *local_2c;
  undefined1 local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fee9;
  local_c = ExceptionList;
  local_28 = DAT_36225a7c;
  local_2c = DAT_36225a78;
  ExceptionList = &local_c;
  CTStream::ExpectID_t(unaff_ESI,(CChunkID *)&local_2c);
  iVar1 = **(int **)(unaff_ESI + 0x14);
  *(int **)(unaff_ESI + 0x14) = *(int **)(unaff_ESI + 0x14) + 1;
  FUN_36036300((void *)(param_1 + 0x1c),iVar1);
  if (0 < iVar1) {
    iVar10 = 0;
    local_34 = iVar1;
    do {
      this = (undefined4 *)(*(int *)(param_1 + 0x20) + iVar10);
      local_38 = StringDuplicate(&DAT_36222fa0);
      puVar2 = *(undefined4 **)(unaff_ESI + 0x14);
      *this = *puVar2;
      this[1] = puVar2[1];
      this[2] = puVar2[2];
      iVar1 = *(int *)(unaff_ESI + 0x14);
      *(undefined4 **)(unaff_ESI + 0x14) = (undefined4 *)(iVar1 + 0xc);
      this[3] = *(undefined4 *)(iVar1 + 0xc);
      this[4] = *(undefined4 *)(iVar1 + 0x10);
      this[5] = *(undefined4 *)(iVar1 + 0x14);
      local_4 = 0;
      *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 0xc;
      operator>>(unaff_ESI,(CTString *)&local_38);
      local_2c = &stack0xffffffb8;
      pcVar9 = StringDuplicate(local_38);
      FUN_36032d10(this,pcVar9);
      local_4 = 0xffffffff;
      StringFree(local_38);
      iVar10 = iVar10 + 0x20;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  local_34 = DAT_36225a80;
  local_30 = DAT_36225a84;
  CTStream::ExpectID_t(unaff_ESI,(CChunkID *)&local_34);
  puVar2 = *(undefined4 **)(unaff_ESI + 0x14);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  *(undefined4 **)(unaff_ESI + 0x14) = puVar2 + 3;
  uVar6 = puVar2[3];
  uVar7 = puVar2[4];
  uVar8 = puVar2[5];
  *(undefined4 **)(unaff_ESI + 0x14) = puVar2 + 6;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  *(undefined4 *)(param_1 + 0xa8) = uVar6;
  *(undefined4 *)(param_1 + 0xac) = uVar7;
  *(undefined4 *)(param_1 + 0xb0) = uVar8;
  *(undefined4 *)(param_1 + 0xa4) = uVar5;
  ExceptionList = local_c;
  return;
}

