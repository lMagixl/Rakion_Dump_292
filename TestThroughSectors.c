
/* public: void __thiscall CCastRay::TestThroughSectors(void) */

void __thiscall CCastRay::TestThroughSectors(CCastRay *this)

{
  CBrushSector *pCVar1;
  CListNode *pCVar2;
  int iVar3;
  CRelationDst *pCVar4;
  int iVar5;
  CListNode *this_00;
  int *piVar6;
  CEntity *pCVar7;
  int local_1c;
  
                    /* 0xdde50  3822  ?TestThroughSectors@CCastRay@@QAEXXZ */
  local_1c = 0;
  iVar3 = FUN_360de560(0x362cc0c4);
  this_00 = DAT_362cc0d4;
  if (iVar3 < 1) {
LAB_360de022:
    while (pCVar2 = *(CListNode **)this_00, pCVar2 != (CListNode *)0x0) {
      CListNode::Remove(this_00);
      this_00 = pCVar2;
    }
    return;
  }
LAB_360dde71:
  pCVar1 = *(CBrushSector **)(DAT_362cc0c8 + local_1c * 4);
  TestBrushSector(this,pCVar1);
  piVar6 = *(int **)(pCVar1 + 0x9c);
LAB_360dde87:
  if (*piVar6 == 0) goto LAB_360ddfff;
  pCVar4 = CRelationLnk::GetDst((CRelationLnk *)(piVar6 + -2));
  pCVar7 = (CEntity *)(pCVar4 + -0xac);
  if ((pCVar7 != *(CEntity **)(this + 0x28)) && (pCVar7 != *(CEntity **)(this + 0xc))) {
    iVar3 = *(int *)(pCVar4 + -0xa8);
    if ((((iVar3 == 3) || ((iVar3 == 5 && (DAT_362fcb8c != 0)))) &&
        (iVar5 = *(int *)(this + 0x6c), iVar5 != 0)) &&
       (((iVar5 != 5 && (iVar5 != 2)) || (((byte)pCVar4[-0x9c] & 0x40) == 0)))) {
      TestModel(this,pCVar7);
      piVar6 = (int *)*piVar6;
      goto LAB_360dde87;
    }
    if (((iVar3 == 9) || ((iVar3 == 10 && (DAT_362fcb8c != 0)))) &&
       ((iVar5 = *(int *)(this + 0x6c), iVar5 != 0 &&
        (((iVar5 != 5 && (iVar5 != 2)) || (((byte)pCVar4[-0x9c] & 0x40) == 0)))))) {
      TestSkaModel(this,pCVar7);
      piVar6 = (int *)*piVar6;
      goto LAB_360dde87;
    }
    if (iVar3 == 0xb) {
      iVar3 = *(int *)(pCVar4 + -0x30);
      iVar5 = CListNode::IsLinked((CListNode *)(iVar3 + 0x18));
      if (iVar5 != 0) goto LAB_360ddff8;
      TestTerrain(this,pCVar7);
      CListHead::AddTail((CListHead *)&DAT_362cc0d4,(CListNode *)(iVar3 + 0x18));
      piVar6 = (int *)*piVar6;
      goto LAB_360dde87;
    }
    if (((iVar3 == 4) && ((*(uint *)(pCVar4 + -0x9c) & 0x200000) == 0)) && (DAT_362a60c4 != 0)) {
      DAT_362fcba4 = SQRT((*(float *)(pCVar4 + -0x70) - *(float *)(this + 0x2c)) *
                          (*(float *)(pCVar4 + -0x70) - *(float *)(this + 0x2c)) +
                          (*(float *)(pCVar4 + -0x6c) - *(float *)(this + 0x30)) *
                          (*(float *)(pCVar4 + -0x6c) - *(float *)(this + 0x30)) +
                          (*(float *)(pCVar4 + -0x68) - *(float *)(this + 0x34)) *
                          (*(float *)(pCVar4 + -0x68) - *(float *)(this + 0x34)));
      AddAllSectorsOfBrush(this,*(CBrush3D **)(pCVar4 + -0x30));
    }
  }
LAB_360ddff8:
  piVar6 = (int *)*piVar6;
  goto LAB_360dde87;
LAB_360ddfff:
  local_1c = local_1c + 1;
  iVar3 = FUN_360de560(0x362cc0c4);
  this_00 = DAT_362cc0d4;
  if (iVar3 <= local_1c) goto LAB_360de022;
  goto LAB_360dde71;
}

