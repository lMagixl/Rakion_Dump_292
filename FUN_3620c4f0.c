
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_3620c4f0(uint param_1,int param_2,int param_3,float *param_4,int param_5,float *param_6)

{
  float fVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  float *pfVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar19;
  float10 fVar20;
  uint local_7c;
  uint local_6c;
  undefined4 uStack_64;
  ulonglong local_40;
  double local_30;
  double local_28;
  double local_10;
  float10 fVar18;
  
  uStack_64 = 0x401921fb;
  uVar3 = FUN_3620cde0(param_1);
  if ((char)uVar3 != '\0') {
    uVar11 = 0;
    if (param_2 != 0) {
      uStack_64 = 0xc01921fb;
    }
    FUN_3620c7a0(param_3,s_RealIn_362b0210);
    FUN_3620c7a0(param_5,s_RealOut_362b0208);
    FUN_3620c7a0((int)param_6,s_ImagOut_362b0200);
    iVar4 = FUN_3620ce00(param_1);
    if (param_1 != 0) {
      pfVar8 = param_4;
      do {
        uVar5 = FUN_3620ce20(uVar11,iVar4);
        *(undefined4 *)(param_5 + uVar5 * 4) =
             *(undefined4 *)((param_3 - (int)param_4) + (int)pfVar8);
        if (param_4 == (float *)0x0) {
          fVar1 = (float)_DAT_3624cda8;
        }
        else {
          fVar1 = *pfVar8;
        }
        uVar11 = uVar11 + 1;
        pfVar8 = pfVar8 + 1;
        param_6[uVar5] = fVar1;
      } while (uVar11 < param_1);
    }
    local_7c = 1;
    local_6c = 2;
    if (1 < param_1) {
      do {
        fVar13 = (float10)(double)CONCAT44(uStack_64,0x54442d18) / (float10)local_6c;
        fVar14 = fVar13 * (float10)_DAT_3624cfb0;
        fVar15 = (float10)fsin(fVar14);
        fVar13 = -fVar13;
        fVar16 = (float10)fsin(fVar13);
        fVar14 = (float10)fcos((float10)(double)fVar14);
        uVar11 = 0;
        fVar13 = (float10)fcos(fVar13);
        if (param_1 != 0) {
          pfVar8 = param_6 + local_7c;
          pfVar12 = param_6;
          do {
            if (local_7c != 0) {
              iVar4 = param_5 - (int)param_6;
              pfVar6 = pfVar8;
              pfVar9 = pfVar12;
              uVar5 = local_7c;
              fVar20 = fVar13;
              local_28 = (double)fVar15;
              fVar19 = fVar16;
              fVar17 = fVar14;
              do {
                fVar18 = fVar20;
                local_10 = (double)fVar17;
                local_30 = (double)fVar19;
                pfVar7 = pfVar6 + 1;
                pfVar10 = pfVar9 + 1;
                uVar5 = uVar5 - 1;
                dVar2 = (double)(fVar18 * (fVar13 + fVar13) - (float10)local_10);
                fVar19 = (float10)local_30 * (fVar13 + fVar13) - (float10)local_28;
                fVar1 = (float)((float10)*(float *)(iVar4 + -4 + (int)pfVar7) * (float10)dVar2 -
                               (float10)*pfVar6 * fVar19);
                fVar20 = (float10)*(float *)(iVar4 + -4 + (int)pfVar7) * fVar19 +
                         (float10)*pfVar6 * (float10)dVar2;
                *(float *)(iVar4 + -4 + (int)pfVar7) = *(float *)(iVar4 + -4 + (int)pfVar10) - fVar1
                ;
                *pfVar6 = (float)((float10)*pfVar9 - fVar20);
                *(float *)(iVar4 + -4 + (int)pfVar10) =
                     *(float *)(iVar4 + -4 + (int)pfVar10) + fVar1;
                *pfVar9 = (float)((float10)*pfVar9 + fVar20);
                pfVar6 = pfVar7;
                pfVar9 = pfVar10;
                fVar20 = (float10)dVar2;
                local_28 = local_30;
                fVar17 = fVar18;
              } while (uVar5 != 0);
            }
            uVar11 = uVar11 + local_6c;
            pfVar12 = pfVar12 + local_6c;
            pfVar8 = pfVar8 + local_6c;
          } while (uVar11 < param_1);
        }
        uVar11 = local_6c * 2;
        local_7c = local_6c;
        local_6c = uVar11;
      } while (uVar11 < param_1 || uVar11 - param_1 == 0);
    }
    if (param_2 != 0) {
      local_40 = (ulonglong)param_1;
      if (param_1 != 0) {
        pfVar8 = param_6;
        do {
          param_1 = param_1 - 1;
          *(float *)((int)pfVar8 + (param_5 - (int)param_6)) =
               *(float *)((int)pfVar8 + (param_5 - (int)param_6)) / (float)local_40;
          *pfVar8 = *pfVar8 / (float)local_40;
          pfVar8 = pfVar8 + 1;
        } while (param_1 != 0);
      }
    }
    return;
  }
  fprintf((FILE *)&_onexit_exref,s_Error_in_fft____NumSamples__u_is_362b0218,param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}

