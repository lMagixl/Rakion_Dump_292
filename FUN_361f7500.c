
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361f7500(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  fVar6 = (float)(*param_1 & _DAT_362ae480);
  fVar10 = (float)(param_1[1] & uRam362ae484);
  fVar14 = (float)(param_1[2] & uRam362ae488);
  fVar18 = (float)(param_1[3] & uRam362ae48c);
  uVar22 = param_1[1] & uRam362ae474;
  uVar23 = param_1[2] & uRam362ae478;
  uVar24 = param_1[3] & uRam362ae47c;
  fVar7 = fVar6 * _DAT_362ae460 + _DAT_362ae410;
  fVar11 = fVar10 * fRam362ae464 + fRam362ae414;
  fVar15 = fVar14 * fRam362ae468 + fRam362ae418;
  fVar19 = fVar18 * fRam362ae46c + fRam362ae41c;
  fVar8 = fVar7 - _DAT_362ae410;
  fVar12 = fVar11 - fRam362ae414;
  fVar16 = fVar15 - fRam362ae418;
  fVar20 = fVar19 - fRam362ae41c;
  fVar6 = (((fVar6 - _DAT_362ae450 * fVar8) - _DAT_362ae440 * fVar8) - _DAT_362ae430 * fVar8) -
          _DAT_362ae420 * fVar8;
  fVar8 = (((fVar10 - fRam362ae454 * fVar12) - fRam362ae444 * fVar12) - fRam362ae434 * fVar12) -
          fRam362ae424 * fVar12;
  fVar10 = (((fVar14 - fRam362ae458 * fVar16) - fRam362ae448 * fVar16) - fRam362ae438 * fVar16) -
           fRam362ae428 * fVar16;
  fVar12 = (((fVar18 - fRam362ae45c * fVar20) - fRam362ae44c * fVar20) - fRam362ae43c * fVar20) -
           fRam362ae42c * fVar20;
  fVar14 = fVar6 * fVar6;
  fVar16 = fVar8 * fVar8;
  fVar18 = fVar10 * fVar10;
  fVar20 = fVar12 * fVar12;
  uVar25 = (uint)fVar7 & _DAT_362ae3e0;
  uVar26 = (uint)fVar11 & uRam362ae3e4;
  uVar27 = (uint)fVar15 & uRam362ae3e8;
  uVar28 = (uint)fVar19 & uRam362ae3ec;
  uVar9 = uVar25 & _DAT_362ae3d0;
  uVar13 = uVar26 & uRam362ae3d4;
  uVar17 = uVar27 & uRam362ae3d8;
  uVar21 = uVar28 & uRam362ae3dc;
  uVar1 = uVar26 - uVar13 & _DAT_362ae3c0;
  uVar2 = uVar27 - uVar17 & _DAT_362ae3c0;
  uVar3 = uVar28 - uVar21 & _DAT_362ae3c0;
  uVar4 = uVar25 + uVar9 & _DAT_362ae3c0;
  uVar26 = uVar26 + uVar13 & _DAT_362ae3c0;
  uVar27 = uVar27 + uVar17 & _DAT_362ae3c0;
  uVar28 = uVar28 + uVar21 & _DAT_362ae3c0;
  uVar5 = -(uint)((float)(uVar9 << 0x1e) != 0.0);
  uVar13 = -(uint)((float)(uVar13 << 0x1e) != 0.0);
  uVar17 = -(uint)((float)(uVar17 << 0x1e) != 0.0);
  uVar21 = -(uint)((float)(uVar21 << 0x1e) != 0.0);
  fVar6 = (((_DAT_362ae400 * fVar14 + _DAT_362ae3b0) * fVar14 + _DAT_362ae390) * fVar14 +
          _DAT_362ae370) * fVar6;
  fVar8 = (((fRam362ae404 * fVar16 + fRam362ae3b4) * fVar16 + fRam362ae394) * fVar16 + fRam362ae374)
          * fVar8;
  fVar10 = (((fRam362ae408 * fVar18 + fRam362ae3b8) * fVar18 + fRam362ae398) * fVar18 + fRam362ae378
           ) * fVar10;
  fVar12 = (((fRam362ae40c * fVar20 + fRam362ae3bc) * fVar20 + fRam362ae39c) * fVar20 + fRam362ae37c
           ) * fVar12;
  fVar7 = (((_DAT_362ae3f0 * fVar14 + _DAT_362ae3a0) * fVar14 + _DAT_362ae380) * fVar14 +
          _DAT_362ae360) * fVar14 + _DAT_362ae350;
  fVar11 = (((fRam362ae3f4 * fVar16 + fRam362ae3a4) * fVar16 + fRam362ae384) * fVar16 + fRam362ae364
           ) * fVar16 + fRam362ae354;
  fVar14 = (((fRam362ae3f8 * fVar18 + fRam362ae3a8) * fVar18 + fRam362ae388) * fVar18 + fRam362ae368
           ) * fVar18 + fRam362ae358;
  fVar15 = (((fRam362ae3fc * fVar20 + fRam362ae3ac) * fVar20 + fRam362ae38c) * fVar20 + fRam362ae36c
           ) * fVar20 + fRam362ae35c;
  *param_2 = (~uVar5 & (uint)fVar6 | uVar5 & (uint)fVar7) ^
             (uVar25 - uVar9 & _DAT_362ae3c0) << 0x1e ^ *param_1 & _DAT_362ae470;
  param_2[1] = (~uVar13 & (uint)fVar8 | uVar13 & (uint)fVar11) ^ uVar1 << 0x1e ^ uVar22;
  param_2[2] = (~uVar17 & (uint)fVar10 | uVar17 & (uint)fVar14) ^ uVar2 << 0x1e ^ uVar23;
  param_2[3] = (~uVar21 & (uint)fVar12 | uVar21 & (uint)fVar15) ^ uVar3 << 0x1e ^ uVar24;
  *param_3 = (uVar5 & (uint)fVar6 | ~uVar5 & (uint)fVar7) ^ uVar4 << 0x1e;
  param_3[1] = (uVar13 & (uint)fVar8 | ~uVar13 & (uint)fVar11) ^ uVar26 << 0x1e;
  param_3[2] = (uVar17 & (uint)fVar10 | ~uVar17 & (uint)fVar14) ^ uVar27 << 0x1e;
  param_3[3] = (uVar21 & (uint)fVar12 | ~uVar21 & (uint)fVar15) ^ uVar28 << 0x1e;
  return;
}

