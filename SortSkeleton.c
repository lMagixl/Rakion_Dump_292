
/* public: void __thiscall CSkeleton::SortSkeleton(void) */

void __thiscall CSkeleton::SortSkeleton(CSkeleton *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x170dd0  3644  ?SortSkeleton@CSkeleton@@QAEXXZ */
  iVar1 = FUN_3600c5c0((undefined4 *)(this + 0x14));
  iVar4 = 0;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_3600c550((undefined4 *)(*(int *)(this + 0x18) + 4 + iVar3));
      FUN_36014500(&DAT_36300774,iVar2);
      SortSkeletonRecursive(this,-1,iVar4);
      FUN_360165e0((void *)(*(int *)(this + 0x18) + 4 + iVar3),&DAT_36300774);
      if (DAT_36300774 != 0) {
        operator_delete__(DAT_36300778);
        DAT_36300774 = 0;
        DAT_36300778 = (void *)0x0;
      }
      CalculateAbsoluteTransformations(this,iVar4);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar4 < iVar1);
  }
  return;
}

