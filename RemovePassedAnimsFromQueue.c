
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CModelInstance::RemovePassedAnimsFromQueue(void) */

void __thiscall CModelInstance::RemovePassedAnimsFromQueue(CModelInstance *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  int local_20;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x15e850  3138  ?RemovePassedAnimsFromQueue@CModelInstance@@QAEXXZ */
  iVar2 = FUN_36035f40((int)(this + 0xbc));
  iVar4 = iVar2 + -1;
  if (-1 < iVar4) {
    iVar6 = iVar4 * 0x18;
    while (fVar9 = CalculateFadeFactor((AnimList *)(*(int *)(this + 0xc0) + iVar6)),
          fVar9 < _DAT_36223384) {
      iVar4 = iVar4 + -1;
      iVar6 = iVar6 + -0x18;
      if (iVar4 < 0) {
        return;
      }
    }
    if (0 < iVar4) {
      if (iVar4 < iVar2) {
        iVar6 = iVar4 * 0x18;
        iVar7 = 0;
        local_14 = iVar2 - iVar4;
        do {
          iVar1 = *(int *)(this + 0xc0);
          *(undefined4 *)(iVar7 + iVar1) = *(undefined4 *)(iVar6 + iVar1);
          *(undefined4 *)(iVar7 + 4 + iVar1) = *(undefined4 *)(iVar6 + 4 + iVar1);
          FUN_36036a90((void *)(iVar7 + 8 + iVar1),(undefined4 *)(iVar6 + 8 + iVar1));
          *(undefined4 *)(*(int *)(this + 0xc0) + 0x10 + iVar6) = 0;
          iVar6 = iVar6 + 0x18;
          iVar7 = iVar7 + 0x18;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      *(int *)(this + 0xc4) = iVar2 - iVar4;
      local_c = FUN_36035f40((int)(this + 0xbc));
      if (0 < local_c) {
        local_14 = 0;
        do {
          iVar4 = *(int *)(this + 0xc0) + local_14;
          local_20 = FUN_36035f50(iVar4 + 8);
          local_10 = 0;
          if (0 < local_20) {
            iVar2 = 0;
            do {
              iVar6 = *(int *)(iVar4 + 0xc) + iVar2;
              if (((*(uint *)(*(int *)(iVar4 + 0xc) + 0x14 + iVar2) & 0x100) != 0) &&
                 (iVar7 = FindAnimationByID(this,*(int *)(iVar6 + 0x10),&local_8,&local_4),
                 iVar7 != 0)) {
                iVar7 = FUN_36035fb0(this + 0x34,local_8);
                iVar7 = local_4 * 0x2c + *(int *)(iVar7 + 0x18);
                fVar9 = *(float *)(iVar6 + 0x18) -
                        ((CTimer::TickQuantum * *(float *)(_pTimer + 0x10) +
                         *(float *)(_pTimer + 0xc)) -
                        ((float)*(int *)(iVar7 + 4) * *(float *)(iVar7 + 8) *
                         *(float *)(iVar6 + 0xc) + *(float *)(iVar6 + 8))) / *(float *)(iVar4 + 4);
                if ((fVar9 < _DAT_3622376c) ||
                   ((fVar9 < _DAT_36223384 != (fVar9 == _DAT_36223384) && (fVar9 == _DAT_3622376c)))
                   ) {
                  iVar6 = (local_20 - local_10) + -1;
                  if (0 < iVar6) {
                    puVar8 = (undefined4 *)(*(int *)(iVar4 + 0xc) + iVar2);
                    puVar5 = puVar8 + 8;
                    for (uVar3 = (uint)(iVar6 * 0x20) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                      *puVar8 = *puVar5;
                      puVar5 = puVar5 + 1;
                      puVar8 = puVar8 + 1;
                    }
                    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
                      puVar5 = (undefined4 *)((int)puVar5 + 1);
                      puVar8 = (undefined4 *)((int)puVar8 + 1);
                    }
                  }
                  local_20 = local_20 + -1;
                  local_10 = local_10 + -1;
                  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + -1;
                  iVar2 = iVar2 + -0x20;
                }
              }
              local_10 = local_10 + 1;
              iVar2 = iVar2 + 0x20;
            } while (local_10 < local_20);
          }
          local_14 = local_14 + 0x18;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
    }
  }
  return;
}

