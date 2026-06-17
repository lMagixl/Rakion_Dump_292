
/* public: void __thiscall CModelInstance::PauseAnimation(long) */

void __thiscall CModelInstance::PauseAnimation(CModelInstance *this,long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  
                    /* 0x15cfa0  2761  ?PauseAnimation@CModelInstance@@QAEXJ@Z */
  lVar4 = param_1;
  iVar5 = FUN_36035f40((int)(this + 0xbc));
  if (0 < iVar5) {
    iVar2 = *(int *)(this + 0xc0) + -0x18 + iVar5 * 0x18;
    iVar6 = FUN_36035f50(iVar2 + 8);
    iVar5 = 0;
    if (3 < iVar6) {
      iVar8 = 0;
      param_1 = (iVar6 - 4U >> 2) + 1;
      iVar5 = param_1 * 4;
      do {
        puVar7 = (uint *)(*(int *)(iVar2 + 0xc) + iVar8);
        if ((*(int *)(*(int *)(iVar2 + 0xc) + 0x10 + iVar8) == lVar4) &&
           (uVar3 = *puVar7, *puVar7 = (uint)(uVar3 == 0), (uVar3 == 0) != 0)) {
          puVar7[1] = *(uint *)(_pTimer + 0xc);
        }
        puVar7 = (uint *)(*(int *)(iVar2 + 0xc) + 0x20 + iVar8);
        if ((puVar7[4] == lVar4) &&
           (uVar3 = *puVar7, *puVar7 = (uint)(uVar3 == 0), (uVar3 == 0) != 0)) {
          puVar7[1] = *(uint *)(_pTimer + 0xc);
        }
        iVar1 = iVar8 + 0x60;
        puVar7 = (uint *)(*(int *)(iVar2 + 0xc) + -0x20 + iVar1);
        if ((*(int *)(*(int *)(iVar2 + 0xc) + -0x10 + iVar1) == lVar4) &&
           (uVar3 = *puVar7, *puVar7 = (uint)(uVar3 == 0), (uVar3 == 0) != 0)) {
          puVar7[1] = *(uint *)(_pTimer + 0xc);
        }
        puVar7 = (uint *)(*(int *)(iVar2 + 0xc) + iVar1);
        if ((*(int *)(*(int *)(iVar2 + 0xc) + 0x10 + iVar1) == lVar4) &&
           (uVar3 = *puVar7, *puVar7 = (uint)(uVar3 == 0), (uVar3 == 0) != 0)) {
          puVar7[1] = *(uint *)(_pTimer + 0xc);
        }
        iVar8 = iVar8 + 0x80;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    if (iVar5 < iVar6) {
      iVar8 = iVar5 << 5;
      iVar6 = iVar6 - iVar5;
      do {
        puVar7 = (uint *)(*(int *)(iVar2 + 0xc) + iVar8);
        if ((*(int *)(*(int *)(iVar2 + 0xc) + 0x10 + iVar8) == lVar4) &&
           (uVar3 = *puVar7, *puVar7 = (uint)(uVar3 == 0), (uVar3 == 0) != 0)) {
          puVar7[1] = *(uint *)(_pTimer + 0xc);
        }
        iVar8 = iVar8 + 0x20;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

