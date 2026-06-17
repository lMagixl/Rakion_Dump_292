
void __fastcall FUN_36121710(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  
  iVar6 = DAT_362fcb3c;
  piVar12 = (int *)(DAT_362fcb3c + 0x10);
  iVar8 = FUN_3611f5c0(0x362fcb38);
  do {
    iVar1 = *piVar12;
    *piVar12 = iVar1 + piVar12[1];
    if (iVar1 + piVar12[1] < piVar12[-4]) {
      *(undefined4 *)(param_1 + 0xe68) = 0;
      iVar1 = *piVar12;
      piVar11 = piVar12;
      do {
        piVar7 = piVar11 + -4;
        piVar11 = piVar11 + -4;
      } while (iVar1 < *piVar7);
      iVar2 = piVar12[1];
      iVar3 = piVar12[2];
      iVar4 = piVar12[3];
      piVar7 = piVar12 + -4;
      piVar10 = piVar12;
      do {
        piVar9 = piVar7;
        *piVar10 = *piVar9;
        piVar10[1] = piVar9[1];
        iVar5 = piVar9[3];
        piVar10[2] = piVar9[2];
        piVar10[3] = iVar5;
        piVar7 = piVar9 + -4;
        piVar10 = piVar10 + -4;
      } while (piVar11 < piVar9 + -4);
      *piVar9 = iVar1;
      piVar9[1] = iVar2;
      piVar9[2] = iVar3;
      piVar9[3] = iVar4;
    }
    piVar12 = piVar12 + 4;
  } while (piVar12 < (int *)(iVar8 * 0x10 + -0x10 + iVar6));
  return;
}

