
void __cdecl FUN_36123ab0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  
  DAT_362fcc00 = param_1;
  DAT_362fcbfc = param_2;
  if (_pselenSelectOnRender == (CSelection<class_CEntity,1> *)0x0) {
    if (_pselbvxtSelectOnRender == (CSelection<class_CBrushVertex,2> *)0x0) {
      return;
    }
    if (_pavpixSelectLasso != (CStaticStackArray<class_Vector<long,2>_> *)0x0) goto LAB_36123b11;
    if (_bSelectAlternative != 0) {
      return;
    }
    FUN_36124280((undefined4 *)_pselbvxtSelectOnRender);
  }
  if (_pavpixSelectLasso == (CStaticStackArray<class_Vector<long,2>_> *)0x0) {
    return;
  }
LAB_36123b11:
  iVar10 = DAT_362fcbfc;
  iVar2 = FUN_36123fc0((int)_pavpixSelectLasso);
  if (((2 < iVar2) && (1 < param_1)) && (1 < param_2)) {
    DAT_362fcc04 = AllocMemory(iVar10 * DAT_362fcc00);
    iVar2 = DAT_362fcc00;
    iVar10 = DAT_362fcbfc;
    uVar5 = DAT_362fcbfc * DAT_362fcc00;
    puVar11 = DAT_362fcc04;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar3 = FUN_36123fc0((int)_pavpixSelectLasso);
    iVar8 = 0;
    if (0 < iVar3) {
      do {
        iVar1 = iVar8 + 1;
        iVar10 = *(int *)(_pavpixSelectLasso + 4);
        iVar2 = *(int *)(iVar10 + iVar8 * 8);
        iVar8 = *(int *)(iVar10 + 4 + iVar8 * 8);
        iVar9 = *(int *)(iVar10 + (iVar1 % iVar3) * 8);
        iVar10 = *(int *)(iVar10 + 4 + (iVar1 % iVar3) * 8);
        if (((((-1 < iVar2) && (iVar2 < DAT_362fcc00)) &&
             ((-1 < iVar9 && ((iVar9 < DAT_362fcc00 && (-1 < iVar8)))))) && (iVar8 < DAT_362fcbfc))
           && (((-1 < iVar10 && (iVar10 < DAT_362fcbfc)) && (iVar8 != iVar10)))) {
          iVar7 = iVar10;
          if (iVar10 < iVar8) {
            iVar7 = iVar8;
            iVar2 = iVar9;
            iVar8 = iVar10;
          }
          iVar9 = iVar7 - iVar8;
          uVar12 = FUN_361bfd6c();
          iVar10 = DAT_362fcc00;
          iVar2 = iVar2 << 0x10;
          if (iVar8 < iVar7) {
            iVar8 = DAT_362fcc00 * iVar8;
            do {
              iVar7 = (iVar2 >> 0x10) + iVar8;
              if ((-1 < iVar7) && (iVar7 <= param_1 * param_2 + -1)) {
                *(byte *)((int)DAT_362fcc04 + iVar7) = ~*(byte *)((int)DAT_362fcc04 + iVar7);
              }
              iVar2 = iVar2 + (int)uVar12;
              iVar8 = iVar8 + iVar10;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
        iVar8 = iVar1;
        iVar2 = DAT_362fcc00;
        iVar10 = DAT_362fcbfc;
      } while (iVar1 < iVar3);
    }
    if (0 < iVar10) {
      iVar8 = 0;
      do {
        pbVar4 = (byte *)(iVar8 + (int)DAT_362fcc04);
        iVar3 = iVar2 + -1;
        if (0 < iVar2 + -1) {
          do {
            pbVar4[1] = pbVar4[1] ^ *pbVar4;
            pbVar4 = pbVar4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar8 = iVar8 + iVar2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  return;
}

