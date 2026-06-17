
void __cdecl FUN_36034e80(int param_1)

{
  int iVar1;
  CMesh *pCVar2;
  long lVar3;
  undefined4 *puVar4;
  CTStream *unaff_ESI;
  CTextureObject *this;
  char *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c;
  undefined4 local_37;
  undefined1 local_33;
  undefined4 local_32;
  undefined1 local_2e;
  undefined4 local_2d;
  undefined1 local_29;
  char *local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_3620ff0b;
  local_14 = ExceptionList;
  local_3c = DAT_36225a14;
  local_40 = DAT_36225a10;
  ExceptionList = &local_14;
  CTStream::ExpectID_t(unaff_ESI,(CChunkID *)&local_40);
  iVar1 = **(int **)(unaff_ESI + 0x14);
  *(int **)(unaff_ESI + 0x14) = *(int **)(unaff_ESI + 0x14) + 1;
  FUN_36036860((void *)(param_1 + 4),iVar1);
  if (0 < iVar1) {
    local_48 = 0;
    local_40 = iVar1;
    do {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 8) + local_48);
      local_20 = StringDuplicate(&DAT_36222fa0);
      local_1c = 0;
      local_37 = DAT_36225a18;
      local_c = 0;
      local_33 = DAT_36225a1c;
      CTStream::ExpectID_t(unaff_ESI,(CChunkID *)&local_37);
      operator>>(unaff_ESI,(CTFileName *)&local_20);
      pCVar2 = CStock_CMesh::Obtain_t(_pMeshStock,(CTFileName *)&local_20);
      *puVar4 = pCVar2;
      local_2e = DAT_36225a24;
      local_32 = DAT_36225a20;
      CTStream::ExpectID_t(unaff_ESI,(CChunkID *)&local_32);
      iVar1 = **(int **)(unaff_ESI + 0x14);
      *(int **)(unaff_ESI + 0x14) = *(int **)(unaff_ESI + 0x14) + 1;
      FUN_36036260(puVar4 + 1,iVar1);
      if (0 < iVar1) {
        local_4c = 0;
        local_44 = iVar1;
        do {
          this = (CTextureObject *)(puVar4[2] + local_4c);
          local_29 = DAT_36225a2c;
          local_2d = DAT_36225a28;
          CTStream::ExpectID_t(unaff_ESI,(CChunkID *)&local_2d);
          local_28 = StringDuplicate(&DAT_36222fa0);
          local_24 = 0;
          local_c._0_1_ = 1;
          local_50 = StringDuplicate(&DAT_36222fa0);
          local_c._0_1_ = 2;
          operator>>(unaff_ESI,(CTFileName *)&local_28);
          operator>>(unaff_ESI,(CTString *)&local_50);
          lVar3 = ska_StringToID((CTString *)&local_50);
          *(long *)(this + 0x18) = lVar3;
          CTextureObject::SetData_t(this,(CTFileName *)&local_28);
          local_c._0_1_ = 1;
          StringFree(local_50);
          local_c = (uint)local_c._1_3_ << 8;
          StringFree(local_28);
          local_4c = local_4c + 0x1c;
          local_44 = local_44 + -1;
        } while (local_44 != 0);
      }
      local_c = 0xffffffff;
      StringFree(local_20);
      local_48 = local_48 + 0xc;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  ExceptionList = local_14;
  return;
}

