
/* public: void __thiscall CModelData::PtrsToIndices(void) */

void __thiscall CModelData::PtrsToIndices(CModelData *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CModelData *pCVar4;
  int iVar5;
  int *piVar6;
  int local_14;
  int local_c;
  int local_8;
  
                    /* 0xb6a40  2875  ?PtrsToIndices@CModelData@@QAEXXZ */
  local_c = 0;
  pCVar4 = this;
  if (0 < *(int *)(this + 0x54)) {
    do {
      local_8 = 0;
      if (0 < *(int *)(pCVar4 + 0xe8)) {
        local_14 = 0;
        do {
          piVar6 = (int *)(*(int *)(pCVar4 + 0xec) + local_14);
          iVar3 = 0;
          if (0 < *(int *)(*(int *)(pCVar4 + 0xec) + local_14)) {
            do {
              iVar5 = 0;
              iVar1 = FUN_360bb0e0((undefined4 *)(this + 0x44));
              if (0 < iVar1) {
                iVar2 = *(int *)(this + 0x48);
                do {
                  if (*(int *)(piVar6[1] + iVar3 * 8) == iVar2) break;
                  iVar5 = iVar5 + 1;
                  iVar2 = iVar2 + 0x38;
                } while (iVar5 < iVar1);
              }
              *(int *)(piVar6[1] + iVar3 * 8) = iVar5;
              iVar5 = 0;
              iVar1 = FUN_3600c040((undefined4 *)(pCVar4 + 0xf0));
              if (0 < iVar1) {
                iVar2 = *(int *)(pCVar4 + 0xf4);
                do {
                  if (*(int *)(piVar6[1] + 4 + iVar3 * 8) == iVar2) break;
                  iVar5 = iVar5 + 1;
                  iVar2 = iVar2 + 0x34;
                } while (iVar5 < iVar1);
              }
              *(int *)(piVar6[1] + 4 + iVar3 * 8) = iVar5;
              iVar3 = iVar3 + 1;
            } while (iVar3 < *piVar6);
          }
          local_8 = local_8 + 1;
          local_14 = local_14 + 0x1c;
        } while (local_8 < *(int *)(pCVar4 + 0xe8));
      }
      local_c = local_c + 1;
      pCVar4 = pCVar4 + 0x60;
    } while (local_c < *(int *)(this + 0x54));
  }
  return;
}

