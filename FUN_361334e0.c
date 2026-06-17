
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_361334e0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  int in_EAX;
  int iVar11;
  float *pfVar12;
  float10 fVar13;
  int local_134;
  int local_130;
  double local_110;
  double local_108;
  double local_100;
  float local_f8 [15];
  undefined1 local_bc [60];
  double local_80 [15];
  
  pfVar1 = (float *)(in_EAX + 0x3c);
  iVar11 = FUN_360de4a0((void *)(DAT_362fd548 + 0x54),pfVar1,*(float *)(in_EAX + 0x88));
  if (iVar11 != 0) {
    FUN_360bf170(local_f8,(float *)(in_EAX + 0x8c),pfVar1,(float *)(in_EAX + 0x54));
    FUN_3612ee40(local_80,local_f8);
    pfVar12 = (float *)FUN_3612ef60(local_bc,(float *)(DAT_362fd548 + 0x54));
    iVar11 = FUN_3612e8f0(local_f8,pfVar12);
    if (iVar11 != 0) {
      fVar13 = FUN_360e06b0(*(int *)(DAT_362fd548 + 0x8c),local_80);
      if (fVar13 < (float10)_DAT_3622376c != (fVar13 == (float10)_DAT_3622376c)) {
        puVar10 = *(undefined4 **)(in_EAX + 0x84);
        if (puVar10 != (undefined4 *)0x0) {
          local_134 = 0;
          iVar11 = FUN_360cd8a0(puVar10);
          if (0 < iVar11) {
            local_130 = 0;
            do {
              pfVar12 = (float *)(puVar10[1] + local_130);
              fVar2 = *(float *)(in_EAX + 0x68);
              fVar3 = *(float *)(in_EAX + 100);
              fVar4 = *(float *)(in_EAX + 0x60);
              fVar5 = *(float *)(in_EAX + 0x74);
              fVar6 = *(float *)(in_EAX + 0x6c);
              fVar7 = *(float *)(in_EAX + 0x70);
              fVar8 = *(float *)(in_EAX + 0x40);
              fVar9 = *(float *)(in_EAX + 0x44);
              pfVar12[4] = *(float *)(in_EAX + 0x54) * *pfVar12 +
                           *(float *)(in_EAX + 0x58) * pfVar12[1] +
                           *(float *)(puVar10[1] + 8 + local_130) * *(float *)(in_EAX + 0x5c) +
                           *pfVar1;
              pfVar12[5] = *pfVar12 * fVar4 + pfVar12[1] * fVar3 + pfVar12[2] * fVar2 + fVar8;
              pfVar12[6] = pfVar12[1] * fVar7 + fVar6 * *pfVar12 + pfVar12[2] * fVar5 + fVar9;
              local_110 = (double)pfVar12[4];
              local_108 = (double)pfVar12[5];
              local_100 = (double)pfVar12[6];
              fVar13 = FUN_360e0680(*(int *)(DAT_362fd548 + 0x8c),&local_110,(double)pfVar12[3]);
              if (fVar13 < (float10)_DAT_3622376c != (fVar13 == (float10)_DAT_3622376c)) {
                return 1;
              }
              local_134 = local_134 + 1;
              local_130 = local_130 + 0x40;
              iVar11 = FUN_360cd8a0(puVar10);
            } while (local_134 < iVar11);
          }
        }
      }
    }
  }
  return 0;
}

