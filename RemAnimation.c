
/* public: void __thiscall CModelInstance::RemAnimation(long) */

void __thiscall CModelInstance::RemAnimation(CModelInstance *this,long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x15d160  3100  ?RemAnimation@CModelInstance@@QAEXJ@Z */
  iVar1 = FUN_36035f40((int)(this + 0xbc));
  if (0 < iVar1) {
    iVar1 = *(int *)(this + 0xc0) + -0x18 + iVar1 * 0x18;
    iVar2 = FUN_36035f50(iVar1 + 8);
    iVar3 = 0;
    if (0 < iVar2) {
      iVar6 = iVar2 + -1;
      local_4 = 0;
      local_c = iVar2;
      local_8 = iVar6;
      do {
        if (*(int *)(*(int *)(iVar1 + 0xc) + 0x10 + local_4) == param_1) {
          if (iVar3 < iVar6) {
            iVar5 = iVar6 - iVar3;
            iVar4 = local_4;
            do {
              puVar8 = (undefined4 *)(*(int *)(iVar1 + 0xc) + iVar4);
              iVar4 = iVar4 + 0x20;
              iVar5 = iVar5 + -1;
              puVar7 = puVar8 + 8;
              for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar2 = local_c;
              iVar6 = local_8;
            } while (iVar5 != 0);
          }
          iVar2 = iVar2 + -1;
          iVar6 = iVar6 + -1;
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
          local_c = iVar2;
          local_8 = iVar6;
        }
        iVar3 = iVar3 + 1;
        local_4 = local_4 + 0x20;
      } while (iVar3 < iVar2);
    }
  }
  return;
}

