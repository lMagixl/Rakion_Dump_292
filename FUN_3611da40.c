
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3611da40(void *this,int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  CListNode *this_00;
  CRelationSrc *pCVar3;
  int iVar4;
  CRelationDst *pCVar5;
  int *piVar6;
  float10 fVar7;
  int local_44;
  CListNode *local_3c [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_3621867b;
  local_14 = ExceptionList;
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  ExceptionList = &local_14;
  *(double *)((int)this + 0x698) = (double)*param_2;
  *(double *)((int)this + 0x6a0) = (double)fVar2;
  *(double *)((int)this + 0x6a8) = (double)fVar1;
  fVar1 = *(float *)(*(int *)((int)this + 0x694) + 0x4c) * _DAT_362350bc + _DAT_36223384;
  *(double *)((int)this + 0x6b0) = (double)fVar1;
  local_30 = CONCAT44(param_2[1] - fVar1,*param_2 - fVar1);
  local_28 = CONCAT44(fVar1 + *param_2,param_2[2] - fVar1);
  local_20 = CONCAT44(fVar1 + param_2[2],fVar1 + param_2[1]);
  CListHead::Clear((CListHead *)local_3c);
  for (piVar6 = *(int **)(param_1 + 0xac); *piVar6 != 0; piVar6 = (int *)*piVar6) {
    pCVar3 = CRelationLnk::GetSrc((CRelationLnk *)(piVar6 + -4));
    iVar4 = CListNode::IsLinked((CListNode *)(pCVar3 + -0x18));
    if (iVar4 == 0) {
      CListHead::AddTail((CListHead *)local_3c,(CListNode *)(pCVar3 + -0x18));
    }
  }
  iVar4 = CListHead::IsEmpty((CListHead *)local_3c);
  this_00 = local_3c[0];
  while (iVar4 == 0) {
    local_3c[0] = this_00;
    CListNode::Remove(this_00);
    FUN_3611d130(this,(int)(this_00 + -0x84));
    iVar4 = CListNode::IsLinked(this_00);
    if (iVar4 != 0) {
      local_44 = 0;
      local_c = 0;
      if (0 < *(int *)(this_00 + -0x6c)) {
        do {
          iVar4 = local_44 * 0x1d0 + *(int *)(this_00 + -0x68);
          if ((*(uint *)(local_44 * 0x1d0 + 200 + *(int *)(this_00 + -0x68)) & 0x400000) != 0) {
            if ((~(((uint)(*(float *)(iVar4 + 0x1a0) - (float)local_30) |
                    (uint)(local_28._4_4_ - *(float *)(iVar4 + 0x194)) |
                    (uint)(*(float *)(iVar4 + 0x1a4) - local_30._4_4_) |
                    (uint)((float)local_20 - *(float *)(iVar4 + 0x198)) |
                    (uint)(*(float *)(iVar4 + 0x1a8) - (float)local_28) |
                   (uint)(local_20._4_4_ - *(float *)(iVar4 + 0x19c))) >> 0x1f) & 1) != 0) {
              for (piVar6 = *(int **)(iVar4 + 0x1b0); *piVar6 != 0; piVar6 = (int *)*piVar6) {
                pCVar5 = CRelationLnk::GetDst((CRelationLnk *)(piVar6 + -2));
                iVar4 = CListNode::IsLinked((CListNode *)(pCVar5 + -0xc));
                if (iVar4 == 0) {
                  if (((~(((uint)(local_20._4_4_ - *(float *)(pCVar5 + -0x34)) |
                          (uint)(*(float *)(pCVar5 + -0x30) - (float)local_30) |
                          (uint)(local_28._4_4_ - *(float *)(pCVar5 + -0x3c)) |
                          (uint)(*(float *)(pCVar5 + -0x2c) - local_30._4_4_) |
                          (uint)((float)local_20 - *(float *)(pCVar5 + -0x38)) |
                          (uint)(*(float *)(pCVar5 + -0x28) - (float)local_28)) >> 0x1f) & 1) != 0)
                     && (fVar7 = FUN_360e0680(*(int *)(pCVar5 + -4),(double *)((int)this + 0x698),
                                              *(double *)((int)this + 0x6b0)),
                        (float10)_DAT_3622376c <= fVar7)) {
                    CListHead::AddTail((CListHead *)local_3c,(CListNode *)(pCVar5 + -0xc));
                  }
                }
              }
            }
          }
          local_44 = local_44 + 1;
        } while (local_44 < *(int *)(this_00 + -0x6c));
      }
      local_c = 0xffffffff;
    }
    iVar4 = CListHead::IsEmpty((CListHead *)local_3c);
    this_00 = local_3c[0];
  }
  ExceptionList = local_14;
  return;
}

