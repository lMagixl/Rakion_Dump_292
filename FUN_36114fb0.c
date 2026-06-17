
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36114fb0(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_c;
  undefined4 uStack_8;
  
  if (*(int *)(*(int *)(param_1 + 0xd8c) + 0x664) == *(int *)(param_1 + 0xd8c) + 0x318) {
    iVar6 = *(int *)(*(int *)(param_1 + 0xd8c) + 0x664);
    _DAT_362fa9a4 = *(float *)(iVar6 + 0x128);
    _DAT_362fa9a0 = *(float *)(iVar6 + 300);
    _DAT_362fa99c = *(float *)(iVar6 + 0x18c);
    _DAT_362fa998 = *(float *)(iVar6 + 400);
    iVar2 = FUN_3611f460(param_1 + 0xe08);
    iVar6 = *(int *)(param_1 + 0xd78);
    if (3 < iVar2 - iVar6) {
      iVar4 = iVar6 * 0x1c;
      iVar5 = ((iVar2 - iVar6) - 4U >> 2) + 1;
      iVar6 = iVar6 + iVar5 * 4;
      do {
        fVar1 = _DAT_36223384 / *(float *)(*(int *)(param_1 + 0xe0c) + 8 + iVar4);
        pfVar3 = (float *)(*(int *)(param_1 + 0xe0c) + iVar4);
        pfVar3[5] = _DAT_362fa99c * *pfVar3 * fVar1 + _DAT_362fa9a4;
        pfVar3[6] = _DAT_362fa9a0 - _DAT_362fa998 * pfVar3[1] * fVar1;
        pfVar3 = (float *)(iVar4 + 0x1c + *(int *)(param_1 + 0xe0c));
        fVar1 = _DAT_36223384 / pfVar3[2];
        pfVar3[5] = _DAT_362fa99c * *pfVar3 * fVar1 + _DAT_362fa9a4;
        pfVar3[6] = _DAT_362fa9a0 - _DAT_362fa998 * pfVar3[1] * fVar1;
        pfVar3 = (float *)(iVar4 + 0x38 + *(int *)(param_1 + 0xe0c));
        fVar1 = _DAT_36223384 / pfVar3[2];
        pfVar3[5] = _DAT_362fa99c * *pfVar3 * fVar1 + _DAT_362fa9a4;
        pfVar3[6] = _DAT_362fa9a0 - _DAT_362fa998 * pfVar3[1] * fVar1;
        pfVar3 = (float *)(*(int *)(param_1 + 0xe0c) + iVar4 + 0x54);
        iVar5 = iVar5 + -1;
        fVar1 = _DAT_36223384 / pfVar3[2];
        pfVar3[5] = _DAT_362fa99c * *pfVar3 * fVar1 + _DAT_362fa9a4;
        pfVar3[6] = _DAT_362fa9a0 - _DAT_362fa998 * pfVar3[1] * fVar1;
        iVar4 = iVar4 + 0x70;
      } while (iVar5 != 0);
    }
    if (iVar6 < iVar2) {
      iVar4 = iVar6 * 0x1c;
      iVar2 = iVar2 - iVar6;
      do {
        fVar1 = _DAT_36223384 / *(float *)(*(int *)(param_1 + 0xe0c) + 8 + iVar4);
        pfVar3 = (float *)(*(int *)(param_1 + 0xe0c) + iVar4);
        iVar4 = iVar4 + 0x1c;
        iVar2 = iVar2 + -1;
        pfVar3[5] = _DAT_362fa99c * *pfVar3 * fVar1 + _DAT_362fa9a4;
        pfVar3[6] = _DAT_362fa9a0 - _DAT_362fa998 * pfVar3[1] * fVar1;
      } while (iVar2 != 0);
      return;
    }
  }
  else {
    iVar2 = FUN_3611f460(param_1 + 0xe08);
    iVar6 = *(int *)(param_1 + 0xd78);
    if (iVar6 < iVar2) {
      iVar4 = iVar6 * 0x1c;
      iVar2 = iVar2 - iVar6;
      do {
        iVar6 = *(int *)(param_1 + 0xe0c) + iVar4;
        (**(code **)(**(int **)(*(int *)(param_1 + 0xd8c) + 0x664) + 0x24))(iVar6,&local_c);
        *(undefined4 *)(iVar6 + 0x14) = local_c;
        iVar4 = iVar4 + 0x1c;
        iVar2 = iVar2 + -1;
        *(undefined4 *)(iVar6 + 0x18) = uStack_8;
      } while (iVar2 != 0);
    }
  }
  return;
}

