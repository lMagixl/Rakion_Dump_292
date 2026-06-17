
void __fastcall FUN_36144190(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int local_30;
  int local_2c;
  int local_18;
  
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x84)) {
    do {
      iVar2 = *(int *)(param_1 + 0x68);
      bVar5 = (byte)local_18;
      iVar11 = *(int *)(param_1 + 0x74) >> (bVar5 & 0x1f);
      iVar10 = *(int *)(param_1 + 0x70) >> (bVar5 & 0x1f);
      iVar3 = *(int *)(param_1 + 0x6c);
      iVar7 = 0x1f;
      if (*(uint *)(param_1 + 0x28) != 0) {
        for (; *(uint *)(param_1 + 0x28) >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      bVar6 = (char)iVar7 - bVar5;
      iVar8 = *(int *)(param_1 + 0x94 + local_18 * 4) + *(int *)(param_1 + 0xc0);
      iVar7 = *(int *)(param_1 + 0x40 + local_18 * 4) + *(int *)(param_1 + 0xbc);
      iVar9 = 0;
      local_2c = 0;
      if (0 < iVar11) {
        do {
          local_30 = 0;
          if (0 < iVar10) {
            do {
              iVar1 = ((iVar3 >> (bVar5 & 0x1f)) + local_2c << (bVar6 & 0x1f)) +
                      (iVar2 >> (bVar5 & 0x1f)) + local_30;
              if (*(char *)(iVar1 + iVar7) == '\0') {
                uVar4 = 0;
                uVar12 = 0;
                if ((((-1 < local_30 + -2) && (local_30 + -2 < iVar10)) && (-1 < local_2c + -2)) &&
                   ((local_2c + -2 < iVar11 &&
                    (*(char *)((iVar1 - (2 << (bVar6 & 0x1f))) + -2 + iVar7) != '\0')))) {
                  uVar4 = 1;
                  uVar12 = *(byte *)((iVar9 - (iVar10 * 2 + 2)) + iVar8) & 1;
                }
                if (((-1 < local_30 + -1) && (local_30 + -1 < iVar10)) &&
                   ((-1 < local_2c + -2 &&
                    ((local_2c + -2 < iVar11 &&
                     (*(char *)((iVar1 - (2 << (bVar6 & 0x1f))) + -1 + iVar7) != '\0')))))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar9 + iVar10 * -2 + -1 + iVar8) & 1);
                }
                if ((((-1 < local_30) && (local_30 < iVar10)) && (-1 < local_2c + -2)) &&
                   ((local_2c + -2 < iVar11 &&
                    (*(char *)((iVar1 - (2 << (bVar6 & 0x1f))) + iVar7) != '\0')))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar9 + iVar10 * -2 + iVar8) & 1);
                }
                if (((-1 < local_30 + 1) && (local_30 + 1 < iVar10)) &&
                   ((-1 < local_2c + -2 &&
                    ((local_2c + -2 < iVar11 &&
                     (*(char *)((iVar1 - (2 << (bVar6 & 0x1f))) + 1 + iVar7) != '\0')))))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar9 + iVar10 * -2 + 1 + iVar8) & 1);
                }
                if ((((-1 < local_30 + 2) && (local_30 + 2 < iVar10)) && (-1 < local_2c + -2)) &&
                   ((local_2c + -2 < iVar11 &&
                    (*(char *)((iVar1 - (2 << (bVar6 & 0x1f))) + 2 + iVar7) != '\0')))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar9 + iVar10 * -2 + 2 + iVar8) & 1);
                }
                if (((-1 < local_30 + -2) && (local_30 + -2 < iVar10)) &&
                   ((-1 < local_2c + -1 &&
                    ((local_2c + -1 < iVar11 &&
                     (*(char *)((iVar1 - (1 << (bVar6 & 0x1f))) + -2 + iVar7) != '\0')))))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)((iVar9 - iVar10) + -2 + iVar8) & 1);
                }
                if ((((-1 < local_30 + -1) && (local_30 + -1 < iVar10)) && (-1 < local_2c + -1)) &&
                   ((local_2c + -1 < iVar11 &&
                    (*(char *)((iVar1 - (1 << (bVar6 & 0x1f))) + -1 + iVar7) != '\0')))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)((iVar9 - iVar10) + -1 + iVar8) & 1);
                }
                if (((-1 < local_30) && (local_30 < iVar10)) &&
                   ((-1 < local_2c + -1 &&
                    ((local_2c + -1 < iVar11 &&
                     (*(char *)((iVar1 - (1 << (bVar6 & 0x1f))) + iVar7) != '\0')))))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)((iVar9 - iVar10) + iVar8) & 1);
                }
                if ((((-1 < local_30 + 1) && (local_30 + 1 < iVar10)) && (-1 < local_2c + -1)) &&
                   ((local_2c + -1 < iVar11 &&
                    (*(char *)((iVar1 - (1 << (bVar6 & 0x1f))) + 1 + iVar7) != '\0')))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)((iVar9 - iVar10) + 1 + iVar8) & 1);
                }
                if (((-1 < local_30 + 2) && (local_30 + 2 < iVar10)) &&
                   ((-1 < local_2c + -1 &&
                    ((local_2c + -1 < iVar11 &&
                     (*(char *)((iVar1 - (1 << (bVar6 & 0x1f))) + 2 + iVar7) != '\0')))))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)((iVar9 - iVar10) + 2 + iVar8) & 1);
                }
                if ((((-1 < local_30 + -2) && (local_30 + -2 < iVar10)) && (-1 < local_2c)) &&
                   ((local_2c < iVar11 &&
                    (*(char *)((0 << (bVar6 & 0x1f)) + iVar1 + -2 + iVar7) != '\0')))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar8 + -2 + iVar9) & 1);
                }
                if (((-1 < local_30 + -1) && (local_30 + -1 < iVar10)) &&
                   ((-1 < local_2c &&
                    ((local_2c < iVar11 &&
                     (*(char *)((0 << (bVar6 & 0x1f)) + iVar1 + -1 + iVar7) != '\0')))))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar8 + -1 + iVar9) & 1);
                }
                if ((((-1 < local_30 + 1) && (local_30 + 1 < iVar10)) && (-1 < local_2c)) &&
                   ((local_2c < iVar11 &&
                    (*(char *)((0 << (bVar6 & 0x1f)) + iVar1 + 1 + iVar7) != '\0')))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar8 + 1 + iVar9) & 1);
                }
                if (((-1 < local_30 + 2) && (local_30 + 2 < iVar10)) &&
                   ((-1 < local_2c &&
                    ((local_2c < iVar11 &&
                     (*(char *)((0 << (bVar6 & 0x1f)) + iVar1 + 2 + iVar7) != '\0')))))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar8 + 2 + iVar9) & 1);
                }
                if ((((-1 < local_30 + -2) && (local_30 + -2 < iVar10)) && (-1 < local_2c + 1)) &&
                   ((local_2c + 1 < iVar11 &&
                    (*(char *)((1 << (bVar6 & 0x1f)) + iVar1 + -2 + iVar7) != '\0')))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar8 + iVar9 + -2 + iVar10) & 1);
                }
                if (((-1 < local_30 + -1) && (local_30 + -1 < iVar10)) &&
                   ((-1 < local_2c + 1 &&
                    ((local_2c + 1 < iVar11 &&
                     (*(char *)((1 << (bVar6 & 0x1f)) + iVar1 + -1 + iVar7) != '\0')))))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar8 + iVar9 + -1 + iVar10) & 1);
                }
                if ((((-1 < local_30) && (local_30 < iVar10)) && (-1 < local_2c + 1)) &&
                   ((local_2c + 1 < iVar11 &&
                    (*(char *)((1 << (bVar6 & 0x1f)) + iVar1 + iVar7) != '\0')))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar8 + iVar9 + iVar10) & 1);
                }
                if (((-1 < local_30 + 1) && (local_30 + 1 < iVar10)) &&
                   ((-1 < local_2c + 1 &&
                    ((local_2c + 1 < iVar11 &&
                     (*(char *)((1 << (bVar6 & 0x1f)) + iVar1 + 1 + iVar7) != '\0')))))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar8 + iVar9 + 1 + iVar10) & 1);
                }
                if ((((-1 < local_30 + 2) && (local_30 + 2 < iVar10)) && (-1 < local_2c + 1)) &&
                   ((local_2c + 1 < iVar11 &&
                    (*(char *)((1 << (bVar6 & 0x1f)) + iVar1 + 2 + iVar7) != '\0')))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar8 + iVar9 + 2 + iVar10) & 1);
                }
                if (((-1 < local_30 + -2) && (local_30 + -2 < iVar10)) &&
                   ((-1 < local_2c + 2 &&
                    ((local_2c + 2 < iVar11 &&
                     (*(char *)((2 << (bVar6 & 0x1f)) + iVar1 + -2 + iVar7) != '\0')))))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar9 + iVar10 * 2 + -2 + iVar8) & 1);
                }
                if ((((-1 < local_30 + -1) && (local_30 + -1 < iVar10)) && (-1 < local_2c + 2)) &&
                   ((local_2c + 2 < iVar11 &&
                    (*(char *)((2 << (bVar6 & 0x1f)) + iVar1 + -1 + iVar7) != '\0')))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar9 + iVar10 * 2 + -1 + iVar8) & 1);
                }
                if (((-1 < local_30) && (local_30 < iVar10)) &&
                   ((-1 < local_2c + 2 &&
                    ((local_2c + 2 < iVar11 &&
                     (*(char *)((2 << (bVar6 & 0x1f)) + iVar1 + iVar7) != '\0')))))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar9 + iVar10 * 2 + iVar8) & 1);
                }
                if ((((-1 < local_30 + 1) && (local_30 + 1 < iVar10)) && (-1 < local_2c + 2)) &&
                   ((local_2c + 2 < iVar11 &&
                    (*(char *)((2 << (bVar6 & 0x1f)) + iVar1 + 1 + iVar7) != '\0')))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar9 + iVar10 * 2 + 1 + iVar8) & 1);
                }
                if (((-1 < local_30 + 2) && (local_30 + 2 < iVar10)) &&
                   ((-1 < local_2c + 2 &&
                    ((local_2c + 2 < iVar11 &&
                     (*(char *)((2 << (bVar6 & 0x1f)) + iVar1 + 2 + iVar7) != '\0')))))) {
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 + (*(byte *)(iVar9 + iVar10 * 2 + 2 + iVar8) & 1);
                }
                if ((uVar4 == 0) || (uVar12 <= uVar4 / 2)) {
                  *(undefined1 *)(iVar8 + iVar9) = 0;
                }
                else {
                  *(undefined1 *)(iVar8 + iVar9) = 0xff;
                }
              }
              iVar9 = iVar9 + 1;
              local_30 = local_30 + 1;
            } while (local_30 < iVar10);
          }
          local_2c = local_2c + 1;
        } while (local_2c < iVar11);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x84));
  }
  return;
}

