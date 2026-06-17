
/* WARNING: Removing unreachable block (ram,0x36099724) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360995a0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 fVar13;
  ulonglong uVar14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = *(float *)(param_1 + 8);
  local_c = *(float *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x2c) + -1;
  *(int *)(param_1 + 0x2c) = iVar3;
  uVar2 = DAT_362c9c68;
  iVar1 = DAT_362c9c60;
  if (iVar3 == 0) {
    local_8 = 0;
    if (_DAT_3622376c < *(float *)(param_1 + 0x28)) {
      do {
        uVar4 = DAT_362c9c58 * 0x40003;
        local_8 = local_8 + 5 + (uVar4 >> 0x10) % 5;
        fVar6 = (float10)local_8;
        if (local_8 < 0) {
          fVar6 = fVar6 + (float10)_DAT_362265a8;
        }
        if (fVar6 < (float10)*(float *)(param_1 + 0x28)) {
          uVar4 = DAT_362c9c58 * 0x180009;
          iVar3 = (uVar4 >> 0x10) % 0xb - 5;
          fVar7 = (float10)iVar3 * (float10)*(float *)(param_1 + 0x20) +
                  fVar6 * (float10)*(float *)(param_1 + 0x18) + (float10)*(float *)(param_1 + 8);
          fVar8 = (float10)iVar3 * (float10)*(float *)(param_1 + 0x24) +
                  (float10)(float)(fVar6 * (float10)*(float *)(param_1 + 0x1c) +
                                  (float10)*(float *)(param_1 + 0xc));
        }
        else {
          fVar7 = (float10)*(float *)(param_1 + 0x10);
          fVar8 = (float10)*(float *)(param_1 + 0x14);
        }
        fVar9 = fVar7 - (float10)local_10;
        fVar10 = ABS((float10)(float)fVar9);
        if (fVar10 <= (float10)ABS((float)(fVar8 - (float10)local_c))) {
          fVar10 = (float10)ABS((float)(fVar8 - (float10)local_c));
        }
        fVar11 = (float10)_DAT_36223384 / fVar10;
        DAT_362c9c58 = uVar4;
        if ((float10)_DAT_3622376c < fVar10) {
          fVar12 = (float10)local_10;
          do {
            fVar6 = fVar8;
            uVar14 = FUN_361bfd6c();
            iVar3 = (int)uVar14 * DAT_362c9c70;
            fVar13 = extraout_ST1;
            fVar8 = fVar12;
            fVar7 = fVar10;
            uVar14 = FUN_361bfd6c();
            uVar5 = iVar3 + (int)uVar14 & uVar2;
            uVar4 = *(byte *)(iVar1 + uVar5) + 0xff;
            if (0xff < uVar4) {
              uVar4 = 0xff;
            }
            *(char *)(iVar1 + uVar5) = (char)uVar4;
            fVar12 = (float10)(float)((float10)(float)fVar9 * fVar11) + extraout_ST1_00;
            fVar10 = fVar13 - (float10)_DAT_36223384;
          } while ((float10)_DAT_3622376c < fVar10);
        }
        local_10 = (float)fVar7;
        local_c = (float)fVar8;
      } while (fVar6 < (float10)*(float *)(param_1 + 0x28));
    }
    *(undefined4 *)(param_1 + 0x2c) = 2;
  }
  return;
}

