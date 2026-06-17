
void __fastcall FUN_36117740(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xd8c) + 0x664);
  uVar5 = FUN_3611f460(param_1 + 0xe08);
  *(undefined4 *)(param_1 + 0xd78) = uVar5;
  *(undefined4 *)(*(int *)(param_1 + 0xd90) + 0xbc) = uVar5;
  iVar6 = FUN_3611f370((undefined4 *)(*(int *)(param_1 + 0xd90) + 0x20));
  iVar7 = FUN_36121bf0((void *)(param_1 + 0xe08),iVar6);
  if (0 < iVar6) {
    iVar9 = 0;
    pfVar8 = (float *)(iVar7 + 8);
    do {
      iVar7 = *(int *)(*(int *)(param_1 + 0xd90) + 0x24);
      fVar1 = *(float *)(iVar7 + iVar9);
      iVar7 = iVar7 + iVar9;
      fVar2 = *(float *)(iVar7 + 4);
      iVar9 = iVar9 + 0xc;
      fVar3 = *(float *)(iVar7 + 8);
      iVar6 = iVar6 + -1;
      pfVar8[-2] = fVar2 * *(float *)(iVar4 + 0xb4) +
                   fVar3 * *(float *)(iVar4 + 0xb8) + fVar1 * *(float *)(iVar4 + 0xb0) +
                   *(float *)(iVar4 + 0x11c);
      pfVar8[-1] = fVar1 * *(float *)(iVar4 + 0xbc) +
                   fVar2 * *(float *)(iVar4 + 0xc0) + fVar3 * *(float *)(iVar4 + 0xc4) +
                   *(float *)(iVar4 + 0x120);
      *pfVar8 = fVar1 * *(float *)(iVar4 + 200) +
                fVar2 * *(float *)(iVar4 + 0xcc) + fVar3 * *(float *)(iVar4 + 0xd0) +
                *(float *)(iVar4 + 0x124);
      pfVar8[2] = 0.0;
      pfVar8 = pfVar8 + 7;
    } while (iVar6 != 0);
  }
  return;
}

