
void __fastcall FUN_36115460(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  void *this;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int local_24;
  int local_1c;
  int local_8;
  
  uVar8 = FUN_3611f3e0(param_1 + 0xd94);
  *(undefined4 *)(*(int *)(param_1 + 0xd90) + 0xb4) = uVar8;
  iVar3 = *(int *)(param_1 + 0xd90);
  local_8 = 0;
  if (0 < *(int *)(iVar3 + 0x18)) {
    local_24 = 0;
    do {
      uVar4 = *(uint *)(*(int *)(iVar3 + 0x1c) + 200 + local_24);
      iVar12 = *(int *)(iVar3 + 0x1c) + local_24;
      uVar11 = uVar4 & 0xffffffbf;
      *(uint *)(iVar12 + 200) = uVar11;
      if ((uVar4 & 0x400000) != 0) {
        *(uint *)(iVar12 + 200) = uVar11 | 0x40;
        if (*(ushort *)(iVar12 + 0x18e) != 0) {
          fVar7 = (float)*(ushort *)(iVar12 + 0x18e);
          iVar9 = FUN_3600bea0((undefined4 *)(iVar12 + 0xc));
          this = *(void **)(iVar12 + 0x1ac);
          local_1c = 0;
          if (0 < iVar9) {
            iVar5 = *(int *)(param_1 + 0xe0c);
            iVar6 = *(int *)((int)this + 0xbc);
            piVar13 = *(int **)(iVar12 + 0x10);
            do {
              iVar10 = FUN_360d67e0(this,*piVar13);
              iVar10 = (iVar10 + iVar6) * 0x1c;
              fVar1 = *(float *)(iVar10 + 4 + iVar5);
              fVar2 = *(float *)(iVar10 + 8 + iVar5);
              if (*(float *)(iVar10 + iVar5) * *(float *)(iVar10 + iVar5) +
                  fVar1 * fVar1 + fVar2 * fVar2 < fVar7 * fVar7) goto LAB_361155bc;
              local_1c = local_1c + 1;
              piVar13 = piVar13 + 1;
            } while (local_1c < iVar9);
          }
          *(uint *)(iVar12 + 200) = uVar11;
        }
      }
LAB_361155bc:
      local_8 = local_8 + 1;
      local_24 = local_24 + 0x1d0;
    } while (local_8 < *(int *)(iVar3 + 0x18));
  }
  return;
}

