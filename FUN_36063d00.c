
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36063d00(int *param_1,float param_2,int param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  int *unaff_EBP;
  float *pfVar13;
  float fVar14;
  int *piVar15;
  float unaff_retaddr;
  int *local_60;
  int iStack_5c;
  float fStack_58;
  int iStack_54;
  ushort *puStack_50;
  undefined4 local_4c;
  ushort *puStack_48;
  undefined4 uStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  undefined4 local_4;
  
  piVar15 = param_1;
  iVar4 = DAT_362bef7c;
  local_4 = DAT_362abd90;
  iVar5 = *(int *)(_pGfx + 0xa38);
  iVar7 = *param_1;
  if (iVar5 == 0) {
    uVar11 = *(uint *)(_pGfx + 0xa54) & 0x800000;
LAB_36063d49:
    if (uVar11 != 0) goto LAB_36063d54;
  }
  else if (*(int *)(_pGfx + 0xa38) == 1) {
    uVar11 = *(uint *)(_pGfx + 0xa54) & 0x8000;
    goto LAB_36063d49;
  }
  DAT_362a40ec = DAT_362a40ec & 1;
LAB_36063d54:
  if ((int)DAT_362a40ec < 10) {
    if (iVar5 == 0) {
      if (1 < _iStatsMode) {
        puVar6 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
        *(undefined4 *)(iVar4 + 0x268) = *puVar6;
        *(undefined4 *)(iVar4 + 0x26c) = puVar6[1];
      }
      iVar4 = DAT_362bef7c;
      if (0 < (int)param_4) {
        pfVar13 = (float *)(param_3 + 0x10);
        fVar14 = param_4;
        do {
          if ((param_2 == pfVar13[1]) && (DAT_362bf908 == *pfVar13)) {
            (*DAT_362c4148)(pfVar13[-3],(*(int *)(iVar7 + 0x68) - (int)pfVar13[-2]) + -1,1,1,0x1902,
                            0x1406,&param_1);
            pfVar13[2] = (float)(uint)(pfVar13[-1] < (float)param_1);
          }
          pfVar13 = pfVar13 + 7;
          fVar14 = (float)((int)fVar14 + -1);
          iVar4 = DAT_362bef7c;
        } while (fVar14 != 0.0);
      }
    }
    else {
      if (iVar5 != 1) {
        return;
      }
      if (1 < _iStatsMode) {
        puVar6 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
        *(undefined4 *)(iVar4 + 0x268) = *puVar6;
        *(undefined4 *)(iVar4 + 0x26c) = puVar6[1];
      }
      if ((*(uint *)(_pGfx + 0xa54) & 0x200) == 0) {
        piVar15 = *(int **)(*(int *)(iVar7 + 4) + 0x7c);
        iVar5 = (**(code **)(*piVar15 + 0x10))(piVar15,0,0,&local_60);
      }
      else {
        iVar5 = (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x40))(*(int **)(_pGfx + 0xa5c));
      }
      iVar4 = DAT_362bef7c;
      if (iVar5 == 0) {
        (**(code **)(*local_60 + 0x20))(local_60,&fStack_38);
        fVar14 = param_2;
        iStack_5c = iStack_40;
        FUN_36063cb0(&DAT_362bf970,(int)param_2);
        iVar5 = 0;
        if (0 < (int)fVar14) {
          pfVar13 = (float *)(param_1 + 1);
          do {
            if ((unaff_retaddr == pfVar13[4]) && (DAT_362bf908 == pfVar13[3])) {
              *(undefined4 *)(DAT_362bf974 + iVar5 * 4) = 0;
              fStack_1c = *pfVar13;
              fStack_18 = pfVar13[1];
              local_14 = (int)fStack_1c + 1;
              iStack_10 = (int)fStack_18 + 1;
              iVar7 = (**(code **)(*unaff_EBP + 0x24))(unaff_EBP,&iStack_54,&fStack_1c,0x10);
              if (iVar7 == 0) {
                puVar9 = (uint *)(DAT_362bf974 + iVar5 * 4);
                uVar11 = FUN_36075cf0(puStack_50,iStack_5c,&local_60);
                *puVar9 = uVar11 | 0xff;
                (**(code **)(*unaff_EBP + 0x28))(unaff_EBP);
              }
            }
            iVar5 = iVar5 + 1;
            pfVar13 = pfVar13 + 7;
          } while (iVar5 < (int)fVar14);
        }
        iVar5 = DAT_362bef7c;
        if (1 < _iStatsMode) {
          puVar9 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
          uVar11 = *puVar9;
          uVar8 = puVar9[1];
          uVar10 = uVar11 - *(uint *)(iVar5 + 0x268);
          uVar3 = *(uint *)(iVar5 + 0x270);
          *(uint *)(iVar5 + 0x270) = uVar3 + uVar10;
          *(uint *)(iVar5 + 0x274) =
               *(int *)(iVar5 + 0x274) +
               ((uVar8 - *(int *)(iVar5 + 0x26c)) - (uint)(uVar11 < *(uint *)(iVar5 + 0x268))) +
               (uint)CARRY4(uVar3,uVar10);
          *(undefined4 *)(iVar5 + 0x268) = 0xffffffff;
          *(undefined4 *)(iVar5 + 0x26c) = 0xffffffff;
        }
        (*DAT_362c45f8)();
        (*DAT_362c461c)();
        (*DAT_362c462c)();
        (*DAT_362c4628)();
        (*DAT_362c4634)();
        (*DAT_362c46ac)();
        iVar5 = DAT_362bef7c;
        if (1 < _iStatsMode) {
          puVar6 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
          *(undefined4 *)(iVar5 + 0x268) = *puVar6;
          *(undefined4 *)(iVar5 + 0x26c) = puVar6[1];
        }
        FUN_36063c10(&DAT_362bf960,(int)fVar14 * 3);
        FUN_3607b2c0(0x142);
        iVar5 = 0;
        iStack_40 = 0;
        if (0 < (int)fVar14) {
          iVar7 = 0;
          pfVar13 = (float *)(param_3 + 0x10);
          do {
            uVar11 = *(uint *)(DAT_362bf974 + iStack_40 * 4);
            if (((param_2 == pfVar13[1]) && (DAT_362bf908 == *pfVar13)) && (uVar11 != 0)) {
              fStack_3c = (float)((uVar11 ^ 0x20103000) >> 8 | uVar11 << 0x18);
              iStack_5c = (int)pfVar13[-3] - param_1[2];
              puStack_50 = (ushort *)((int)pfVar13[-2] - param_1[3]);
              pfVar1 = (float *)(iVar7 + DAT_362bf964);
              pfVar2 = (float *)(iVar7 + 0x18 + DAT_362bf964);
              pfVar12 = (float *)(DAT_362bf964 + iVar7 + 0x30);
              iVar5 = iVar5 + 3;
              iVar7 = iVar7 + 0x48;
              *pfVar1 = (float)iStack_5c;
              pfVar1[1] = (float)(int)(puStack_50 + -1);
              pfVar1[2] = pfVar13[-1];
              pfVar1[3] = fStack_3c;
              pfVar1[5] = 0.0;
              pfVar1[4] = 0.0;
              *pfVar2 = (float)(iStack_5c + -2);
              iStack_5c = iStack_5c + 2;
              pfVar2[1] = (float)(int)(puStack_50 + 1);
              pfVar2[2] = pfVar13[-1];
              pfVar2[3] = fStack_3c;
              pfVar1[5] = 0.0;
              pfVar2[4] = 0.0;
              *pfVar12 = (float)iStack_5c;
              pfVar12[1] = (float)(int)puStack_50;
              pfVar12[2] = pfVar13[-1];
              pfVar12[3] = fStack_3c;
              pfVar1[5] = 0.0;
              pfVar12[4] = 0.0;
              fVar14 = param_4;
              local_14 = iVar5;
            }
            iStack_40 = iStack_40 + 1;
            pfVar13 = pfVar13 + 7;
          } while (iStack_40 < (int)fVar14);
        }
        if (0 < iVar5 / 3) {
          (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x120))
                    (*(int **)(_pGfx + 0xa5c),4,iVar5 / 3,DAT_362bf964,0x18);
        }
        iVar5 = 0;
        if (0 < (int)param_4) {
          piVar15 = (int *)(param_3 + 4);
          do {
            uVar11 = *(uint *)(DAT_362bf974 + iVar5 * 4);
            if (((param_2 == (float)piVar15[4]) && (DAT_362bf908 == (float)piVar15[3])) &&
               (uVar11 != 0)) {
              local_14 = *piVar15;
              iStack_10 = piVar15[1];
              iStack_c = local_14 + 1;
              iStack_8 = iStack_10 + 1;
              iVar7 = (**(code **)(*local_60 + 0x24))(local_60,&local_4c,&local_14,0x10);
              if (iVar7 == 0) {
                uVar8 = FUN_36075cf0(puStack_48,iStack_54,&fStack_58);
                (**(code **)(*local_60 + 0x28))(local_60);
                piVar15[5] = (uint)(uVar11 != (uVar8 | 0xff));
              }
            }
            iVar5 = iVar5 + 1;
            piVar15 = piVar15 + 7;
          } while (iVar5 < (int)param_4);
        }
        do {
          iVar5 = (**(code **)(*local_60 + 8))(local_60);
        } while (0 < iVar5);
        local_60 = (int *)0x0;
        _DAT_362bf978 = 0;
        _DAT_362bf968 = 0;
        iVar4 = DAT_362bef7c;
      }
    }
    DAT_362bef7c = iVar4;
    if (1 < _iStatsMode) {
      puVar9 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar11 = *puVar9 - *(uint *)(iVar4 + 0x268);
      *(int *)(iVar4 + 0x274) =
           *(int *)(iVar4 + 0x274) +
           ((puVar9[1] - *(int *)(iVar4 + 0x26c)) - (uint)(*puVar9 < *(uint *)(iVar4 + 0x268))) +
           (uint)CARRY4(*(uint *)(iVar4 + 0x270),uVar11);
      *(uint *)(iVar4 + 0x270) = *(uint *)(iVar4 + 0x270) + uVar11;
      *(undefined4 *)(iVar4 + 0x268) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x26c) = 0xffffffff;
    }
  }
  else {
    (*DAT_362c45f8)();
    (*DAT_362c461c)();
    (*DAT_362c4628)();
    (*DAT_362c4634)();
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x1b,0x1c);
    (*DAT_362c4654)(0x3d);
    if (0 < (int)param_4) {
      pfVar13 = (float *)(param_3 + 0x10);
      fStack_58 = param_4;
      do {
        if ((param_2 == pfVar13[1]) && (DAT_362bf908 == *pfVar13)) {
          param_1 = (int *)0x0;
          FUN_3607c3b0((int)pfVar13[-4],&param_1,0);
          pfVar13[2] = (float)(uint)(0 < (int)param_1);
          iVar5 = FUN_3607c180(pfVar13[-4]);
          if (iVar5 != 0) {
            iVar5 = (int)pfVar13[-3] - piVar15[2];
            fStack_20 = (float)iVar5;
            iStack_54 = (int)pfVar13[-2] - piVar15[3];
            fStack_30 = pfVar13[-1];
            fStack_38 = (float)iVar5;
            fStack_34 = (float)iStack_54 - _DAT_36228798;
            local_4c = 0x8808080;
            fStack_2c = fStack_20 - _DAT_36228798;
            puStack_48 = (ushort *)0x8808080;
            uStack_44 = 0x8808080;
            local_14 = 0x10000;
            iStack_10 = CONCAT22(iStack_10._2_2_,2);
            fStack_28 = _DAT_36228798 + (float)iStack_54;
            fStack_20 = fStack_20 + _DAT_36228798;
            fStack_1c = (float)iStack_54;
            fStack_24 = fStack_30;
            fStack_18 = fStack_30;
            (*DAT_362c4690)(&fStack_38,3);
            (*DAT_362c46a0)(&local_4c);
            (*DAT_362c46a4)(3,&local_14);
            FUN_3607c2f0();
          }
        }
        pfVar13 = pfVar13 + 7;
        fStack_58 = (float)((int)fStack_58 + -1);
      } while (fStack_58 != 0.0);
      return;
    }
  }
  return;
}

