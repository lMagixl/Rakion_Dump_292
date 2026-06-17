
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3606ead0(void *this,int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int in_EAX;
  int iVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  
  if (DAT_362a3e5c != in_EAX) {
    FUN_3607b900(in_EAX);
    (*DAT_362c4608)();
    DAT_362a3e5c = in_EAX;
  }
  iVar13 = (*DAT_362c46c8)(4,0,DAT_362bfa4c,0x66);
  for (; this != (undefined4 *)0x0; this = *(void **)this) {
    iVar15 = *(int *)**(undefined4 **)((int)this + 0xd8);
    pfVar14 = (float *)(DAT_362c3a78 + *(int *)((int)this + 4) * 0xc);
    pfVar17 = (float *)(iVar13 + *(int *)((int)this + 200) * 8);
    if ((*(byte *)(param_1 + 0xb4 + (int)this) & 4) == 0) {
      pfVar1 = (float *)((int)this + (param_1 * 9 + 5) * 4);
      pfVar2 = (float *)((int)this + (param_1 * 9 + 8) * 4);
      pfVar3 = (float *)((int)this + (param_1 * 9 + 0xb) * 4);
      iVar15 = *(int *)((int)this + 8);
      do {
        fVar4 = *pfVar14;
        fVar5 = *pfVar1;
        fVar6 = *pfVar3;
        fVar7 = pfVar14[1];
        fVar8 = pfVar1[1];
        fVar9 = pfVar3[1];
        fVar10 = pfVar14[2];
        fVar11 = pfVar1[2];
        fVar12 = pfVar3[2];
        *pfVar17 = pfVar2[2] * (fVar10 - fVar11) +
                   *pfVar2 * (fVar4 - fVar5) + pfVar2[1] * (fVar7 - fVar8);
        pfVar17[1] = (fVar7 - fVar8) * fVar9 + (fVar4 - fVar5) * fVar6 + (fVar10 - fVar11) * fVar12;
        pfVar14 = pfVar14 + 3;
        pfVar17 = pfVar17 + 2;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    else {
      iVar16 = 0;
      if (0 < *(int *)((int)this + 8)) {
        pfVar14 = pfVar14 + 2;
        do {
          iVar16 = iVar16 + 1;
          fVar4 = _DAT_36223384 /
                  SQRT(*pfVar14 * *pfVar14 + pfVar14[-1] * pfVar14[-1] + pfVar14[-2] * pfVar14[-2]);
          fVar5 = fVar4 * pfVar14[-2] * *(float *)(iVar15 + 0x34) +
                  fVar4 * pfVar14[-1] * *(float *)(iVar15 + 0x38) +
                  fVar4 * *pfVar14 * *(float *)(iVar15 + 0x3c);
          fVar6 = fVar5 * *(float *)(iVar15 + 0x34);
          fVar7 = fVar4 * pfVar14[-2] - (fVar6 + fVar6);
          fVar6 = fVar5 * *(float *)(iVar15 + 0x38);
          fVar9 = fVar4 * pfVar14[-1] - (fVar6 + fVar6);
          fVar5 = fVar5 * *(float *)(iVar15 + 0x3c);
          fVar8 = fVar4 * *pfVar14 - (fVar5 + fVar5);
          fVar4 = *(float *)(DAT_362c3a70 + 0x100);
          fVar5 = *(float *)(DAT_362c3a70 + 0x118);
          fVar6 = *(float *)(DAT_362c3a70 + 0x10c);
          pfVar17[iVar16 * 2 + -2] =
               (fVar7 * *(float *)(DAT_362c3a70 + 0xf8) +
                fVar9 * *(float *)(DAT_362c3a70 + 0x104) + fVar8 * *(float *)(DAT_362c3a70 + 0x110)
               + _DAT_36223384) * _DAT_36227cf0;
          pfVar17[iVar16 * 2 + -1] =
               (fVar9 * fVar6 + fVar8 * fVar5 + fVar7 * fVar4 + _DAT_36223384) * _DAT_36227cf0;
          pfVar14 = pfVar14 + 3;
        } while (iVar16 < *(int *)((int)this + 8));
      }
    }
  }
  (*DAT_362c46cc)(4,0);
  return;
}

