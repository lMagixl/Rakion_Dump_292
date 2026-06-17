
void __cdecl FUN_36034170(int *param_1)

{
  int iVar1;
  CTStream *unaff_ESI;
  undefined4 local_19;
  undefined1 local_15;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fe49;
  local_c = ExceptionList;
  iVar1 = *param_1;
  local_19 = DAT_36225990;
  local_15 = DAT_36225994;
  ExceptionList = &local_c;
  CTStream::WriteID_t(unaff_ESI,(CChunkID *)&local_19);
  **(uint **)(unaff_ESI + 0x14) = (uint)(iVar1 != 0);
  *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 4;
  if ((iVar1 != 0) != 0) {
    local_14 = StringDuplicate(*(char **)(iVar1 + 0xc));
    local_10 = *(undefined4 *)(iVar1 + 0x10);
    local_4 = 0;
    operator<<(unaff_ESI,(CTFileName *)&local_14);
    local_4 = 0xffffffff;
    StringFree(local_14);
  }
  ExceptionList = local_c;
  return;
}

