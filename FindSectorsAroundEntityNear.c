
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEntity::FindSectorsAroundEntityNear(void) */

void __thiscall CEntity::FindSectorsAroundEntityNear(CEntity *this)

{
  CEntity *pCVar1;
  float fVar2;
  void *pvVar3;
  CEntity *pCVar4;
  CEntity *pCVar5;
  CRelationSrc *pCVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  CListNode *pCVar12;
  float10 fVar13;
  CListNode *local_134 [3];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  double local_110;
  double local_108;
  double local_100;
  float local_f8 [15];
  undefined1 local_bc [60];
  double local_80 [15];
  
                    /* 0x12adf0  1641  ?FindSectorsAroundEntityNear@CEntity@@QAEXXZ */
  if (_DAT_3622376c <= *(float *)(this + 0x88)) {
    fVar2 = *(float *)(this + 0x88);
    pCVar1 = this + 0x3c;
    iVar10 = 3;
    pCVar4 = pCVar1;
    do {
      pCVar5 = pCVar4 + 4;
      iVar10 = iVar10 + -1;
      *(float *)(pCVar5 + (int)local_134 + (8 - (int)pCVar1)) = *(float *)pCVar4 - fVar2;
      *(float *)(pCVar5 + ((int)&local_120 - (int)pCVar1)) = fVar2 + *(float *)pCVar4;
      pCVar4 = pCVar5;
    } while (iVar10 != 0);
    FUN_360bf170(local_f8,(float *)(this + 0x8c),(float *)(this + 0x3c),(float *)(this + 0x54));
    FUN_3612ee40(local_80,local_f8);
    CListHead::Clear((CListHead *)local_134);
    for (piVar11 = *(int **)(this + 0xac); *piVar11 != 0; piVar11 = (int *)*piVar11) {
      pCVar6 = CRelationLnk::GetSrc((CRelationLnk *)(piVar11 + -4));
      *(CRelationLnk **)(pCVar6 + 0x14) = (CRelationLnk *)(piVar11 + -4);
      CListHead::AddTail((CListHead *)local_134,(CListNode *)(pCVar6 + -0x18));
    }
    iVar9 = 0;
    iVar10 = FUN_360cb720((int)(this + 0x2ac));
    pCVar12 = local_134[0];
    if (0 < iVar10) {
      do {
        iVar10 = *(int *)(*(int *)(*(int *)(this + 0x2b0) + iVar9 * 4) + 0x1ac);
        iVar7 = CListNode::IsLinked((CListNode *)(iVar10 + 0x84));
        if ((iVar7 == 0) && (*(int *)(*(int *)(iVar10 + 0x8c) + 8) != 0)) {
          CListHead::AddTail((CListHead *)local_134,(CListNode *)(iVar10 + 0x84));
          *(undefined4 *)(iVar10 + 0xb0) = 0;
        }
        iVar9 = iVar9 + 1;
        iVar10 = FUN_360cb720((int)(this + 0x2ac));
        pCVar12 = local_134[0];
      } while (iVar9 < iVar10);
    }
LAB_3612af30:
    if (*(int *)pCVar12 != 0) {
      if ((~(((uint)(local_114 - *(float *)(pCVar12 + -0x28)) |
             (uint)(*(float *)(pCVar12 + -0x24) - local_128) |
             (uint)(local_11c - *(float *)(pCVar12 + -0x30)) |
             (uint)(*(float *)(pCVar12 + -0x20) - local_124) |
             (uint)(local_118 - *(float *)(pCVar12 + -0x2c)) |
             (uint)(*(float *)(pCVar12 + -0x1c) - local_120)) >> 0x1f) & 1) == 0) {
LAB_3612b032:
        pvVar3 = *(void **)(pCVar12 + 0x2c);
        if (pvVar3 == (void *)0x0) goto LAB_3612b097;
        FUN_36032430((int)pvVar3);
        operator_delete(pvVar3);
        *(int *)(pCVar12 + 0x2c) = 0;
        pCVar12 = *(CListNode **)pCVar12;
      }
      else {
        local_110 = (double)*(float *)(this + 0x3c);
        local_108 = (double)*(float *)(this + 0x40);
        local_100 = (double)*(float *)(this + 0x44);
        fVar13 = FUN_360e0680(*(int *)(pCVar12 + 8),&local_110,(double)fVar2);
        if (fVar13 < (float10)_DAT_3622376c) goto LAB_3612b032;
        if (*(int *)(this + 4) == 4) {
          pfVar8 = (float *)FUN_3612ef60(local_bc,(float *)(pCVar12 + -0x30));
          iVar10 = FUN_3612e8f0(local_f8,pfVar8);
          if ((iVar10 == 0) ||
             (fVar13 = FUN_360e06b0(*(int *)(pCVar12 + 8),local_80), fVar13 < (float10)_DAT_3622376c
             )) goto LAB_3612b032;
        }
        if (*(int *)(pCVar12 + 0x2c) == 0) {
          iVar10 = *(int *)(this + 4);
          if (((iVar10 != 4) && (iVar10 != 8)) && (iVar10 != 0xb)) {
            AddRelationPairTailTail((CRelationSrc *)(pCVar12 + 0x18),(CRelationDst *)(this + 0xac));
            pCVar12 = *(CListNode **)pCVar12;
            goto LAB_3612af30;
          }
          AddRelationPairHeadHead((CRelationSrc *)(pCVar12 + 0x18),(CRelationDst *)(this + 0xac));
        }
LAB_3612b097:
        pCVar12 = *(CListNode **)pCVar12;
      }
      goto LAB_3612af30;
    }
    while (pCVar12 = *(CListNode **)local_134[0], pCVar12 != (CListNode *)0x0) {
      *(undefined4 *)(local_134[0] + 0x2c) = 0;
      CListNode::Remove(local_134[0]);
      local_134[0] = pCVar12;
    }
    iVar10 = CListHead::IsEmpty((CListHead *)(this + 0xac));
    if (iVar10 != 0) {
      FindSectorsAroundEntity(this);
    }
  }
  return;
}

