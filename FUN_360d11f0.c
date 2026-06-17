
void __thiscall FUN_360d11f0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  CRelationDst *pCVar3;
  int iVar4;
  int *piVar5;
  int local_8;
  
  iVar1 = *(int *)((int)this + 4);
  iVar4 = iVar1 + 0x2ac;
  local_8 = 0;
  iVar2 = FUN_360cb720(iVar4);
  if (0 < iVar2) {
    do {
      piVar5 = *(int **)(*(int *)(iVar1 + 0x2b0) + local_8 * 4);
      if ((piVar5[0x6b] == param_1) &&
         ((~(((uint)(*(float *)((int)this + 0x108) - (float)piVar5[0x67]) |
             (uint)((float)piVar5[0x68] - *(float *)((int)this + 0xf4)) |
             (uint)(*(float *)((int)this + 0x100) - (float)piVar5[0x65]) |
             (uint)((float)piVar5[0x69] - *(float *)((int)this + 0xf8)) |
             (uint)(*(float *)((int)this + 0x104) - (float)piVar5[0x66]) |
             (uint)((float)piVar5[0x6a] - *(float *)((int)this + 0xfc))) >> 0x1f) & 1) != 0)) {
        if ((piVar5[0x32] & 0x800U) == 0) {
          FUN_360d0bb0(this,piVar5);
        }
        else {
          for (piVar5 = (int *)piVar5[0x6c]; *piVar5 != 0; piVar5 = (int *)*piVar5) {
            pCVar3 = CRelationLnk::GetDst((CRelationLnk *)(piVar5 + -2));
            if (*(int *)(*(int *)(*(int *)(pCVar3 + -0x58) + 0x14) + 0x674) ==
                *(int *)(pCVar3 + -0x58) + 0x18) {
              iVar2 = CListNode::IsLinked((CListNode *)(pCVar3 + -0xc));
              if (iVar2 == 0) {
                CListHead::AddTail((CListHead *)((int)this + 0x20),(CListNode *)(pCVar3 + -0xc));
              }
            }
          }
        }
      }
      local_8 = local_8 + 1;
      iVar2 = FUN_360cb720(iVar4);
    } while (local_8 < iVar2);
  }
  return;
}

