
void __fastcall FUN_360ce6b0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  
  pfVar6 = (float *)(param_1 + 0x98);
  *(float *)(param_1 + 0x124) =
       *pfVar6 * *(float *)(param_1 + 0x38) +
       *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0xa4) +
       *(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x128) =
       *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x48) +
       *(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0x54) +
       *pfVar6 * *(float *)(param_1 + 0x3c);
  *(float *)(param_1 + 300) =
       *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x4c) +
       *(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0x58) +
       *pfVar6 * *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x130) =
       *(float *)(param_1 + 0xb4) * *(float *)(param_1 + 0x50) +
       *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0xa8) +
       *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x9c);
  *(float *)(param_1 + 0x134) =
       *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0x3c) +
       *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x48) +
       *(float *)(param_1 + 0xb4) * *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x138) =
       *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0x40) +
       *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x4c) +
       *(float *)(param_1 + 0xb4) * *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x13c) =
       *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0x44) +
       *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0xa0) +
       *(float *)(param_1 + 0xb8) * *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x140) =
       *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0x48) +
       *(float *)(param_1 + 0xb8) * *(float *)(param_1 + 0x54) +
       *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0xa0);
  *(float *)(param_1 + 0x144) =
       *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0x4c) +
       *(float *)(param_1 + 0xb8) * *(float *)(param_1 + 0x58) +
       *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0xa0);
  fVar2 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x8c);
  fVar3 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x90);
  fVar4 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x94);
  *(float *)(param_1 + 0x118) =
       fVar2 * *pfVar6 + fVar4 * *(float *)(param_1 + 0xb0) + fVar3 * *(float *)(param_1 + 0xa4);
  *(float *)(param_1 + 0x11c) =
       fVar4 * *(float *)(param_1 + 0xb4) +
       fVar3 * *(float *)(param_1 + 0xa8) + fVar2 * *(float *)(param_1 + 0x9c);
  *(float *)(param_1 + 0x120) =
       fVar4 * *(float *)(param_1 + 0xb8) +
       fVar3 * *(float *)(param_1 + 0xac) + fVar2 * *(float *)(param_1 + 0xa0);
  *(float *)(param_1 + 0x154) =
       *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0xd4) +
       *(float *)(param_1 + 200) * *(float *)(param_1 + 0x68) +
       *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0x80);
  *(float *)(param_1 + 0x158) =
       *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0x78) +
       *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0x84) +
       *(float *)(param_1 + 200) * *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 0x15c) =
       *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0x7c) +
       *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0x88) +
       *(float *)(param_1 + 200) * *(float *)(param_1 + 0x70);
  *(float *)(param_1 + 0x160) =
       *(float *)(param_1 + 0xe4) * *(float *)(param_1 + 0x80) +
       *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0xd8) +
       *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 0x164) =
       *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0x6c) +
       *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0x78) +
       *(float *)(param_1 + 0xe4) * *(float *)(param_1 + 0x84);
  *(float *)(param_1 + 0x168) =
       *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0x70) +
       *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0x7c) +
       *(float *)(param_1 + 0xe4) * *(float *)(param_1 + 0x88);
  *(float *)(param_1 + 0x16c) =
       *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0x74) +
       *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0xd0) +
       *(float *)(param_1 + 0xe8) * *(float *)(param_1 + 0x80);
  *(float *)(param_1 + 0x170) =
       *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0x78) +
       *(float *)(param_1 + 0xe8) * *(float *)(param_1 + 0x84) +
       *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0xd0);
  *(float *)(param_1 + 0x174) =
       *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0x7c) +
       *(float *)(param_1 + 0xe8) * *(float *)(param_1 + 0x88) +
       *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0xd0);
  fVar2 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0xbc);
  fVar3 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0xc0);
  fVar4 = *(float *)(param_1 + 100) - *(float *)(param_1 + 0xc4);
  *(float *)(param_1 + 0x148) =
       fVar2 * *(float *)(param_1 + 200) +
       fVar4 * *(float *)(param_1 + 0xe0) + fVar3 * *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0x14c) =
       fVar4 * *(float *)(param_1 + 0xe4) +
       fVar3 * *(float *)(param_1 + 0xd8) + fVar2 * *(float *)(param_1 + 0xcc);
  *(float *)(param_1 + 0x150) =
       fVar4 * *(float *)(param_1 + 0xe8) +
       fVar3 * *(float *)(param_1 + 0xdc) + fVar2 * *(float *)(param_1 + 0xd0);
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  pfVar7 = (float *)(param_1 + 0x184);
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x178) = uVar1;
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x94);
  FUN_360cdfe0(param_1);
  return;
}

