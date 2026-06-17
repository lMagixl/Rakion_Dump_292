
void __fastcall FUN_360d1350(int *param_1)

{
  uint uVar1;
  CListNode *pCVar2;
  CRelationSrc *pCVar3;
  CRelationDst *pCVar4;
  CBrushMip *this;
  int iVar5;
  int iVar6;
  CListNode *this_00;
  int iVar7;
  CMovableEntity *pCVar8;
  int *piVar9;
  int *local_24;
  int *local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214b84;
  local_c = ExceptionList;
  if ((*param_1 == 0) && ((*(uint *)(param_1[1] + 0xc) & 0x40000000) == 0)) {
    ExceptionList = &local_c;
    for (piVar9 = *(int **)(param_1[1] + 0xac); *piVar9 != 0; piVar9 = (int *)*piVar9) {
      pCVar3 = CRelationLnk::GetSrc((CRelationLnk *)(piVar9 + -4));
      iVar5 = *(int *)(*(int *)(pCVar3 + -100) + 0x14);
      if ((((*(int *)(iVar5 + 0x674) == *(int *)(pCVar3 + -100) + 0x18) &&
           (*(int *)(iVar5 + 0x66c) == 0)) &&
          (uVar1 = *(uint *)(*(int *)(iVar5 + 0x668) + 0xc), (param_1[4] & uVar1) != 0)) &&
         ((param_1[5] & uVar1) != 0)) {
        CListHead::AddTail((CListHead *)(param_1 + 8),(CListNode *)(pCVar3 + -0x18));
      }
    }
    local_24 = (int *)param_1[8];
    while (*local_24 != 0) {
      if (DAT_362a60c0 != 0) {
        local_20 = (int *)local_24[6];
        while (*local_20 != 0) {
          pCVar4 = CRelationLnk::GetDst((CRelationLnk *)(local_20 + -2));
          iVar5 = *(int *)(pCVar4 + -0xa8);
          pCVar8 = (CMovableEntity *)(pCVar4 + -0xac);
          if (((iVar5 != 4) && (iVar5 != 8)) && (iVar5 != 0xb)) break;
          if (((param_1[4] & *(uint *)(pCVar4 + -0xa0)) == 0) ||
             ((param_1[5] & *(uint *)(pCVar4 + -0xa0)) == 0)) {
LAB_360d1597:
            local_20 = (int *)*local_20;
          }
          else {
            if (iVar5 != 0xb) {
              this = CBrush3D::GetFirstMip(*(CBrush3D **)(pCVar4 + -0x30));
              if ((this != (CBrushMip *)0x0) &&
                 (((~(((uint)(*(float *)(this + 0x30) - (float)param_1[0x3d]) |
                       (uint)((float)param_1[0x40] - *(float *)(this + 0x24)) |
                       (uint)(*(float *)(this + 0x34) - (float)param_1[0x3e]) |
                       (uint)((float)param_1[0x41] - *(float *)(this + 0x28)) |
                       (uint)(*(float *)(this + 0x38) - (float)param_1[0x3f]) |
                      (uint)((float)param_1[0x42] - *(float *)(this + 0x2c))) >> 0x1f) & 1) != 0 ||
                  ((*(uint *)(pCVar4 + -0xa4) & 0x200) != 0)))) {
                iVar7 = 0;
                local_4 = 0;
                iVar5 = FUN_36043600((int)this);
                if (0 < iVar5) {
                  do {
                    iVar5 = FUN_36043710(this,iVar7);
                    iVar6 = CListNode::IsLinked((CListNode *)(iVar5 + 0x84));
                    if (iVar6 == 0) {
                      CListHead::AddTail((CListHead *)(param_1 + 8),(CListNode *)(iVar5 + 0x84));
                    }
                    iVar7 = iVar7 + 1;
                    iVar5 = FUN_36043600((int)this);
                  } while (iVar7 < iVar5);
                }
                local_4 = 0xffffffff;
              }
              goto LAB_360d1597;
            }
            param_1[0x43] = (int)pCVar8;
            param_1[3] = (int)pCVar8;
            FUN_360cd510(param_1,pCVar8,param_1 + 0x23,param_1 + 0x26,param_1 + 0x2f,param_1 + 0x32)
            ;
            FUN_360ce6b0((int)param_1);
            FUN_360d1100(param_1,(int)pCVar8);
            local_20 = (int *)*local_20;
          }
        }
      }
      pCVar8 = *(CMovableEntity **)(*(int *)(local_24[-0x13] + 0x14) + 0x668);
      param_1[0x43] = (int)pCVar8;
      param_1[3] = (int)pCVar8;
      FUN_360cd510(param_1,pCVar8,param_1 + 0x23,param_1 + 0x26,param_1 + 0x2f,param_1 + 0x32);
      FUN_360ce6b0((int)param_1);
      if (((byte)pCVar8[0x10] & 2) == 0) {
        FUN_360d0fe0(param_1,(int)(local_24 + -0x21));
        local_24 = (int *)*local_24;
      }
      else {
        FUN_360d11f0(param_1,(int)(local_24 + -0x21));
        local_24 = (int *)*local_24;
      }
    }
    this_00 = *(CListNode **)(param_1 + 8);
    while (pCVar2 = *(CListNode **)this_00, pCVar2 != (CListNode *)0x0) {
      CListNode::Remove(this_00);
      this_00 = pCVar2;
    }
  }
  ExceptionList = local_c;
  return;
}

