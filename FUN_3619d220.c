
void __thiscall FUN_3619d220(void *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  
  puVar2 = (uint *)(*(int *)((int)this + 0x28) + param_1 * 4);
  uVar3 = *puVar2;
  puVar15 = (uint *)(param_1 * 0x20 + *(int *)((int)this + 0x20));
  uVar12 = rand_();
  *puVar2 = uVar12;
  iVar14 = *(int *)((int)this + 0x38) + 1;
  *(int *)((int)this + 0x38) = iVar14;
  if (iVar14 == -1) {
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  uVar4 = *puVar15;
  *puVar15 = uVar4 ^ uVar3 ^ uVar12;
  uVar5 = puVar15[1];
  puVar15[1] = uVar5 ^ uVar3 ^ uVar12;
  uVar6 = puVar15[2];
  puVar15[2] = uVar6 ^ uVar3 ^ uVar12;
  uVar7 = puVar15[3];
  puVar15[3] = uVar7 ^ uVar3 ^ uVar12;
  uVar8 = puVar15[4];
  puVar15[4] = uVar8 ^ uVar3 ^ uVar12;
  uVar9 = puVar15[5];
  puVar15[5] = uVar9 ^ uVar3 ^ uVar12;
  uVar10 = puVar15[6];
  puVar15[6] = uVar10 ^ uVar3 ^ uVar12;
  uVar11 = puVar15[7];
  puVar15[7] = uVar11 ^ uVar3 ^ uVar12;
  piVar13 = *(int **)((int)this + 0x24);
  if ((uVar4 ^ uVar3) + (uVar5 ^ uVar3) + (uVar6 ^ uVar3) + (uVar7 ^ uVar3) + (uVar8 ^ uVar3) +
      (uVar9 ^ uVar3) + (uVar10 ^ uVar3) + (uVar11 ^ uVar3) == piVar13[param_1]) {
    piVar1 = piVar13 + 0x2000;
    iVar14 = 0;
    for (; piVar13 != piVar1; piVar13 = piVar13 + 1) {
      iVar14 = iVar14 + *piVar13;
    }
    if (iVar14 == *(int *)((int)this + 0x2c)) {
      return;
    }
  }
  CPrintF(s_Access_violation_theEncryptMemor_36242fc4);
                    /* WARNING: Subroutine does not return */
  exit(1);
}

