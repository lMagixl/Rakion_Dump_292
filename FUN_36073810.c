
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_36073810(uint param_1)

{
  int *piVar1;
  CGfxLibrary *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int local_8;
  
  piVar1 = *(int **)(_pGfx + 0xa5c);
  iVar3 = FUN_36074bd0(0x362c3ce4);
  if (param_1 == 0) {
    (**(code **)(*piVar1 + 0x130))(piVar1,0x142);
    (*DAT_362c46dc)(0);
    iVar10 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(*piVar1 + 0x138))(piVar1,*(undefined4 *)(DAT_362c3ce8 + iVar10 * 8));
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar3);
    }
    FUN_360868e0();
    DAT_362c3cec = 0;
    DAT_362c3ca8 = 0;
    _DAT_362c3cac = 0;
    DAT_362c3cb0 = 0;
    return 0;
  }
  iVar10 = 0;
  if (0 < iVar3) {
    puVar6 = (uint *)(DAT_362c3ce8 + 4);
    do {
      if (*puVar6 == param_1) {
        return *(undefined4 *)(DAT_362c3ce8 + iVar10 * 8);
      }
      iVar10 = iVar10 + 1;
      puVar6 = puVar6 + 2;
    } while (iVar10 < iVar3);
  }
  _DAT_362a3e84 = (param_1 & 0x1000) << 5 | 0x40010007;
  iVar3 = 0;
  iVar10 = 0;
  local_8 = 0;
  if (DAT_362a3e70 != -1) {
    puVar9 = &DAT_362a3e70;
    piVar8 = &DAT_362a3f00;
    uVar7 = param_1 & 0xffffefff;
    do {
      iVar4 = *piVar8 + 1;
      if ((uVar7 & 1) != 0) {
        if (0 < iVar4) {
          puVar11 = &DAT_362c3c50 + iVar3;
          for (iVar5 = iVar4; iVar3 = local_8, iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
        }
        iVar3 = iVar3 + iVar4;
        local_8 = iVar3;
      }
      iVar10 = iVar10 + iVar4;
      puVar9 = &DAT_362a3e70 + iVar10;
      uVar7 = uVar7 >> 1;
      piVar8 = piVar8 + 1;
    } while ((&DAT_362a3e70)[iVar10] != -1);
  }
  pCVar2 = _pGfx;
  (&DAT_362c3c50)[iVar3] = 0xffffffff;
  uVar7 = *(uint *)(pCVar2 + 0xa54);
  iVar10 = DAT_362c3cec + 1;
  DAT_362c3cec = iVar10;
  iVar3 = FUN_36074c00((undefined4 *)&DAT_362c3ce4);
  if (iVar3 < iVar10) {
    iVar3 = FUN_36074c00((undefined4 *)&DAT_362c3ce4);
    FUN_36074e40(&DAT_362c3ce4,iVar3 + _DAT_362c3cf0);
  }
  puVar9 = (undefined4 *)(DAT_362c3ce8 + -8 + DAT_362c3cec * 8);
  puVar9[1] = param_1 & 0xffffefff;
  (**(code **)(*piVar1 + 300))(piVar1,&DAT_362c3c50,0,puVar9,~(uVar7 >> 7) & 0x10);
  *(undefined4 *)(_pGfx + 0xabc) = 0;
  return *puVar9;
}

