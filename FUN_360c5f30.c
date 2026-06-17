
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360c5f30(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_362cbbe4;
  iVar4 = DAT_362cbbe0;
  iVar5 = DAT_362cbbdc;
  iVar7 = DAT_362cbbd8;
  if (DAT_362cbbec == 0) {
    iVar7 = param_1 * 4;
    fVar1 = (float)(int)*(char *)(iVar7 + DAT_362cbbe4);
    fVar2 = fVar1;
    if ((_DAT_362cbbe8 != _DAT_3622376c) &&
       (fVar2 = (float)(int)*(char *)(iVar7 + DAT_362cbbdc), _DAT_362cbbe8 != _DAT_36223384)) {
      fVar2 = ((float)(int)*(char *)(iVar7 + DAT_362cbbdc) - fVar1) * _DAT_362cbbe8 + fVar1;
    }
    *param_2 = (fVar2 - _DAT_362cbbfc) * _DAT_362cbbf0;
    fVar3 = (float)(int)*(char *)(iVar7 + 1 + iVar5);
    fVar1 = (float)(int)*(char *)(iVar7 + 1 + iVar6);
    fVar2 = fVar1;
    if ((_DAT_362cbbe8 != _DAT_3622376c) && (fVar2 = fVar3, _DAT_362cbbe8 != _DAT_36223384)) {
      fVar2 = (fVar3 - fVar1) * _DAT_362cbbe8 + fVar1;
    }
    param_2[1] = (fVar2 - _DAT_362cbc00) * _DAT_362cbbf4;
    iVar5 = (int)*(char *)(iVar7 + 2 + iVar5);
    iVar7 = (int)*(char *)(iVar7 + 2 + iVar6);
  }
  else {
    iVar6 = param_1 * 8;
    fVar1 = (float)(int)*(short *)(iVar6 + DAT_362cbbe0);
    fVar2 = fVar1;
    if ((_DAT_362cbbe8 != _DAT_3622376c) &&
       (fVar2 = (float)(int)*(short *)(iVar6 + DAT_362cbbd8), _DAT_362cbbe8 != _DAT_36223384)) {
      fVar2 = ((float)(int)*(short *)(iVar6 + DAT_362cbbd8) - fVar1) * _DAT_362cbbe8 + fVar1;
    }
    *param_2 = (fVar2 - _DAT_362cbbfc) * _DAT_362cbbf0;
    fVar3 = (float)(int)*(short *)(iVar6 + 2 + iVar7);
    fVar1 = (float)(int)*(short *)(iVar6 + 2 + iVar4);
    fVar2 = fVar1;
    if ((_DAT_362cbbe8 != _DAT_3622376c) && (fVar2 = fVar3, _DAT_362cbbe8 != _DAT_36223384)) {
      fVar2 = (fVar3 - fVar1) * _DAT_362cbbe8 + fVar1;
    }
    param_2[1] = (fVar2 - _DAT_362cbc00) * _DAT_362cbbf4;
    iVar5 = (int)*(short *)(iVar6 + 4 + iVar7);
    iVar7 = (int)*(short *)(iVar6 + 4 + iVar4);
  }
  fVar2 = (float)iVar5;
  fVar1 = (float)iVar7;
  if (_DAT_362cbbe8 != _DAT_3622376c) {
    if (_DAT_362cbbe8 != _DAT_36223384) {
      fVar2 = (fVar2 - fVar1) * _DAT_362cbbe8 + fVar1;
    }
    param_2[2] = (fVar2 - _DAT_362cbc04) * _DAT_362cbbf8;
    return;
  }
  param_2[2] = (fVar1 - _DAT_362cbc04) * _DAT_362cbbf8;
  return;
}

