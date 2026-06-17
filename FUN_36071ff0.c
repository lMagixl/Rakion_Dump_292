
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36071ff0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;
  int local_1c;
  float local_18;
  byte local_4;
  
  if (DAT_362cce78 == 0) {
    if (DAT_362a4190 == 0) {
      return;
    }
  }
  else {
    DAT_362a4190 = 1;
  }
  iVar6 = 1;
  DAT_362c3b48 = 1;
  puVar7 = &DAT_362c3af8;
  for (iVar5 = 7; uVar3 = DAT_362c3b04, iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *param_1;
    param_1 = param_1 + 1;
    puVar7 = puVar7 + 1;
  }
  _DAT_362c3c00 = *param_2;
  _DAT_362c3c04 = param_2[1];
  _DAT_362c3c08 = param_2[2];
  _DAT_362c3c0c = -*(float *)(param_3 + 0x18);
  _DAT_362c3c10 = -*(float *)(param_3 + 0x1c);
  _DAT_362c3c14 = -*(float *)(param_3 + 0x20);
  DAT_362c3b58 = _DAT_36223384 / (_DAT_362c3b00 - DAT_362c3afc);
  _DAT_362c3b5c = -DAT_362c3afc;
  if (DAT_362c3b4c == DAT_362c3b04) {
    if (DAT_362c3b54 != (byte *)0x0) goto LAB_360720ff;
  }
  else if (DAT_362c3b54 != (byte *)0x0) {
    FreeMemory(DAT_362c3b54);
    DAT_362c3b54 = (byte *)0x0;
  }
  DAT_362c3b54 = AllocMemory(uVar3 * 5);
  DAT_362c3b4c = uVar3;
  _DAT_362c3bec = 0;
  _DAT_362c3bf0 = 0;
  _DAT_362c3bfc = 0;
  _DAT_362c3bf8 = 0;
  iVar6 = 0;
LAB_360720ff:
  fVar4 = DAT_362c3b10;
  iVar5 = DAT_362c3b0c;
  DAT_362c3b60 = DAT_362c3b08 & 0xff;
  local_1c = 0;
  if (0 < (int)uVar3) {
    fVar2 = _DAT_362c3b00 - DAT_362c3afc;
    do {
      local_18 = 0.0;
      fVar1 = ((float)local_1c / (float)(int)uVar3) * fVar2 * fVar4;
      if (iVar5 == 0) {
        if (fVar1 < _DAT_3622376c) {
          local_18 = 0.0;
        }
        else {
          local_18 = fVar1;
          if (fVar1 < _DAT_36223384 == (fVar1 == _DAT_36223384)) {
            local_18 = 1.0;
          }
        }
      }
      else if (iVar5 == 1) {
        fVar8 = ROUND((float10)1.4426950408889634 * -(float10)fVar1);
        fVar9 = (float10)f2xm1((float10)1.4426950408889634 * -(float10)fVar1 - fVar8);
        fVar8 = (float10)fscale((float10)1 + fVar9,fVar8);
        local_18 = (float)((float10)_DAT_36223384 - fVar8);
      }
      else if (iVar5 == 2) {
        fVar9 = (float10)1.4426950408889634 * -((float10)fVar1 * (float10)fVar1);
        fVar8 = ROUND(fVar9);
        fVar9 = (float10)f2xm1(fVar9 - fVar8);
        fVar8 = (float10)fscale((float10)1 + fVar9,fVar8);
        local_18 = (float)((float10)_DAT_36223384 - fVar8);
      }
      local_4 = (byte)(int)ROUND(local_18 * 255.0);
      DAT_362c3b54[local_1c] = local_4;
      local_1c = local_1c + 1;
    } while (local_1c < (int)uVar3);
  }
  iVar5 = 1;
  if (1 < (int)uVar3) {
    do {
      if ((DAT_362c3b54[iVar5] * DAT_362c3b60 & 0xffffff00) != 0) break;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar3);
  }
  _DAT_362c3b50 = (float)(iVar5 + -1) / (float)(int)(uVar3 - 1);
  _DAT_362c3bf4 = 1;
  iVar5 = FUN_36071f30(DAT_362c3b54,DAT_362c3b4c);
  if (DAT_362c3b68 != iVar5) {
    iVar6 = 0;
    DAT_362c3b68 = iVar5;
  }
  (*DAT_362c4680)(0x52,0x52);
  FUN_3607b9d0((undefined4 *)&DAT_362c3b64,(int *)&DAT_362c3bec);
  FUN_3607bbd0((int)(DAT_362c3b54 + DAT_362c3b4c),DAT_362c3b4c,1,iVar5,iVar6);
  return;
}

