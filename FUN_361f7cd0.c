
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361f7cd0(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  
  fVar16 = (float)(*param_1 & _DAT_362ae6a0);
  fVar17 = (float)(param_1[1] & uRam362ae6a4);
  fVar25 = (float)(param_1[2] & uRam362ae6a8);
  fVar26 = (float)(param_1[3] & uRam362ae6ac);
  uVar13 = param_1[1] & uRam362ae694;
  uVar14 = param_1[2] & uRam362ae698;
  uVar15 = param_1[3] & uRam362ae69c;
  fVar1 = fVar16 * _DAT_362ae680 + _DAT_362ae630;
  fVar4 = fVar17 * fRam362ae684 + fRam362ae634;
  fVar7 = fVar25 * fRam362ae688 + fRam362ae638;
  fVar10 = fVar26 * fRam362ae68c + fRam362ae63c;
  fVar2 = fVar1 - _DAT_362ae630;
  fVar5 = fVar4 - fRam362ae634;
  fVar8 = fVar7 - fRam362ae638;
  fVar11 = fVar10 - fRam362ae63c;
  fVar16 = (((fVar16 - _DAT_362ae670 * fVar2) - _DAT_362ae660 * fVar2) - _DAT_362ae650 * fVar2) -
           _DAT_362ae640 * fVar2;
  fVar2 = (((fVar17 - fRam362ae674 * fVar5) - fRam362ae664 * fVar5) - fRam362ae654 * fVar5) -
          fRam362ae644 * fVar5;
  fVar17 = (((fVar25 - fRam362ae678 * fVar8) - fRam362ae668 * fVar8) - fRam362ae658 * fVar8) -
           fRam362ae648 * fVar8;
  fVar5 = (((fVar26 - fRam362ae67c * fVar11) - fRam362ae66c * fVar11) - fRam362ae65c * fVar11) -
          fRam362ae64c * fVar11;
  fVar25 = fVar16 * fVar16;
  fVar8 = fVar2 * fVar2;
  fVar26 = fVar17 * fVar17;
  fVar11 = fVar5 * fVar5;
  uVar18 = (uint)fVar1 & _DAT_362ae600;
  uVar19 = (uint)fVar4 & uRam362ae604;
  uVar21 = (uint)fVar7 & uRam362ae608;
  uVar23 = (uint)fVar10 & uRam362ae60c;
  uVar3 = uVar18 & _DAT_362ae5f0;
  uVar6 = uVar19 & uRam362ae5f4;
  uVar9 = uVar21 & uRam362ae5f8;
  uVar12 = uVar23 & uRam362ae5fc;
  uVar20 = uVar19 - uVar6 & uRam362ae5e4;
  uVar22 = uVar21 - uVar9 & uRam362ae5e8;
  uVar24 = uVar23 - uVar12 & uRam362ae5ec;
  uVar27 = uVar18 + uVar3 & _DAT_362ae5e0;
  uVar28 = uVar19 + uVar6 & uRam362ae5e4;
  uVar21 = uVar21 + uVar9 & uRam362ae5e8;
  uVar23 = uVar23 + uVar12 & uRam362ae5ec;
  uVar19 = -(uint)((float)(uVar3 << 0x1e) != 0.0);
  uVar6 = -(uint)((float)(uVar6 << 0x1e) != 0.0);
  uVar9 = -(uint)((float)(uVar9 << 0x1e) != 0.0);
  uVar12 = -(uint)((float)(uVar12 << 0x1e) != 0.0);
  fVar16 = (((_DAT_362ae620 * fVar25 + _DAT_362ae5d0) * fVar25 + _DAT_362ae5b0) * fVar25 +
           _DAT_362ae590) * fVar16;
  fVar2 = (((fRam362ae624 * fVar8 + fRam362ae5d4) * fVar8 + fRam362ae5b4) * fVar8 + fRam362ae594) *
          fVar2;
  fVar17 = (((fRam362ae628 * fVar26 + fRam362ae5d8) * fVar26 + fRam362ae5b8) * fVar26 + fRam362ae598
           ) * fVar17;
  fVar5 = (((fRam362ae62c * fVar11 + fRam362ae5dc) * fVar11 + fRam362ae5bc) * fVar11 + fRam362ae59c)
          * fVar5;
  fVar1 = (((_DAT_362ae610 * fVar25 + _DAT_362ae5c0) * fVar25 + _DAT_362ae5a0) * fVar25 +
          _DAT_362ae580) * fVar25 + _DAT_362ae570;
  fVar4 = (((fRam362ae614 * fVar8 + fRam362ae5c4) * fVar8 + fRam362ae5a4) * fVar8 + fRam362ae584) *
          fVar8 + fRam362ae574;
  fVar25 = (((fRam362ae618 * fVar26 + fRam362ae5c8) * fVar26 + fRam362ae5a8) * fVar26 + fRam362ae588
           ) * fVar26 + fRam362ae578;
  fVar7 = (((fRam362ae61c * fVar11 + fRam362ae5cc) * fVar11 + fRam362ae5ac) * fVar11 + fRam362ae58c)
          * fVar11 + fRam362ae57c;
  *param_2 = (~uVar19 & (uint)fVar16 | uVar19 & (uint)fVar1) ^
             (uVar18 - uVar3 & _DAT_362ae5e0) << 0x1e ^ *param_1 & _DAT_362ae690;
  param_2[1] = (~uVar6 & (uint)fVar2 | uVar6 & (uint)fVar4) ^ uVar20 << 0x1e ^ uVar13;
  param_2[2] = (~uVar9 & (uint)fVar17 | uVar9 & (uint)fVar25) ^ uVar22 << 0x1e ^ uVar14;
  param_2[3] = (~uVar12 & (uint)fVar5 | uVar12 & (uint)fVar7) ^ uVar24 << 0x1e ^ uVar15;
  *param_3 = (uVar19 & (uint)fVar16 | ~uVar19 & (uint)fVar1) ^ uVar27 << 0x1e;
  param_3[1] = (uVar6 & (uint)fVar2 | ~uVar6 & (uint)fVar4) ^ uVar28 << 0x1e;
  param_3[2] = (uVar9 & (uint)fVar17 | ~uVar9 & (uint)fVar25) ^ uVar21 << 0x1e;
  param_3[3] = (uVar12 & (uint)fVar5 | ~uVar12 & (uint)fVar7) ^ uVar23 << 0x1e;
  return;
}

