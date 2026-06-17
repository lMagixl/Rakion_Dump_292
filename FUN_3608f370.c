
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3608f370(byte param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float local_84 [4];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  FUN_3608d7d0(local_54,param_4);
  fVar1 = *param_3;
  fVar2 = param_3[4];
  fVar3 = param_3[8];
  local_20 = param_3[1];
  local_1c = param_3[2];
  local_14 = param_3[5];
  local_10 = param_3[6];
  _DAT_362c99a4 = param_4[3];
  local_8 = param_3[9];
  _DAT_362c99a8 = param_4[7];
  local_4 = param_3[10];
  _DAT_362c99ac = param_4[0xb];
  local_58 = _DAT_362c99ac;
  local_60 = _DAT_362c99a4;
  iVar5 = *(int *)(param_2 + 0x658);
  DAT_362c998c = -*(float *)(iVar5 + 0x110);
  local_5c = _DAT_362c99a8;
  DAT_362c9990 = -*(float *)(iVar5 + 0x114);
  DAT_362c9994 = -*(float *)(iVar5 + 0x118);
  DAT_362c9998 = DAT_362c998c * local_54[0] +
                 local_54[1] * DAT_362c9990 + local_54[2] * DAT_362c9994;
  DAT_362c999c = local_44 * DAT_362c998c + local_40 * DAT_362c9990 + local_3c * DAT_362c9994;
  DAT_362c99a0 = local_34 * DAT_362c998c + local_30 * DAT_362c9990 + local_2c * DAT_362c9994;
  if ((param_1 & 2) != 0) {
    iVar4 = *(int *)(param_2 + 0x658);
    DAT_362c9770 = (_DAT_362c99ac - *(float *)(iVar4 + 0x48)) * DAT_362c9994 +
                   (_DAT_362c99a8 - *(float *)(iVar4 + 0x44)) * DAT_362c9990 +
                   -DAT_362c3afc + (_DAT_362c99a4 - *(float *)(iVar4 + 0x40)) * DAT_362c998c;
  }
  if ((param_1 & 1) != 0) {
    local_84[0] = fVar1;
    local_84[3] = param_3[1];
    local_84[1] = fVar2;
    local_74 = param_3[5];
    local_84[2] = fVar3;
    local_70 = param_3[9];
    local_6c = param_3[2];
    local_68 = param_3[6];
    local_64 = param_3[10];
    pfVar6 = local_84;
    pfVar7 = local_54;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
    local_60 = (local_54[1] + local_54[0]) * _DAT_3622376c - local_54[2] * _DAT_36223384;
    DAT_362c99b0 = local_60;
    local_5c = (local_44 + local_54[3]) * _DAT_3622376c - local_40 * _DAT_36223384;
    DAT_362c99b4 = local_5c;
    local_58 = (local_38 + local_3c) * _DAT_3622376c - local_34 * _DAT_36223384;
    DAT_362c99b8 = local_58;
    local_54[0] = *(float *)(iVar5 + 0xf8);
    local_54[1] = (float)*(undefined4 *)(iVar5 + 0x104);
    local_54[2] = (float)*(undefined4 *)(iVar5 + 0x110);
    local_54[3] = (float)*(undefined4 *)(iVar5 + 0xfc);
    local_44 = (float)*(undefined4 *)(iVar5 + 0x108);
    local_40 = (float)*(undefined4 *)(iVar5 + 0x114);
    local_3c = (float)*(undefined4 *)(iVar5 + 0x100);
    local_38 = (float)*(undefined4 *)(iVar5 + 0x10c);
    local_34 = (float)*(undefined4 *)(iVar5 + 0x118);
    pfVar6 = local_54;
    pfVar7 = local_84;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
    local_54[0] = local_84[0] * fVar1 + local_84[1] * fVar2 + local_84[2] * fVar3;
    local_54[1] = local_84[0] * local_20 + local_84[1] * local_14 + local_84[2] * local_8;
    local_54[2] = local_84[0] * local_1c + local_84[1] * local_10 + local_84[2] * local_4;
    local_54[3] = local_84[3] * fVar1 + local_74 * fVar2 + local_70 * fVar3;
    local_44 = local_84[3] * local_20 + local_74 * local_14 + local_70 * local_8;
    local_40 = local_84[3] * local_1c + local_74 * local_10 + local_70 * local_4;
    local_3c = local_6c * fVar1 + local_68 * fVar2 + local_64 * fVar3;
    local_38 = local_6c * local_20 + local_68 * local_14 + local_64 * local_8;
    local_34 = local_6c * local_1c + local_68 * local_10 + local_64 * local_4;
    pfVar6 = local_54;
    pfVar7 = local_84;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
    local_54[0] = local_84[0];
    local_54[2] = local_6c;
    local_54[1] = local_84[3];
    local_44 = local_74;
    local_54[3] = local_84[1];
    local_3c = local_84[2];
    local_40 = local_68;
    local_34 = local_64;
    local_38 = local_70;
    pfVar6 = local_54;
    pfVar7 = local_84;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
    DAT_362c99bc = local_84[0] * _DAT_362c3bd4 +
                   local_84[1] * _DAT_362c3bd8 + local_84[2] * _DAT_362c3bdc;
    DAT_362c99c0 = local_84[3] * _DAT_362c3bd4 + local_74 * _DAT_362c3bd8 + local_70 * _DAT_362c3bdc
    ;
    DAT_362c99c4 = local_6c * _DAT_362c3bd4 + local_68 * _DAT_362c3bd8 + local_64 * _DAT_362c3bdc;
    iVar5 = *(int *)(param_2 + 0x658);
    DAT_362c9778 = (_DAT_362c99ac - *(float *)(iVar5 + 0x48)) * DAT_362c9994 +
                   (_DAT_362c99a8 - *(float *)(iVar5 + 0x44)) * DAT_362c9990 +
                   (_DAT_362c99a4 - *(float *)(iVar5 + 0x40)) * DAT_362c998c;
    DAT_362c9774 = _DAT_362c3bd8 * _DAT_362c99a8 +
                   _DAT_362c3bdc * _DAT_362c99ac + _DAT_362c3bd4 * _DAT_362c99a4 + DAT_362c3b84;
    return;
  }
  return;
}

