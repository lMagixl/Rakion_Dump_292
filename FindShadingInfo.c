
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEntity::FindShadingInfo(void) */

void __thiscall CEntity::FindShadingInfo(CEntity *this)

{
  float fVar1;
  int iVar2;
  CRelationSrc *pCVar3;
  CRelationDst *pCVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  float *pfVar9;
  ulonglong uVar10;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x129ef0  1642  ?FindShadingInfo@CEntity@@QAEXXZ */
  iVar6 = 0;
  if ((*(int *)(this + 0x80) != 0) && ((*(uint *)(this + 0x10) & 0x20) == 0)) {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x20;
    *(CEntity **)(*(int *)(this + 0x80) + 0x2c) = this;
    *(undefined4 *)(*(int *)(this + 0x80) + 8) = 0;
    *(undefined4 *)(*(int *)(this + 0x80) + 0xc) = 0;
    iVar2 = CListNode::IsLinked(*(CListNode **)(this + 0x80));
    if (iVar2 != 0) {
      CListNode::Remove(*(CListNode **)(this + 0x80));
    }
    DAT_362fcd20 = *(undefined4 *)(this + 0x3c);
    DAT_362fcd24 = *(undefined4 *)(this + 0x40);
    DAT_362fcd28 = *(undefined4 *)(this + 0x44);
    DAT_362fcc10 = (undefined4 *)0x0;
    DAT_362fcc0c = (Vector<float,3> *)0x0;
    DAT_362fcc08 = 0x7f61b1e6;
    if ((*(uint *)(this + 8) & 0x200) != 0) {
      iVar2 = FUN_360cb720((int)(this + 0x2ac));
      if (0 < iVar2) {
        do {
          FUN_36129cd0(*(int **)(*(int *)(this + 0x2b0) + iVar6 * 4));
          iVar6 = iVar6 + 1;
          iVar2 = FUN_360cb720((int)(this + 0x2ac));
        } while (iVar6 < iVar2);
      }
    }
    for (piVar5 = *(int **)(this + 0xac); *piVar5 != 0; piVar5 = (int *)*piVar5) {
      pCVar3 = CRelationLnk::GetSrc((CRelationLnk *)(piVar5 + -4));
      piVar8 = *(int **)pCVar3;
      while (*piVar8 != 0) {
        pCVar4 = CRelationLnk::GetDst((CRelationLnk *)(piVar8 + -2));
        iVar6 = *(int *)(pCVar4 + -0xa8);
        if (iVar6 == 0xb) {
          FUN_36127470();
          piVar8 = (int *)*piVar8;
        }
        else {
          if ((iVar6 != 4) && (iVar6 != 8)) break;
          piVar8 = (int *)*piVar8;
        }
      }
    }
    if (DAT_362fcc10 != (undefined4 *)0x0) {
LAB_3612a08b:
      *(undefined4 **)(*(int *)(this + 0x80) + 8) = DAT_362fcc10;
      CListHead::AddTail((CListHead *)(DAT_362fcc10 + 0x6f),*(CListNode **)(this + 0x80));
      iVar6 = *(int *)(this + 0x80);
      *(float *)(iVar6 + 0x10) = DAT_362fcd2c;
      *(float *)(iVar6 + 0x14) = DAT_362fcd30;
      *(float *)(iVar6 + 0x18) = DAT_362fcd34;
      iVar6 = *(int *)(*(int *)(*(int *)(DAT_362fcc10[0x6b] + 0x38) + 0x14) + 0x668);
      local_54[0] = *(float *)(iVar6 + 0x54);
      local_54[1] = (float)*(undefined4 *)(iVar6 + 0x60);
      local_54[2] = (float)*(undefined4 *)(iVar6 + 0x6c);
      local_54[3] = (float)*(undefined4 *)(iVar6 + 0x58);
      local_44 = *(undefined4 *)(iVar6 + 100);
      local_40 = *(undefined4 *)(iVar6 + 0x70);
      local_3c = *(undefined4 *)(iVar6 + 0x5c);
      local_38 = *(undefined4 *)(iVar6 + 0x68);
      local_34 = *(undefined4 *)(iVar6 + 0x74);
      pfVar7 = local_54;
      pfVar9 = local_30;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar9 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar9 = pfVar9 + 1;
      }
      local_60 = DAT_362fcd2c - *(float *)(iVar6 + 0x3c);
      local_5c = DAT_362fcd30 - *(float *)(iVar6 + 0x40);
      local_58 = DAT_362fcd34 - *(float *)(iVar6 + 0x44);
      DAT_362fcd2c = local_60 * local_30[0] + local_5c * local_30[1] + local_58 * local_30[2];
      DAT_362fcd30 = local_30[3] * local_60 + local_20 * local_5c + local_1c * local_58;
      DAT_362fcd34 = local_18 * local_60 + local_14 * local_5c + local_10 * local_58;
      local_74 = DAT_362fcd2c;
      local_70 = DAT_362fcd30;
      local_6c = DAT_362fcd34;
      CMappingDefinition::GetTextureCoordinates
                ((CMappingDefinition *)(DAT_362fcc10 + 0x5c),
                 (CMappingVectors *)(*(int *)*DAT_362fcc10 + 0x10),(Vector<float,3> *)&DAT_362fcd2c,
                 (Vector<long,2> *)&local_68);
      local_74 = _DAT_36223384 / (float)(1 << ((byte)DAT_362fcc10[0x39] & 0x1f));
      fVar1 = (float)(DAT_362fcc10[0x3c] + local_68) * local_74;
      local_74 = (float)(DAT_362fcc10[0x3d] + local_64) * local_74;
      floor((double)fVar1);
      uVar10 = FUN_361bfd6c();
      *(int *)(*(int *)(this + 0x80) + 0x1c) = (int)uVar10;
      floor((double)local_74);
      uVar10 = FUN_361bfd6c();
      *(int *)(*(int *)(this + 0x80) + 0x20) = (int)uVar10;
      *(float *)(*(int *)(this + 0x80) + 0x24) =
           fVar1 - (float)*(int *)(*(int *)(this + 0x80) + 0x1c);
      *(float *)(*(int *)(this + 0x80) + 0x28) =
           local_74 - (float)*(int *)(*(int *)(this + 0x80) + 0x20);
      return;
    }
    if (DAT_362fcc0c == (Vector<float,3> *)0x0) {
      for (piVar5 = *(int **)(this + 0xac); *piVar5 != 0; piVar5 = (int *)*piVar5) {
        pCVar3 = CRelationLnk::GetSrc((CRelationLnk *)(piVar5 + -4));
        iVar6 = 0;
        if (0 < *(int *)(pCVar3 + -0x84)) {
          iVar2 = 0;
          do {
            FUN_36129cd0((int *)(*(int *)(pCVar3 + -0x80) + iVar2));
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + 0x1d0;
          } while (iVar6 < *(int *)(pCVar3 + -0x84));
        }
      }
      if (DAT_362fcc10 != (undefined4 *)0x0) goto LAB_3612a08b;
      if (DAT_362fcc0c == (Vector<float,3> *)0x0) {
        return;
      }
    }
    *(Vector<float,3> **)(*(int *)(this + 0x80) + 0xc) = DAT_362fcc0c;
    iVar6 = *(int *)(this + 0x80);
    *(float *)(iVar6 + 0x10) = DAT_362fcd2c;
    *(float *)(iVar6 + 0x14) = DAT_362fcd30;
    *(float *)(iVar6 + 0x18) = DAT_362fcd34;
    iVar6 = *(int *)(DAT_362fcc0c + 0x28);
    local_30[0] = *(float *)(iVar6 + 0x54);
    local_30[1] = *(float *)(iVar6 + 0x58);
    local_30[2] = *(float *)(iVar6 + 0x5c);
    local_30[3] = *(float *)(iVar6 + 0x3c);
    local_20 = *(float *)(iVar6 + 0x60);
    local_1c = *(float *)(iVar6 + 100);
    local_18 = *(float *)(iVar6 + 0x68);
    local_14 = *(float *)(iVar6 + 0x40);
    local_10 = *(float *)(iVar6 + 0x6c);
    local_c = *(undefined4 *)(iVar6 + 0x70);
    local_8 = *(undefined4 *)(iVar6 + 0x74);
    local_4 = *(undefined4 *)(iVar6 + 0x44);
    TR_CalcShadingTC((CTerrain *)&local_74,DAT_362fcc0c,&DAT_362fcd2c);
    floor((double)local_74);
    uVar10 = FUN_361bfd6c();
    *(int *)(*(int *)(this + 0x80) + 0x1c) = (int)uVar10;
    floor((double)local_70);
    uVar10 = FUN_361bfd6c();
    *(int *)(*(int *)(this + 0x80) + 0x20) = (int)uVar10;
    *(float *)(*(int *)(this + 0x80) + 0x28) =
         local_74 - (float)*(int *)(*(int *)(this + 0x80) + 0x1c);
    *(float *)(*(int *)(this + 0x80) + 0x24) =
         local_70 - (float)*(int *)(*(int *)(this + 0x80) + 0x20);
    CListHead::AddTail((CListHead *)(DAT_362fcc0c + 0xc),*(CListNode **)(this + 0x80));
  }
  return;
}

