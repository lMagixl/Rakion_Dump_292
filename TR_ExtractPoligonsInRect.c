
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl TR_ExtractPoligonsInRect(class CTerrain const *,class CTRect const &,class
   Vector<float,3> * *,long &,unsigned short * *,long &) */

void __cdecl
TR_ExtractPoligonsInRect
          (CTerrain *param_1,CTRect *param_2,Vector<float,3> **param_3,long *param_4,
          ushort **param_5,long *param_6)

{
  CTerrain *pCVar1;
  CTerrain CVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  CTRect *pCVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  int iVar15;
  int iVar16;
  CTRect *pCVar17;
  int iVar18;
  ushort uVar19;
  short sVar20;
  int iVar21;
  Vector<float,3> *pVVar22;
  int iVar23;
  CTerrain *pCVar24;
  int iVar25;
  CTRect *pCVar26;
  int local_34;
  int local_30;
  int local_24;
  int local_20;
  
                    /* 0x17b9e0  3754
                       ?TR_ExtractPoligonsInRect@@YAXPBVCTerrain@@ABVCTRect@@PAPAV?$Vector@M$02@@AAJPAPAG3@Z
                        */
  piVar3 = *(int **)(param_1 + 0x2c);
  iVar13 = piVar3[2];
  iVar18 = *piVar3;
  iVar25 = piVar3[6];
  iVar4 = piVar3[7];
  fVar5 = (float)piVar3[0xd];
  iVar23 = iVar25 + -1;
  fVar6 = (float)piVar3[0xe];
  fVar7 = (float)piVar3[0xf];
  iVar8 = *(int *)param_2;
  pCVar26 = (CTRect *)(*(int *)(param_2 + 8) - iVar8);
  pCVar9 = *(CTRect **)(param_2 + 4);
  local_20 = *(int *)(param_2 + 0xc) - (int)pCVar9;
  iVar15 = (local_20 + 1) * (int)(pCVar26 + 1);
  iVar11 = local_20 * (int)pCVar26 * 6;
  if ((iVar11 < 1) || (iVar15 < 1)) {
    *param_3 = (Vector<float,3> *)0x0;
    *param_5 = (ushort *)0x0;
    *param_4 = 0;
    *param_6 = 0;
    return;
  }
  _DAT_36300b7c = 0;
  _DAT_36300b8c = 0;
  FUN_3604f880(&DAT_36300b74,iVar15);
  FUN_36091ac0(&DAT_36300b84,iVar15);
  _DAT_36300b9c = 0;
  FUN_36062700(&DAT_36300b94,iVar11);
  local_24 = local_20 + 1;
  iVar12 = 0;
  if (0 < local_24) {
    iVar21 = (int)pCVar9 * iVar25;
    param_2 = pCVar9;
    do {
      local_34 = 0;
      if (3 < (int)(pCVar26 + 1)) {
        iVar16 = iVar12 * 0xc;
        pCVar24 = (CTerrain *)(iVar8 + 1);
        local_30 = ((uint)(pCVar26 + -3) >> 2) + 1;
        local_34 = local_30 * 4;
        do {
          pCVar1 = pCVar24 + -1;
          param_1 = pCVar1;
          if (iVar25 + -2 < (int)pCVar1) {
            param_1 = (CTerrain *)(iVar25 + -2);
          }
          pCVar17 = param_2;
          if (iVar4 + -2 < (int)param_2) {
            pCVar17 = (CTRect *)(iVar4 + -2);
          }
          uVar14 = *(ushort *)(iVar18 + (int)(pCVar1 + iVar21) * 2);
          CVar2 = param_1[iVar13 + (int)pCVar17 * iVar23];
          pVVar22 = DAT_36300b78 + iVar16;
          *(float *)pVVar22 = (float)(int)pCVar1 * fVar5;
          *(float *)(pVVar22 + 4) = (float)uVar14 * fVar6;
          fVar10 = (float)(int)param_2 * fVar7;
          *(float *)(pVVar22 + 8) = fVar10;
          *(CTerrain *)(DAT_36300b88 + iVar12) = CVar2;
          param_1 = pCVar24;
          if (iVar25 + -2 < (int)pCVar24) {
            param_1 = (CTerrain *)(iVar25 + -2);
          }
          pCVar17 = param_2;
          if (iVar4 + -2 < (int)param_2) {
            pCVar17 = (CTRect *)(iVar4 + -2);
          }
          uVar14 = *(ushort *)(iVar18 + (int)(pCVar24 + iVar21) * 2);
          CVar2 = param_1[iVar13 + (int)pCVar17 * iVar23];
          pVVar22 = DAT_36300b78 + iVar16 + 0xc;
          *(float *)pVVar22 = (float)(int)pCVar24 * fVar5;
          *(float *)(pVVar22 + 4) = (float)uVar14 * fVar6;
          *(float *)(pVVar22 + 8) = fVar10;
          *(CTerrain *)(DAT_36300b88 + iVar12 + 1) = CVar2;
          pCVar1 = pCVar24 + 1;
          param_1 = pCVar1;
          if (iVar25 + -2 < (int)pCVar1) {
            param_1 = (CTerrain *)(iVar25 + -2);
          }
          pCVar17 = param_2;
          if (iVar4 + -2 < (int)param_2) {
            pCVar17 = (CTRect *)(iVar4 + -2);
          }
          uVar14 = *(ushort *)(iVar18 + (int)(pCVar1 + iVar21) * 2);
          CVar2 = param_1[iVar13 + (int)pCVar17 * iVar23];
          pVVar22 = DAT_36300b78 + iVar16 + 0x18;
          *(float *)pVVar22 = (float)(int)pCVar1 * fVar5;
          *(float *)(pVVar22 + 4) = (float)uVar14 * fVar6;
          *(float *)(pVVar22 + 8) = fVar10;
          *(CTerrain *)(DAT_36300b88 + iVar12 + 2) = CVar2;
          pCVar1 = pCVar24 + 2;
          param_1 = pCVar1;
          if (iVar25 + -2 < (int)pCVar1) {
            param_1 = (CTerrain *)(iVar25 + -2);
          }
          pCVar17 = param_2;
          if (iVar4 + -2 < (int)param_2) {
            pCVar17 = (CTRect *)(iVar4 + -2);
          }
          uVar14 = *(ushort *)(iVar18 + (int)(pCVar1 + iVar21) * 2);
          CVar2 = param_1[iVar13 + (int)pCVar17 * iVar23];
          pVVar22 = DAT_36300b78 + iVar16 + 0x24;
          pCVar24 = pCVar24 + 4;
          *(float *)pVVar22 = (float)(int)pCVar1 * fVar5;
          iVar12 = iVar12 + 4;
          iVar16 = iVar16 + 0x30;
          *(float *)(pVVar22 + 4) = (float)uVar14 * fVar6;
          *(float *)(pVVar22 + 8) = fVar10;
          *(CTerrain *)(DAT_36300b88 + -1 + iVar12) = CVar2;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
      }
      if (local_34 < (int)(pCVar26 + 1)) {
        param_1 = (CTerrain *)(iVar8 + local_34);
        iVar16 = iVar12 * 0xc;
        local_34 = (int)(pCVar26 + 1) - local_34;
        do {
          pCVar24 = (CTerrain *)(iVar25 + -2);
          if ((int)param_1 <= iVar25 + -2) {
            pCVar24 = param_1;
          }
          pCVar17 = param_2;
          if (iVar4 + -2 < (int)param_2) {
            pCVar17 = (CTRect *)(iVar4 + -2);
          }
          uVar14 = *(ushort *)(iVar18 + (int)(param_1 + iVar21) * 2);
          CVar2 = pCVar24[iVar13 + (int)pCVar17 * iVar23];
          pVVar22 = DAT_36300b78 + iVar16;
          *(float *)pVVar22 = (float)(int)param_1 * fVar5;
          iVar12 = iVar12 + 1;
          iVar16 = iVar16 + 0xc;
          *(float *)(pVVar22 + 4) = (float)uVar14 * fVar6;
          *(float *)(pVVar22 + 8) = (float)(int)param_2 * fVar7;
          *(CTerrain *)(DAT_36300b88 + -1 + iVar12) = CVar2;
          param_1 = param_1 + 1;
          local_34 = local_34 + -1;
        } while (local_34 != 0);
      }
      iVar21 = iVar21 + iVar25;
      param_2 = param_2 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  param_1 = (CTerrain *)((int)pCVar9 * iVar25 + iVar8);
  iVar18 = 0;
  iVar13 = 0;
  if (0 < local_20) {
    do {
      if (0 < (int)pCVar26) {
        iVar25 = iVar13 * 2 + 4;
        param_2 = pCVar26;
        do {
          uVar14 = (ushort)iVar18;
          sVar20 = (short)pCVar26;
          if (((uint)param_1 & 1) == 0) {
            if (*(char *)(iVar18 + DAT_36300b88) == -1) {
              DAT_36300b98[iVar13] = uVar14 + 1 + sVar20;
              uVar19 = uVar14 + 2 + sVar20;
              DAT_36300b98[iVar13 + 1] = uVar19;
              *(ushort *)((int)DAT_36300b98 + iVar25) = uVar14;
              DAT_36300b98[iVar13 + 3] = uVar14;
              DAT_36300b98[iVar13 + 4] = uVar19;
              sVar20 = uVar14 + 1;
              goto LAB_3617bf37;
            }
          }
          else if (*(char *)(iVar18 + DAT_36300b88) == -1) {
            DAT_36300b98[iVar13] = uVar14;
            uVar19 = uVar14 + 1 + sVar20;
            DAT_36300b98[iVar13 + 1] = uVar19;
            *(ushort *)(iVar25 + (int)DAT_36300b98) = uVar14 + 1;
            DAT_36300b98[iVar13 + 3] = uVar14 + 1;
            DAT_36300b98[iVar13 + 4] = uVar19;
            sVar20 = uVar14 + 2 + sVar20;
LAB_3617bf37:
            *(short *)((int)DAT_36300b98 + iVar25 + 6) = sVar20;
            iVar13 = iVar13 + 6;
            iVar25 = iVar25 + 0xc;
          }
          param_1 = param_1 + 1;
          iVar18 = iVar18 + 1;
          param_2 = param_2 + -1;
        } while (param_2 != (CTRect *)0x0);
      }
      if (((uint)(pCVar26 + 1) & 1) != 0) {
        param_1 = param_1 + 1;
      }
      iVar18 = iVar18 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  if (iVar13 < iVar11) {
    _DAT_36300b9c = iVar13 + 1;
  }
  *param_4 = iVar15;
  *param_3 = DAT_36300b78;
  if (iVar13 < 1) {
    *param_6 = 0;
    *param_5 = (ushort *)0x0;
    return;
  }
  *param_6 = iVar13;
  *param_5 = DAT_36300b98;
  return;
}

