
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_361143b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_1c;
  int local_8;
  int local_4;
  
  local_4 = FUN_3611f380((undefined4 *)(*(int *)(param_1 + 0xd90) + 0x28));
  piVar4 = *(int **)(*(int *)(param_1 + 0xd8c) + 0x664);
  if (piVar4 == (int *)(*(int *)(param_1 + 0xd8c) + 0x318)) {
    iVar11 = 0;
    if (3 < local_4) {
      iVar15 = 0;
      iVar16 = (local_4 - 4U >> 2) + 1;
      iVar11 = iVar16 * 4;
      do {
        iVar13 = *(int *)(*(int *)(param_1 + 0xd90) + 0x2c);
        fVar1 = *(float *)(iVar13 + iVar15);
        iVar13 = iVar13 + iVar15;
        fVar2 = *(float *)(iVar13 + 4);
        fVar3 = *(float *)(iVar13 + 8);
        *(float *)(iVar13 + 0x34) =
             fVar2 * (float)piVar4[0x2d] + fVar3 * (float)piVar4[0x2e] + fVar1 * (float)piVar4[0x2c]
        ;
        *(float *)(iVar13 + 0x38) =
             fVar1 * (float)piVar4[0x2f] + fVar2 * (float)piVar4[0x30] + fVar3 * (float)piVar4[0x31]
        ;
        fVar1 = fVar1 * (float)piVar4[0x32] +
                fVar2 * (float)piVar4[0x33] + fVar3 * (float)piVar4[0x34];
        *(float *)(iVar13 + 0x3c) = fVar1;
        fVar1 = (float)piVar4[0x47] * *(float *)(iVar13 + 0x34) +
                fVar1 * (float)piVar4[0x49] + *(float *)(iVar13 + 0x38) * (float)piVar4[0x48] +
                *(float *)(iVar13 + 0xc);
        *(float *)(iVar13 + 0x40) = fVar1;
        *(uint *)(iVar13 + 0x74) = (uint)(fVar1 < _DAT_362280fc);
        iVar13 = *(int *)(*(int *)(param_1 + 0xd90) + 0x2c);
        fVar1 = *(float *)(iVar13 + 0x78 + iVar15);
        iVar13 = iVar13 + 0x78 + iVar15;
        fVar2 = *(float *)(iVar13 + 4);
        fVar3 = *(float *)(iVar13 + 8);
        *(float *)(iVar13 + 0x34) =
             fVar2 * (float)piVar4[0x2d] + fVar3 * (float)piVar4[0x2e] + fVar1 * (float)piVar4[0x2c]
        ;
        *(float *)(iVar13 + 0x38) =
             fVar1 * (float)piVar4[0x2f] + fVar2 * (float)piVar4[0x30] + fVar3 * (float)piVar4[0x31]
        ;
        fVar1 = fVar1 * (float)piVar4[0x32] +
                fVar2 * (float)piVar4[0x33] + fVar3 * (float)piVar4[0x34];
        *(float *)(iVar13 + 0x3c) = fVar1;
        fVar1 = (float)piVar4[0x47] * *(float *)(iVar13 + 0x34) +
                fVar1 * (float)piVar4[0x49] + *(float *)(iVar13 + 0x38) * (float)piVar4[0x48] +
                *(float *)(iVar13 + 0xc);
        *(float *)(iVar13 + 0x40) = fVar1;
        *(uint *)(iVar13 + 0x74) = (uint)(fVar1 < _DAT_362280fc);
        iVar14 = *(int *)(*(int *)(param_1 + 0xd90) + 0x2c);
        iVar13 = iVar15 + 0x168;
        fVar1 = *(float *)(iVar14 + -0x78 + iVar13);
        iVar14 = iVar14 + -0x78 + iVar13;
        fVar2 = *(float *)(iVar14 + 4);
        fVar3 = *(float *)(iVar14 + 8);
        *(float *)(iVar14 + 0x34) =
             fVar2 * (float)piVar4[0x2d] + fVar3 * (float)piVar4[0x2e] + fVar1 * (float)piVar4[0x2c]
        ;
        *(float *)(iVar14 + 0x38) =
             fVar1 * (float)piVar4[0x2f] + fVar2 * (float)piVar4[0x30] + fVar3 * (float)piVar4[0x31]
        ;
        fVar1 = fVar1 * (float)piVar4[0x32] +
                fVar2 * (float)piVar4[0x33] + fVar3 * (float)piVar4[0x34];
        *(float *)(iVar14 + 0x3c) = fVar1;
        fVar1 = (float)piVar4[0x47] * *(float *)(iVar14 + 0x34) +
                fVar1 * (float)piVar4[0x49] + *(float *)(iVar14 + 0x38) * (float)piVar4[0x48] +
                *(float *)(iVar14 + 0xc);
        *(float *)(iVar14 + 0x40) = fVar1;
        *(uint *)(iVar14 + 0x74) = (uint)(fVar1 < _DAT_362280fc);
        iVar14 = *(int *)(*(int *)(param_1 + 0xd90) + 0x2c);
        fVar1 = *(float *)(iVar14 + iVar13);
        iVar14 = iVar14 + iVar13;
        fVar2 = *(float *)(iVar14 + 4);
        fVar3 = *(float *)(iVar14 + 8);
        *(float *)(iVar14 + 0x34) =
             fVar2 * (float)piVar4[0x2d] + fVar3 * (float)piVar4[0x2e] + fVar1 * (float)piVar4[0x2c]
        ;
        *(float *)(iVar14 + 0x38) =
             fVar1 * (float)piVar4[0x2f] + fVar2 * (float)piVar4[0x30] + fVar3 * (float)piVar4[0x31]
        ;
        fVar1 = fVar1 * (float)piVar4[0x32] +
                fVar2 * (float)piVar4[0x33] + fVar3 * (float)piVar4[0x34];
        *(float *)(iVar14 + 0x3c) = fVar1;
        fVar1 = (float)piVar4[0x47] * *(float *)(iVar14 + 0x34) +
                fVar1 * (float)piVar4[0x49] + *(float *)(iVar14 + 0x38) * (float)piVar4[0x48] +
                *(float *)(iVar14 + 0xc);
        *(float *)(iVar14 + 0x40) = fVar1;
        iVar15 = iVar15 + 0x1e0;
        iVar16 = iVar16 + -1;
        *(uint *)(iVar14 + 0x74) = (uint)(fVar1 < _DAT_362280fc);
      } while (iVar16 != 0);
    }
    if (iVar11 < local_4) {
      iVar15 = iVar11 * 0x78;
      iVar11 = local_4 - iVar11;
      do {
        iVar16 = *(int *)(*(int *)(param_1 + 0xd90) + 0x2c);
        fVar1 = *(float *)(iVar16 + iVar15);
        iVar16 = iVar16 + iVar15;
        fVar2 = *(float *)(iVar16 + 4);
        fVar3 = *(float *)(iVar16 + 8);
        *(float *)(iVar16 + 0x34) =
             fVar2 * (float)piVar4[0x2d] + fVar3 * (float)piVar4[0x2e] + fVar1 * (float)piVar4[0x2c]
        ;
        *(float *)(iVar16 + 0x38) =
             fVar1 * (float)piVar4[0x2f] + fVar2 * (float)piVar4[0x30] + fVar3 * (float)piVar4[0x31]
        ;
        fVar1 = fVar1 * (float)piVar4[0x32] +
                fVar2 * (float)piVar4[0x33] + fVar3 * (float)piVar4[0x34];
        *(float *)(iVar16 + 0x3c) = fVar1;
        fVar1 = (float)piVar4[0x47] * *(float *)(iVar16 + 0x34) +
                fVar1 * (float)piVar4[0x49] + *(float *)(iVar16 + 0x38) * (float)piVar4[0x48] +
                *(float *)(iVar16 + 0xc);
        *(float *)(iVar16 + 0x40) = fVar1;
        iVar15 = iVar15 + 0x78;
        iVar11 = iVar11 + -1;
        *(uint *)(iVar16 + 0x74) = (uint)(fVar1 < _DAT_362280fc);
      } while (iVar11 != 0);
    }
  }
  else {
    if (local_4 < 1) {
      return;
    }
    local_1c = 0;
    local_8 = local_4;
    do {
      iVar11 = *(int *)(*(int *)(param_1 + 0xd90) + 0x2c) + local_1c;
      (**(code **)(*piVar4 + 0x34))(iVar11,iVar11 + 0x34);
      uVar12 = (**(code **)(*piVar4 + 0x3c))(iVar11 + 0x34);
      *(undefined4 *)(iVar11 + 0x74) = uVar12;
      local_1c = local_1c + 0x78;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  if (0 < local_4) {
    iVar11 = 0;
    do {
      iVar15 = *(int *)(*(int *)(param_1 + 0xd90) + 0x2c) + iVar11;
      (**(code **)(*piVar4 + 0x48))(iVar15 + 0x34,iVar15 + 0x68);
      fVar1 = *(float *)(iVar15 + 0x10);
      fVar2 = *(float *)(iVar15 + 0x14);
      fVar5 = *(float *)(iVar15 + 0x1c);
      fVar3 = *(float *)(iVar15 + 0x18);
      fVar6 = *(float *)(iVar15 + 0x24);
      fVar7 = *(float *)(iVar15 + 0x20);
      fVar8 = *(float *)(iVar15 + 0x28);
      fVar9 = *(float *)(iVar15 + 0x2c);
      fVar10 = *(float *)(iVar15 + 0x30);
      *(float *)(iVar15 + 0x44) =
           fVar2 * (float)piVar4[0x2d] + fVar3 * (float)piVar4[0x2e] + fVar1 * (float)piVar4[0x2c] +
           (float)piVar4[0x47];
      *(float *)(iVar15 + 0x48) =
           fVar1 * (float)piVar4[0x2f] + fVar2 * (float)piVar4[0x30] + fVar3 * (float)piVar4[0x31] +
           (float)piVar4[0x48];
      *(float *)(iVar15 + 0x4c) =
           fVar1 * (float)piVar4[0x32] + fVar2 * (float)piVar4[0x33] + fVar3 * (float)piVar4[0x34] +
           (float)piVar4[0x49];
      *(float *)(iVar15 + 0x50) =
           fVar7 * (float)piVar4[0x2d] + fVar6 * (float)piVar4[0x2e] + fVar5 * (float)piVar4[0x2c];
      *(float *)(iVar15 + 0x54) =
           fVar5 * (float)piVar4[0x2f] + fVar7 * (float)piVar4[0x30] + fVar6 * (float)piVar4[0x31];
      *(float *)(iVar15 + 0x58) =
           fVar5 * (float)piVar4[0x32] + fVar7 * (float)piVar4[0x33] + fVar6 * (float)piVar4[0x34];
      iVar11 = iVar11 + 0x78;
      local_4 = local_4 + -1;
      *(float *)(iVar15 + 0x5c) =
           fVar9 * (float)piVar4[0x2d] + fVar10 * (float)piVar4[0x2e] + fVar8 * (float)piVar4[0x2c];
      *(float *)(iVar15 + 0x60) =
           fVar8 * (float)piVar4[0x2f] + fVar9 * (float)piVar4[0x30] + fVar10 * (float)piVar4[0x31];
      *(float *)(iVar15 + 100) =
           fVar8 * (float)piVar4[0x32] + fVar9 * (float)piVar4[0x33] + fVar10 * (float)piVar4[0x34];
    } while (local_4 != 0);
  }
  return;
}

