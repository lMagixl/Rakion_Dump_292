
/* public: void __thiscall CSkeleton::CalculateAbsoluteTransformations(long) */

void __thiscall CSkeleton::CalculateAbsoluteTransformations(CSkeleton *this,long param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int local_10;
  int local_c;
  
                    /* 0x170cd0  1120  ?CalculateAbsoluteTransformations@CSkeleton@@QAEXJ@Z */
  iVar1 = *(int *)(this + 0x18) + param_1 * 0x18;
  local_c = FUN_3600c550((undefined4 *)(iVar1 + 4));
  if (0 < local_c) {
    local_10 = 0;
    do {
      iVar3 = *(int *)(iVar1 + 8);
      if (-1 < *(int *)(iVar3 + 4 + local_10)) {
        pfVar2 = (float *)(iVar3 + 0xc + local_10);
        pfVar5 = pfVar2;
        iVar4 = FUN_361709a0();
        FUN_36162800(pfVar2,(float *)(iVar4 * 0x60 + 0xc + iVar3),pfVar5);
      }
      local_10 = local_10 + 0x60;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

