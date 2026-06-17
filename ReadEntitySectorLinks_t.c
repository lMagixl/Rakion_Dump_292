
/* public: void __thiscall CBrushArchive::ReadEntitySectorLinks_t(class CTStream &) */

void __thiscall CBrushArchive::ReadEntitySectorLinks_t(CBrushArchive *this,CTStream *param_1)

{
  CRelationSrc *pCVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  CEntity *pCVar5;
  int iVar6;
  undefined4 local_5;
  undefined1 local_1;
  
                    /* 0x136690  2961  ?ReadEntitySectorLinks_t@CBrushArchive@@QAEXAAVCTStream@@@Z
                        */
  DAT_362fd6d8 = 0;
  MakeIndices(this);
  iVar2 = DAT_36238858;
  local_1 = DAT_3623885c;
  piVar4 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar4 == iVar2) {
    local_5 = DAT_36238860;
    local_1 = DAT_36238864;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_5);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
    CTStream::GetPos_t(param_1);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
    while( true ) {
      piVar4 = *(int **)(param_1 + 0x14);
      iVar2 = *piVar4;
      *(int **)(param_1 + 0x14) = piVar4 + 1;
      if (iVar2 == -1) break;
      iVar6 = piVar4[1];
      pCVar1 = (CRelationSrc *)(*(int *)(*(int *)(this + 0x44) + iVar2 * 4) + 0x9c);
      *(int **)(param_1 + 0x14) = piVar4 + 2;
      FUN_360325f0((undefined4 *)pCVar1);
      if (0 < iVar6) {
        do {
          uVar3 = **(ulong **)(param_1 + 0x14);
          *(ulong **)(param_1 + 0x14) = *(ulong **)(param_1 + 0x14) + 1;
          pCVar5 = CWorld::EntityFromID(*(CWorld **)(this + 0x34),uVar3);
          AddRelationPair(pCVar1,(CRelationDst *)(pCVar5 + 0xac));
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    local_1 = DAT_3623886c;
    local_5 = DAT_36238868;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_5);
    DAT_362fd6d8 = 1;
  }
  return;
}

