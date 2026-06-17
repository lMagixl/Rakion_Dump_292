
void FUN_36034450(void)

{
  int iVar1;
  CSkeleton *pCVar2;
  CTStream *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 local_19;
  undefined1 local_15;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fe6d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *unaff_EDI = 0;
  local_15 = DAT_36225a44;
  local_19 = DAT_36225a40;
  CTStream::ExpectID_t(unaff_ESI,(CChunkID *)&local_19);
  iVar1 = **(int **)(unaff_ESI + 0x14);
  *(int **)(unaff_ESI + 0x14) = *(int **)(unaff_ESI + 0x14) + 1;
  if (iVar1 != 0) {
    local_14 = StringDuplicate(&DAT_36222fa0);
    local_10 = 0;
    local_4 = 0;
    operator>>(unaff_ESI,(CTFileName *)&local_14);
    pCVar2 = CStock_CSkeleton::Obtain_t(_pSkeletonStock,(CTFileName *)&local_14);
    *unaff_EDI = pCVar2;
    local_4 = 0xffffffff;
    StringFree(local_14);
  }
  ExceptionList = local_c;
  return;
}

