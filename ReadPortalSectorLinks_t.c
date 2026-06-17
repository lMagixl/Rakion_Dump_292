
/* public: void __thiscall CBrushArchive::ReadPortalSectorLinks_t(class CTStream &) */

void __thiscall CBrushArchive::ReadPortalSectorLinks_t(CBrushArchive *this,CTStream *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_5;
  undefined1 local_1;
  
                    /* 0x136580  2978  ?ReadPortalSectorLinks_t@CBrushArchive@@QAEXAAVCTStream@@@Z
                        */
  DAT_362fd6d4 = 0;
  MakeIndices(this);
  iVar2 = DAT_36238840;
  local_1 = DAT_36238844;
  piVar4 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar4 == iVar2) {
    local_5 = DAT_36238848;
    local_1 = DAT_3623884c;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_5);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
    CTStream::GetPos_t(param_1);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
    while( true ) {
      piVar4 = *(int **)(param_1 + 0x14);
      iVar2 = *piVar4;
      *(int **)(param_1 + 0x14) = piVar4 + 1;
      if (iVar2 == -1) break;
      iVar5 = piVar4[1];
      iVar2 = *(int *)(*(int *)(this + 0x44) + iVar2 * 4);
      *(int **)(param_1 + 0x14) = piVar4 + 2;
      if (0 < iVar5) {
        do {
          iVar3 = **(int **)(param_1 + 0x14);
          *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
          AddRelationPair((CRelationSrc *)(*(int *)(*(int *)(this + 0x3c) + iVar3 * 4) + 0x1b0),
                          (CRelationDst *)(iVar2 + 0x90));
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      puVar1 = (uint *)(iVar2 + 0x4c);
      *puVar1 = *puVar1 | 2;
    }
    local_5 = DAT_36238850;
    local_1 = DAT_36238854;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_5);
    DAT_362fd6d4 = 1;
  }
  return;
}

