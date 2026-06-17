
void __cdecl FUN_360350b0(int param_1)

{
  CAnimSet *pCVar1;
  CTStream *unaff_ESI;
  int iVar2;
  undefined4 local_25;
  undefined1 local_21;
  char *local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_3620ff1d;
  local_14 = ExceptionList;
  local_21 = DAT_36225a4c;
  local_25 = DAT_36225a48;
  ExceptionList = &local_14;
  CTStream::ExpectID_t(unaff_ESI,(CChunkID *)&local_25);
  iVar2 = **(int **)(unaff_ESI + 0x14);
  *(int **)(unaff_ESI + 0x14) = *(int **)(unaff_ESI + 0x14) + 1;
  if (0 < iVar2) {
    do {
      local_20 = StringDuplicate(&DAT_36222fa0);
      local_1c = 0;
      local_c = 0;
      operator>>(unaff_ESI,(CTFileName *)&local_20);
      pCVar1 = CStock_CAnimSet::Obtain_t(_pAnimSetStock,(CTFileName *)&local_20);
      FUN_360368e0((void *)(param_1 + 0x34),pCVar1);
      local_c = 0xffffffff;
      StringFree(local_20);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  ExceptionList = local_14;
  return;
}

