
/* public: void __thiscall CModelData::IndicesToPtrs(void) */

void __thiscall CModelData::IndicesToPtrs(CModelData *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  CModelData *pCVar6;
  int local_c;
  int local_8;
  
                    /* 0xb6b60  2281  ?IndicesToPtrs@CModelData@@QAEXXZ */
  local_c = 0;
  pCVar6 = this;
  if (0 < *(int *)(this + 0x54)) {
    do {
      iVar5 = 0;
      local_8 = 0;
      if (0 < *(int *)(pCVar6 + 0xe8)) {
        do {
          piVar3 = (int *)(*(int *)(pCVar6 + 0xec) + iVar5);
          iVar4 = 0;
          if (0 < *(int *)(*(int *)(pCVar6 + 0xec) + iVar5)) {
            do {
              *(int *)(piVar3[1] + iVar4 * 8) =
                   *(int *)(piVar3[1] + iVar4 * 8) * 0x38 + *(int *)(this + 0x48);
              iVar1 = iVar4 * 8;
              iVar2 = iVar4 * 8;
              iVar4 = iVar4 + 1;
              *(int *)(piVar3[1] + 4 + iVar2) =
                   *(int *)(piVar3[1] + 4 + iVar1) * 0x34 + *(int *)(pCVar6 + 0xf4);
            } while (iVar4 < *piVar3);
          }
          local_8 = local_8 + 1;
          iVar5 = iVar5 + 0x1c;
        } while (local_8 < *(int *)(pCVar6 + 0xe8));
      }
      local_c = local_c + 1;
      pCVar6 = pCVar6 + 0x60;
    } while (local_c < *(int *)(this + 0x54));
  }
  return;
}

