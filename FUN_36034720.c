
void __cdecl FUN_36034720(int param_1)

{
  int iVar1;
  int iVar2;
  CTStream *unaff_EBX;
  int iVar3;
  undefined4 local_19;
  undefined1 local_15;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fe99;
  local_c = ExceptionList;
  local_15 = DAT_3622599c;
  local_19 = DAT_36225998;
  ExceptionList = &local_c;
  CTStream::WriteID_t(unaff_EBX,(CChunkID *)&local_19);
  iVar1 = FUN_36035fa0(param_1 + 0x34);
  **(int **)(unaff_EBX + 0x14) = iVar1;
  iVar3 = 0;
  *(int *)(unaff_EBX + 0x14) = *(int *)(unaff_EBX + 0x14) + 4;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_36035fb0((void *)(param_1 + 0x34),iVar3);
      local_14 = StringDuplicate(*(char **)(iVar2 + 0xc));
      local_10 = *(undefined4 *)(iVar2 + 0x10);
      local_4 = 0;
      operator<<(unaff_EBX,(CTFileName *)&local_14);
      local_4 = 0xffffffff;
      StringFree(local_14);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

