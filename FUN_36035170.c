
void __cdecl FUN_36035170(char *param_1)

{
  char *pcVar1;
  long lVar2;
  CModelInstance *pCVar3;
  int iVar4;
  CTStream *unaff_EBX;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 *local_1c;
  undefined1 local_18;
  undefined4 local_11;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ff2f;
  local_c = ExceptionList;
  local_18 = DAT_36225a8c;
  local_1c = DAT_36225a88;
  ExceptionList = &local_c;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_1c);
  puVar5 = *(undefined4 **)(unaff_EBX + 0x14);
  pcVar6 = pcVar1 + 0xcc;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pcVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    pcVar6 = pcVar6 + 4;
  }
  *(int *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + 0x1c;
  param_1 = StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  operator>>(unaff_EBX,(CTString *)&param_1);
  iVar4 = CTString::operator==((CTString *)&param_1,&DAT_36225a8d);
  if (iVar4 == 0) {
    lVar2 = ska_StringToID((CTString *)&param_1);
    *(long *)(pcVar1 + 0xe8) = lVar2;
  }
  else {
    pcVar1[0xe8] = -1;
    pcVar1[0xe9] = -1;
    pcVar1[0xea] = -1;
    pcVar1[0xeb] = -1;
  }
  local_11 = DAT_36225a90;
  local_d = DAT_36225a94;
  CTStream::ExpectID_t(unaff_EBX,(CChunkID *)&local_11);
  iVar4 = **(int **)(unaff_EBX + 0x14);
  *(int **)(unaff_EBX + 0x14) = *(int **)(unaff_EBX + 0x14) + 1;
  if (0 < iVar4) {
    do {
      local_1c = &stack0xffffffd4;
      StringDuplicate(&DAT_36225a95);
      pCVar3 = CreateModelInstance();
      FUN_36036920(pcVar1 + 0x4c,pCVar3);
      ReadModelInstance_t(unaff_EBX,pCVar3,0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_4 = 0xffffffff;
  StringFree(param_1);
  ExceptionList = local_c;
  return;
}

