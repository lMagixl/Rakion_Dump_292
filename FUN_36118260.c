
void __fastcall FUN_36118260(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = *(int *)(*(int *)((int)param_1 + 0xd90) + 0xb4);
  iVar2 = *(int *)(*(int *)((int)param_1 + 0xd90) + 0xb8) + iVar8;
  for (; iVar8 < iVar2; iVar8 = iVar8 + 1) {
    iVar3 = FUN_3611fd70((void *)((int)param_1 + 0xd94),iVar8);
    iVar9 = *(int *)(iVar3 + 0x108);
    if (iVar9 != 0) {
      uVar4 = FUN_3611f3c0(0x362fcaa8);
      *(undefined4 *)(iVar3 + 0x10c) = uVar4;
      iVar9 = iVar9 / 2;
      *(int *)(iVar3 + 0x110) = iVar9;
      iVar5 = FUN_3611f7a0(0x362fcaa8);
      for (iVar5 = iVar5 - DAT_362fcabc; iVar5 < iVar9; iVar5 = iVar5 - DAT_362fcabc) {
        FUN_36121eb0(&DAT_362fcaa8,DAT_362fcac0);
        iVar5 = FUN_3611f7a0(0x362fcaa8);
      }
      DAT_362fcabc = DAT_362fcabc + iVar9;
      *(float *)(DAT_362bef74 + 0x70) =
           (float)*(int *)(iVar3 + 0x110) + *(float *)(DAT_362bef74 + 0x70);
      iVar9 = *(int *)(iVar3 + 0x104);
      iVar5 = *(int *)(iVar3 + 0x10c);
      iVar6 = *(int *)(iVar3 + 0x108) + iVar9;
      for (; iVar9 < iVar6; iVar9 = iVar9 + 2) {
        iVar1 = *(int *)(*(int *)((int)param_1 + 0xe1c) + iVar9 * 4);
        iVar11 = *(int *)(*(int *)((int)param_1 + 0xe1c) + 4 + iVar9 * 4);
        iVar10 = iVar1;
        if (*(char *)(iVar3 + 0x102) != '\0') {
          iVar10 = iVar11;
          iVar11 = iVar1;
        }
        piVar7 = (int *)FUN_3611fc90(&DAT_362fcaa8,iVar5);
        iVar1 = *(int *)((int)param_1 + 0xe0c);
        FUN_361202c0(param_1,piVar7,*(undefined4 *)(iVar10 * 0x1c + iVar1 + 0x14),
                     *(float *)(iVar10 * 0x1c + 0x18 + iVar1),
                     *(undefined4 *)(iVar11 * 0x1c + iVar1 + 0x14),
                     *(float *)(iVar11 * 0x1c + 0x18 + iVar1));
        if ((piVar7[6] < piVar7[7]) && (*(int *)((int)param_1 + 0xe5c) < piVar7[7])) {
          piVar7[2] = iVar3;
          FUN_36122c40(param_1,piVar7);
        }
        iVar5 = iVar5 + 1;
      }
    }
  }
  return;
}

