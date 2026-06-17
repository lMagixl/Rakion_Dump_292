
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3609b210(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  iVar1 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar4 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar1 + 0x218) = *puVar4;
    *(undefined4 *)(iVar1 + 0x21c) = puVar4[1];
  }
  iVar1 = *(int *)(DAT_362c9c80 + 0x68);
  iVar10 = _DAT_362c9c6c * DAT_362c9c70;
  iVar5 = (_DAT_362c9c6c + -2) * DAT_362c9c70;
  if ((_DAT_362c9dc0 & 1) == 0) {
    _DAT_362c9dc0 = _DAT_362c9dc0 | 1;
    DAT_362c9dbc = param_1;
  }
  iVar12 = 0;
  do {
    iVar8 = _DAT_362c9c6c + -2;
    do {
      uVar6 = (uint)*(byte *)(iVar12 + DAT_362c9c70 + iVar1) +
              (uint)*(byte *)(iVar12 + DAT_362c9c70 + iVar1 + DAT_362c9c70) >> 1;
      if ((int)DAT_362c9dbc < (int)uVar6) {
        uVar11 = DAT_362c9c58 >> 0x10 & DAT_362c9dbc;
        *(char *)(iVar1 + ((char)(&DAT_362c9c88)[uVar11] + iVar12 & iVar10 - 1U)) =
             (char)uVar6 - (char)uVar11;
        DAT_362c9c58 = DAT_362c9c58 * 0x40003;
      }
      else {
        *(undefined1 *)(iVar1 + iVar12) = 0;
      }
      iVar3 = DAT_362bef7c;
      iVar12 = iVar12 + DAT_362c9c70;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar12 = iVar12 - (iVar5 + -1);
  } while (iVar12 < DAT_362c9c70);
  if (1 < _iStatsMode) {
    puVar7 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar6 = *puVar7;
    uVar11 = puVar7[1];
    uVar2 = *(uint *)(iVar3 + 0x220);
    uVar9 = uVar6 - *(uint *)(iVar3 + 0x218);
    *(uint *)(iVar3 + 0x220) = uVar2 + uVar9;
    *(uint *)(iVar3 + 0x224) =
         *(int *)(iVar3 + 0x224) +
         ((uVar11 - *(int *)(iVar3 + 0x21c)) - (uint)(uVar6 < *(uint *)(iVar3 + 0x218))) +
         (uint)CARRY4(uVar2,uVar9);
    *(undefined4 *)(iVar3 + 0x218) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x21c) = 0xffffffff;
  }
  return;
}

