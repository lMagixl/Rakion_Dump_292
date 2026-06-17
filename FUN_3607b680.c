
void __cdecl FUN_3607b680(int *param_1,int *param_2)

{
  CTexParams *pCVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 unaff_EDI;
  undefined4 uVar14;
  undefined4 local_c [3];
  
  piVar7 = param_2;
  piVar6 = param_1;
  iVar13 = *param_1;
  iVar10 = iVar13 / 100;
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else if (2 < iVar10) {
    iVar10 = 2;
  }
  iVar12 = iVar13 % 10;
  iVar13 = (iVar13 / 10) % 10;
  if (iVar13 < 1) {
    iVar13 = 1;
  }
  else if (2 < iVar13) {
    iVar13 = 2;
  }
  if (iVar12 < 0) {
    iVar12 = 0;
  }
  else if (2 < iVar12) {
    iVar12 = 2;
  }
  *param_1 = iVar12 + (iVar13 + iVar10 * 10) * 10;
  iVar13 = *param_2;
  if (iVar13 < 1) {
    iVar13 = 1;
  }
  else if (*(int *)(_pGfx + 0xaec) < iVar13) {
    iVar13 = *(int *)(_pGfx + 0xaec);
  }
  *param_2 = iVar13;
  iVar10 = DAT_362bef7c;
  pCVar1 = (CTexParams *)*param_1;
  if ((_tpGlobal != pCVar1) || (DAT_362c556c != iVar13)) {
    DAT_362c556c = *param_2;
    _tpGlobal = pCVar1;
    if (*(int *)(_pGfx + 0xa38) == 1) {
      if (1 < _iStatsMode) {
        puVar8 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
        *(undefined4 *)(iVar10 + 0x268) = *puVar8;
        *(undefined4 *)(iVar10 + 0x26c) = puVar8[1];
      }
      piVar2 = *(int **)(_pGfx + 0xa5c);
      FUN_36075eb0(*piVar6,&param_1,&param_2,local_c);
      if (1 < *piVar7) {
        param_1 = (int *)0x3;
        param_2 = (int *)0x3;
      }
      if (0 < *(int *)(_pGfx + 0xadc)) {
        iVar13 = 0;
        do {
          (**(code **)(*piVar2 + 0xfc))(piVar2,iVar13,0x15,*piVar7);
          (**(code **)(*piVar2 + 0xfc))(piVar2,iVar13,0x10,local_c[0]);
          uVar14 = unaff_EDI;
          (**(code **)(*piVar2 + 0xfc))(piVar2,iVar13,0x11,unaff_EDI);
          (**(code **)(*piVar2 + 0xfc))(piVar2,iVar13,0x12,uVar14);
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(_pGfx + 0xadc));
      }
      iVar13 = DAT_362bef7c;
      if (1 < _iStatsMode) {
        puVar9 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        uVar5 = *(uint *)(iVar13 + 0x270);
        uVar11 = uVar3 - *(uint *)(iVar13 + 0x268);
        *(uint *)(iVar13 + 0x270) = uVar5 + uVar11;
        *(uint *)(iVar13 + 0x274) =
             *(int *)(iVar13 + 0x274) +
             ((uVar4 - *(int *)(iVar13 + 0x26c)) - (uint)(uVar3 < *(uint *)(iVar13 + 0x268))) +
             (uint)CARRY4(uVar5,uVar11);
        *(undefined4 *)(iVar13 + 0x268) = 0xffffffff;
        *(undefined4 *)(iVar13 + 0x26c) = 0xffffffff;
      }
    }
  }
  return;
}

