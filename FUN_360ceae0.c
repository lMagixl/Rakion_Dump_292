
void __fastcall FUN_360ceae0(int param_1)

{
  CListHead *this;
  float *this_00;
  CListNode *pCVar1;
  int iVar2;
  undefined4 *this_01;
  CRelationSrc *pCVar3;
  int iVar4;
  CRelationDst *pCVar5;
  CBrushMip *this_02;
  CListNode *this_03;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214ad0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_360cd680((float *)(param_1 + 0xf4),(float *)(*(int *)(param_1 + 4) + 0x1ec));
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar2 + 0x2b4) = 0;
    this_00 = (float *)(iVar2 + 0x1ec);
    this_01 = (undefined4 *)(iVar2 + 0x2ac);
    *this_00 = *(float *)(param_1 + 0xf4);
    *(undefined4 *)(iVar2 + 0x1f0) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(iVar2 + 500) = *(undefined4 *)(param_1 + 0xfc);
    *(undefined4 *)(iVar2 + 0x1f8) = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 *)(iVar2 + 0x1fc) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(iVar2 + 0x200) = *(undefined4 *)(param_1 + 0x108);
    FUN_360b1850(this_00,(float *)(*(int *)(param_1 + 4) + 0x1d4));
    for (piVar7 = *(int **)(*(int *)(param_1 + 4) + 0xac); *piVar7 != 0; piVar7 = (int *)*piVar7) {
      pCVar3 = CRelationLnk::GetSrc((CRelationLnk *)(piVar7 + -4));
      CListHead::AddTail((CListHead *)(param_1 + 0x20),(CListNode *)(pCVar3 + -0x18));
    }
    this = (CListHead *)(param_1 + 0x20);
    for (local_2c = *(int **)(param_1 + 0x20); *local_2c != 0; local_2c = (int *)*local_2c) {
      iVar6 = 0;
      local_4 = 0;
      if (0 < local_2c[-0x1b]) {
        do {
          iVar4 = local_2c[-0x1a];
          iVar8 = iVar6 * 0x1d0;
          iVar9 = iVar8 + iVar4;
          if ((~(((uint)(*(float *)(iVar8 + 0x1a0 + iVar4) - *this_00) |
                  (uint)(*(float *)(iVar2 + 0x1f8) - *(float *)(iVar8 + 0x194 + iVar4)) |
                  (uint)(*(float *)(iVar9 + 0x1a4) - *(float *)(iVar2 + 0x1f0)) |
                  (uint)(*(float *)(iVar2 + 0x1fc) - *(float *)(iVar9 + 0x198)) |
                  (uint)(*(float *)(iVar9 + 0x1a8) - *(float *)(iVar2 + 500)) |
                 (uint)(*(float *)(iVar2 + 0x200) - *(float *)(iVar9 + 0x19c))) >> 0x1f) & 1) != 0)
          {
            iVar8 = *(int *)(iVar2 + 0x2b4) + 1;
            *(int *)(iVar2 + 0x2b4) = iVar8;
            iVar4 = FUN_360a5b10(this_01);
            if (iVar4 < iVar8) {
              iVar4 = FUN_360a5b10(this_01);
              FUN_360cba90(this_01,iVar4 + *(int *)(iVar2 + 0x2b8));
            }
            *(int *)(*(int *)(iVar2 + 0x2b0) + -4 + *(int *)(iVar2 + 0x2b4) * 4) = iVar9;
            if ((*(uint *)(iVar9 + 200) & 0x800) != 0) {
              for (piVar7 = *(int **)(iVar9 + 0x1b0); *piVar7 != 0; piVar7 = (int *)*piVar7) {
                pCVar5 = CRelationLnk::GetDst((CRelationLnk *)(piVar7 + -2));
                iVar4 = CListNode::IsLinked((CListNode *)(pCVar5 + -0xc));
                if (iVar4 == 0) {
                  CListHead::AddTail(this,(CListNode *)(pCVar5 + -0xc));
                }
              }
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_2c[-0x1b]);
      }
      piVar7 = (int *)local_2c[6];
      local_4 = 0xffffffff;
      for (; *piVar7 != 0; piVar7 = (int *)*piVar7) {
        pCVar5 = CRelationLnk::GetDst((CRelationLnk *)(piVar7 + -2));
        iVar6 = *(int *)(pCVar5 + -0xa8);
        if (iVar6 != 0xb) {
          if ((iVar6 != 4) && (iVar6 != 8)) break;
          if (((*(uint *)(pCVar5 + -0xa4) & 0x200) == 0) &&
             ((((*(uint *)(param_1 + 0x10) & *(uint *)(pCVar5 + -0xa0)) != 0 &&
               ((*(uint *)(param_1 + 0x14) & *(uint *)(pCVar5 + -0xa0)) != 0)) &&
              (this_02 = CBrush3D::GetFirstMip(*(CBrush3D **)(pCVar5 + -0x30)),
              this_02 != (CBrushMip *)0x0)))) {
            iVar4 = 0;
            local_4 = 1;
            iVar6 = FUN_36043600((int)this_02);
            if (0 < iVar6) {
              do {
                iVar6 = FUN_36043710(this_02,iVar4);
                iVar8 = CListNode::IsLinked((CListNode *)(iVar6 + 0x84));
                if (iVar8 == 0) {
                  CListHead::AddTail(this,(CListNode *)(iVar6 + 0x84));
                }
                iVar4 = iVar4 + 1;
                iVar6 = FUN_36043600((int)this_02);
              } while (iVar4 < iVar6);
            }
            local_4 = 0xffffffff;
          }
        }
      }
    }
    this_03 = *(CListNode **)this;
    while (pCVar1 = *(CListNode **)this_03, pCVar1 != (CListNode *)0x0) {
      CListNode::Remove(this_03);
      this_03 = pCVar1;
    }
  }
  ExceptionList = local_c;
  return;
}

