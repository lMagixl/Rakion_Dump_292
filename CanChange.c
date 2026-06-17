
/* public: int __thiscall CClipTest::CanChange(class CEntity *,long) */

int __thiscall CClipTest::CanChange(CClipTest *this,CEntity *param_1,long param_2)

{
  CCollisionInfo *this_00;
  CClipTest *this_01;
  CRelationSrc *pCVar1;
  CRelationDst *pCVar2;
  CBrushMip *this_02;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  CBrushPolygon *pCVar7;
  int *piVar8;
  int local_4c;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x130de0  1142  ?CanChange@CClipTest@@QAEHPAVCEntity@@J@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218e55;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x84) == 0) {
    return 0;
  }
  this_00 = (CCollisionInfo *)(this + 0xc);
  ExceptionList = &local_c;
  *(CEntity **)this = param_1;
  *(long *)(this + 8) = param_2;
  *(undefined4 *)(this + 4) = 0;
  CCollisionInfo::FromModel(this_00,param_1,param_2);
  ProjectSpheresToPlacement
            (this,this_00,(Vector<float,3> *)(param_1 + 0x3c),(Matrix<float,3,3> *)(param_1 + 0x54))
  ;
  iVar3 = *(int *)this;
  local_3c = 3e+38;
  local_30 = 0xff61b1e6;
  local_38 = 0x7f61b1e6;
  local_2c = 0xff61b1e6;
  local_34 = 0x7f61b1e6;
  local_28 = 0xff61b1e6;
  local_24[0] = 3e+38;
  local_24[3] = -3e+38;
  local_24[1] = 3e+38;
  local_24[4] = -3e+38;
  local_24[2] = 3e+38;
  local_24[5] = -3e+38;
  CCollisionInfo::MakeBoxAtPlacement
            (*(CCollisionInfo **)(iVar3 + 0x84),(Vector<float,3> *)(iVar3 + 0x3c),
             (Matrix<float,3,3> *)(iVar3 + 0x54),(AABBox<float,3> *)&local_3c);
  CCollisionInfo::MakeBoxAtPlacement
            (this_00,(Vector<float,3> *)(*(int *)this + 0x3c),
             (Matrix<float,3,3> *)(*(int *)this + 0x54),(AABBox<float,3> *)local_24);
  this_01 = this + 0x40;
  *(float *)this_01 = local_3c;
  *(undefined4 *)(this + 0x44) = local_38;
  *(undefined4 *)(this + 0x48) = local_34;
  *(undefined4 *)(this + 0x4c) = local_30;
  *(undefined4 *)(this + 0x50) = local_2c;
  *(undefined4 *)(this + 0x54) = local_28;
  FUN_360b1850(this_01,local_24);
  for (piVar6 = *(int **)(*(int *)this + 0xac); *piVar6 != 0; piVar6 = (int *)*piVar6) {
    pCVar1 = CRelationLnk::GetSrc((CRelationLnk *)(piVar6 + -4));
    CListHead::AddTail((CListHead *)(this + 0x58),(CListNode *)(pCVar1 + -0x18));
  }
  piVar6 = *(int **)(this + 0x58);
  do {
    if (*piVar6 == 0) {
      ExceptionList = local_c;
      return 1;
    }
    for (piVar8 = (int *)piVar6[6]; *piVar8 != 0; piVar8 = (int *)*piVar8) {
      pCVar2 = CRelationLnk::GetDst((CRelationLnk *)(piVar8 + -2));
      if ((*(int *)(pCVar2 + -0xa8) != 4) && (*(int *)(pCVar2 + -0xa8) != 8)) break;
      this_02 = CBrush3D::GetFirstMip(*(CBrush3D **)(pCVar2 + -0x30));
      if (this_02 != (CBrushMip *)0x0) {
        iVar5 = 0;
        local_4 = 0;
        iVar3 = FUN_36043600((int)this_02);
        if (0 < iVar3) {
          do {
            iVar3 = FUN_36043710(this_02,iVar5);
            iVar4 = CListNode::IsLinked((CListNode *)(iVar3 + 0x84));
            if (iVar4 == 0) {
              CListHead::AddTail((CListHead *)(this + 0x58),(CListNode *)(iVar3 + 0x84));
            }
            iVar5 = iVar5 + 1;
            iVar3 = FUN_36043600((int)this_02);
          } while (iVar5 < iVar3);
        }
        local_4 = 0xffffffff;
      }
    }
    iVar3 = *(int *)(*(int *)(piVar6[-0x13] + 0x14) + 0x668);
    if ((*(int *)(iVar3 + 0xc) != 0) && (*(int *)(iVar3 + 4) == 4)) {
      local_4c = 0;
      local_4 = 1;
      if (0 < piVar6[-0x1b]) {
        do {
          iVar3 = piVar6[-0x1a];
          iVar5 = local_4c * 0x1d0;
          pCVar7 = (CBrushPolygon *)(iVar5 + iVar3);
          if ((~(((uint)(*(float *)(iVar5 + 0x1a0 + iVar3) - *(float *)this_01) |
                  (uint)(*(float *)(this + 0x4c) - *(float *)(iVar5 + 0x194 + iVar3)) |
                  (uint)(*(float *)(pCVar7 + 0x1a4) - *(float *)(this + 0x44)) |
                  (uint)(*(float *)(this + 0x50) - *(float *)(pCVar7 + 0x198)) |
                  (uint)(*(float *)(pCVar7 + 0x1a8) - *(float *)(this + 0x48)) |
                 (uint)(*(float *)(this + 0x54) - *(float *)(pCVar7 + 0x19c))) >> 0x1f) & 1) != 0) {
            if ((*(uint *)(pCVar7 + 200) & 0x800) == 0) {
              iVar3 = EntityTouchesBrushPolygon(this,pCVar7);
              if (iVar3 != 0) {
                *(undefined4 *)(this + 4) =
                     *(undefined4 *)
                      (*(int *)(*(int *)(*(int *)(pCVar7 + 0x1ac) + 0x38) + 0x14) + 0x668);
                ExceptionList = local_c;
                return 0;
              }
            }
            else {
              for (piVar8 = *(int **)(pCVar7 + 0x1b0); *piVar8 != 0; piVar8 = (int *)*piVar8) {
                pCVar2 = CRelationLnk::GetDst((CRelationLnk *)(piVar8 + -2));
                iVar3 = CListNode::IsLinked((CListNode *)(pCVar2 + -0xc));
                if (iVar3 == 0) {
                  CListHead::AddTail((CListHead *)(this + 0x58),(CListNode *)(pCVar2 + -0xc));
                }
              }
            }
          }
          local_4c = local_4c + 1;
        } while (local_4c < piVar6[-0x1b]);
      }
      local_4 = 0xffffffff;
    }
    piVar6 = (int *)*piVar6;
  } while( true );
}

