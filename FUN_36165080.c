
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36165080(void)

{
  CModelInstance *this;
  float fVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *unaff_EBX;
  int iVar6;
  int iVar7;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  this = (CModelInstance *)*unaff_EBX;
  if (this != (CModelInstance *)0x0) {
    local_10 = FUN_36035f40((int)(this + 0xbc));
    iVar4 = local_10 + -1;
    iVar6 = 0;
    if (-1 < iVar4) {
      pfVar5 = (float *)(*(int *)(this + 0xc0) + iVar4 * 0x18);
      do {
        iVar6 = iVar4;
        if ((pfVar5[1] == _DAT_3622376c) ||
           ((fVar1 = ((CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(_pTimer + 0xc))
                     - *pfVar5) / pfVar5[1], _DAT_3622376c <= fVar1 &&
            ((fVar1 < _DAT_36223384 == (fVar1 == _DAT_36223384) || (_DAT_36223384 <= fVar1))))))
        break;
        iVar4 = iVar4 + -1;
        pfVar5 = pfVar5 + -6;
        iVar6 = 0;
      } while (-1 < iVar4);
    }
    if (iVar6 < local_10) {
      iVar4 = iVar6 * 0x18;
      local_10 = local_10 - iVar6;
      do {
        iVar6 = *(int *)(this + 0xc0) + iVar4;
        local_4 = iVar6;
        local_14 = FUN_36035f50(iVar6 + 8);
        if (0 < local_14) {
          local_20 = 0;
          do {
            iVar2 = CModelInstance::FindAnimationByID
                              (this,*(int *)(*(int *)(iVar6 + 0xc) + local_20 + 0x10),&local_c,
                               &local_8);
            if (iVar2 != 0) {
              iVar2 = FUN_36035fb0(this + 0x34,local_c);
              iVar2 = local_8 * 0x2c + *(int *)(iVar2 + 0x18);
              local_18 = FUN_3600cac0((undefined4 *)(iVar2 + 0x20));
              if (0 < local_18) {
                iVar7 = 0;
                do {
                  lVar3 = CSkeleton::FindBoneInLOD
                                    (*(CSkeleton **)*unaff_EBX,
                                     *(long *)(*(int *)(iVar2 + 0x24) + iVar7),unaff_EBX[0x1b]);
                  if ((lVar3 != -1) && (unaff_EBX[0x1c] + lVar3 != -1)) {
                    FUN_36164b00();
                  }
                  iVar7 = iVar7 + 0x2c;
                  local_18 = local_18 + -1;
                  iVar6 = local_4;
                } while (local_18 != 0);
              }
            }
            local_20 = local_20 + 0x20;
            local_14 = local_14 + -1;
          } while (local_14 != 0);
        }
        iVar4 = iVar4 + 0x18;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  return;
}

