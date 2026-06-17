
/* public: void __thiscall CBrushArchive::WritePortalSectorLinks_t(class CTStream &) */

void __thiscall CBrushArchive::WritePortalSectorLinks_t(CBrushArchive *this,CTStream *param_1)

{
  long lVar1;
  int iVar2;
  CRelationSrc *pCVar3;
  long lVar4;
  int *piVar5;
  CBrushArchive *this_00;
  int *piVar6;
  int iVar7;
  long local_24;
  undefined1 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  CBrushArchive *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x136790  3981  ?WritePortalSectorLinks_t@CBrushArchive@@QAEXAAVCTStream@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362192e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MakeIndices(this);
  local_20 = DAT_36238874;
  local_24 = DAT_36238870;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_24);
  **(undefined4 **)(param_1 + 0x14) = 1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  lVar1 = CTStream::GetPos_t(param_1);
  **(undefined4 **)(param_1 + 0x14) = 0;
  this_00 = this + 0x14;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  local_14 = 0;
  local_4 = 0;
  local_24 = lVar1;
  local_10 = this_00;
  iVar2 = FUN_360cb6c0((int)this_00);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_360cb850(this_00,local_14);
      piVar5 = *(int **)(iVar2 + 0x674);
      while (*piVar5 != 0) {
        piVar6 = piVar5 + -6;
        local_1c = 0;
        local_4 = CONCAT31(local_4._1_3_,1);
        local_18 = piVar6;
        iVar2 = FUN_36043600((int)piVar6);
        if (0 < iVar2) {
          do {
            iVar2 = FUN_36043710(piVar6,local_1c);
            lVar1 = CListHead::Count((CListHead *)(iVar2 + 0x90));
            if (lVar1 != 0) {
              **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0xac);
              iVar7 = *(int *)(param_1 + 0x14);
              *(long **)(param_1 + 0x14) = (long *)(iVar7 + 4);
              *(long *)(iVar7 + 4) = lVar1;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
              for (piVar6 = *(int **)(iVar2 + 0x90); *piVar6 != 0; piVar6 = (int *)*piVar6) {
                pCVar3 = CRelationLnk::GetSrc((CRelationLnk *)(piVar6 + -4));
                **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(pCVar3 + 0x18);
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
              }
            }
            iVar7 = local_1c + 1;
            local_1c = iVar7;
            iVar2 = FUN_36043600((int)local_18);
            piVar6 = local_18;
          } while (iVar7 < iVar2);
        }
        piVar5 = (int *)*piVar5;
        local_1c = 0xffffffff;
        this_00 = local_10;
      }
      iVar7 = local_14 + 1;
      local_14 = iVar7;
      iVar2 = FUN_360cb6c0((int)this_00);
      lVar1 = local_24;
    } while (iVar7 < iVar2);
  }
  **(undefined4 **)(param_1 + 0x14) = 0xffffffff;
  local_4 = 0xffffffff;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  lVar4 = CTStream::GetPos_t(param_1);
  CTStream::SetPos_t(param_1,lVar1);
  **(int **)(param_1 + 0x14) = (lVar4 - lVar1) + -4;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  CTStream::SetPos_t(param_1,lVar4);
  local_1c = DAT_36238878;
  local_18 = (int *)CONCAT31(local_18._1_3_,DAT_3623887c);
  CTStream::WriteID_t(param_1,(CChunkID *)&local_1c);
  ExceptionList = local_c;
  return;
}

