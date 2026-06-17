
/* unsigned short * __cdecl TRE_GetBufferForEditing(class CTerrain *,class CTRect,enum
   BufferType,long) */

ushort * __cdecl
TRE_GetBufferForEditing
          (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  int local_c;
  
                    /* 0x174f40  3716
                       ?TRE_GetBufferForEditing@@YAPAGPAVCTerrain@@VCTRect@@W4BufferType@@J@Z */
  param_4 = param_4 - param_2;
  local_c = param_5 - param_3;
  piVar2 = *(int **)(param_1 + 0x2c);
  iVar3 = piVar2[6];
  iVar4 = piVar2[7];
  iVar5 = iVar4 + -1;
  puVar6 = AllocMemory(local_c * param_4 * 2);
  if (param_6 == 1) {
    iVar4 = *piVar2;
    puVar11 = puVar6;
    param_6 = local_c;
    if (0 < local_c) {
      do {
        if (param_3 < 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = iVar5;
          if (param_3 <= iVar5) {
            iVar13 = param_3;
          }
        }
        if (0 < param_4) {
          iVar7 = param_2;
          iVar12 = param_4;
          do {
            if (iVar7 < 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = iVar3 + -1;
              if (iVar7 <= iVar3 + -1) {
                iVar9 = iVar7;
              }
            }
            *puVar11 = *(ushort *)(iVar4 + (iVar9 + iVar13 * iVar3) * 2);
            puVar11 = puVar11 + 1;
            iVar7 = iVar7 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        param_3 = param_3 + 1;
        param_6 = param_6 + -1;
      } while (param_6 != 0);
      DAT_36300a54 = DAT_36300a54 + 1;
      return puVar6;
    }
  }
  else if (param_6 == 2) {
    iVar13 = *(int *)(*(int *)(piVar2[0x43] + param_7 * 0x94) + 0x30);
    puVar11 = puVar6;
    if (0 < local_c) {
      do {
        if (param_3 < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar4 + -2;
          if (param_3 <= iVar4 + -2) {
            iVar7 = param_3;
          }
        }
        if (0 < param_4) {
          iVar12 = param_2;
          puVar10 = puVar11;
          iVar9 = param_4;
          do {
            if (iVar12 < 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = iVar3 + -2;
              if (iVar12 <= iVar3 + -2) {
                iVar8 = iVar12;
              }
            }
            uVar1 = *(undefined1 *)(iVar7 * iVar5 + iVar13 + iVar8);
            puVar11 = puVar10 + 1;
            *puVar10 = CONCAT11(uVar1,uVar1);
            iVar12 = iVar12 + 1;
            iVar9 = iVar9 + -1;
            puVar10 = puVar11;
          } while (iVar9 != 0);
        }
        param_3 = param_3 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      DAT_36300a54 = DAT_36300a54 + 1;
      return puVar6;
    }
  }
  else {
    if (param_6 != 3) {
      return (ushort *)0x0;
    }
    iVar13 = piVar2[2];
    puVar11 = puVar6;
    if (0 < local_c) {
      do {
        if (param_3 < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar4 + -2;
          if (param_3 <= iVar4 + -2) {
            iVar7 = param_3;
          }
        }
        if (0 < param_4) {
          iVar12 = param_2;
          puVar10 = puVar11;
          iVar9 = param_4;
          do {
            if (iVar12 < 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = iVar3 + -2;
              if (iVar12 <= iVar3 + -2) {
                iVar8 = iVar12;
              }
            }
            puVar11 = puVar10 + 1;
            iVar12 = iVar12 + 1;
            iVar9 = iVar9 + -1;
            *puVar10 = (ushort)(*(char *)(iVar7 * iVar5 + iVar13 + iVar8) == -1);
            puVar10 = puVar11;
          } while (iVar9 != 0);
        }
        param_3 = param_3 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  DAT_36300a54 = DAT_36300a54 + 1;
  return puVar6;
}

