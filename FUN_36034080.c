
void __cdecl FUN_36034080(int param_1)

{
  int iVar1;
  int iVar2;
  CTStream *unaff_ESI;
  int iVar3;
  undefined4 local_1e;
  undefined1 local_1a;
  undefined4 local_19;
  undefined1 local_15;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fe37;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_36036000((undefined4 *)(param_1 + 0x44));
  if (iVar2 != 0) {
    local_1a = DAT_36225984;
    local_1e = DAT_36225980;
    CTStream::WriteID_t(unaff_ESI,(CChunkID *)&local_1e);
    iVar2 = FUN_36036000((undefined4 *)(param_1 + 0x44));
    **(int **)(unaff_ESI + 0x14) = iVar2;
    iVar3 = 0;
    *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 4;
    if (0 < iVar2) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x48) + iVar3 * 4);
        local_14 = StringDuplicate(*(char **)(iVar1 + 0xc));
        local_10 = *(undefined4 *)(iVar1 + 0x10);
        local_4 = 0;
        local_19 = DAT_36225988;
        local_15 = DAT_3622598c;
        CTStream::WriteID_t(unaff_ESI,(CChunkID *)&local_19);
        operator<<(unaff_ESI,(CTFileName *)&local_14);
        local_4 = 0xffffffff;
        StringFree(local_14);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  ExceptionList = local_c;
  return;
}

