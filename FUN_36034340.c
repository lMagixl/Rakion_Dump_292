
void __cdecl FUN_36034340(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  CMesh *pCVar3;
  int iVar4;
  CTStream *unaff_EDI;
  undefined4 *local_30;
  undefined1 local_2c;
  undefined4 local_25;
  undefined1 local_21;
  char *local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_3620fe5b;
  local_14 = ExceptionList;
  local_2c = DAT_36225a34;
  local_30 = DAT_36225a30;
  ExceptionList = &local_14;
  CTStream::ExpectID_t(unaff_EDI,(CChunkID *)&local_30);
  iVar1 = **(int **)(unaff_EDI + 0x14);
  *(int **)(unaff_EDI + 0x14) = *(int **)(unaff_EDI + 0x14) + 1;
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x44) = iVar1;
    uVar2 = thunk_FUN_361bf99c(iVar1 * 4 + 4);
    *(undefined4 *)(param_1 + 0x48) = uVar2;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      local_20 = StringDuplicate(&DAT_36222fa0);
      local_1c = 0;
      local_c = 0;
      local_25 = DAT_36225a38;
      local_21 = DAT_36225a3c;
      CTStream::ExpectID_t(unaff_EDI,(CChunkID *)&local_25);
      operator>>(unaff_EDI,(CTFileName *)&local_20);
      local_30 = (undefined4 *)(*(int *)(param_1 + 0x48) + iVar4 * 4);
      pCVar3 = CStock_CMesh::Obtain_t(_pMeshStock,(CTFileName *)&local_20);
      *local_30 = pCVar3;
      local_c = 0xffffffff;
      StringFree(local_20);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  ExceptionList = local_14;
  return;
}

