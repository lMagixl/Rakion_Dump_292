
void __cdecl FUN_3607c5f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  
  iVar3 = DAT_362c4d7c;
  if ((DAT_362c4d78 != (int *)0x0) &&
     (bVar8 = DAT_362c4d7c == 0, iVar5 = DAT_362c4d7c, piVar7 = DAT_362c4d78, !bVar8)) {
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar8 = param_1 == *piVar7;
      piVar7 = piVar7 + 1;
    } while (!bVar8);
    iVar5 = (DAT_362c4d7c - iVar5) - (uint)bVar8;
    if (iVar5 != DAT_362c4d7c) {
      iVar1 = DAT_362c4d7c * 4 + -4;
      iVar6 = iVar5 * 4;
      *(undefined4 *)(iVar6 + DAT_362c4d74) = *(undefined4 *)(iVar1 + DAT_362c4d74);
      DAT_362c4d78[iVar5] = DAT_362c4d78[iVar3 + -1];
      *(undefined4 *)(iVar1 + DAT_362c4d74) = 0;
      DAT_362c4d78[iVar3 + -1] = 0;
      uVar2 = *(undefined4 *)(iVar6 + DAT_362c4d70);
      puVar4 = (undefined4 *)(iVar1 + DAT_362c4d70);
      *(undefined4 *)(iVar6 + DAT_362c4d70) = *(undefined4 *)(iVar1 + DAT_362c4d70);
      *puVar4 = uVar2;
      do {
        DAT_362c4d7c = DAT_362c4d7c + -1;
        if (*(int *)(DAT_362c4d74 + -4 + DAT_362c4d7c * 4) != 0) {
          return;
        }
      } while (0 < DAT_362c4d7c);
    }
  }
  return;
}

