
void __fastcall FUN_36144950(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int local_34;
  int local_28;
  int local_24;
  int local_18;
  
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x84)) {
    do {
      iVar1 = *(int *)(param_1 + 0x68);
      bVar5 = (byte)local_18;
      iVar8 = *(int *)(param_1 + 0x74) >> (bVar5 & 0x1f);
      iVar7 = *(int *)(param_1 + 0x70) >> (bVar5 & 0x1f);
      iVar2 = *(int *)(param_1 + 0x6c);
      iVar12 = 0x1f;
      if (*(uint *)(param_1 + 0x28) != 0) {
        for (; *(uint *)(param_1 + 0x28) >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      iVar3 = *(int *)(param_1 + 0x94 + local_18 * 4) + *(int *)(param_1 + 0xc0);
      bVar6 = (char)iVar12 - bVar5;
      iVar12 = *(int *)(param_1 + 0x40 + local_18 * 4) + *(int *)(param_1 + 0xbc);
      local_24 = 0;
      local_34 = 0;
      if (0 < iVar8) {
        do {
          local_28 = 0;
          if (0 < iVar7) {
            do {
              iVar4 = (local_34 + (iVar2 >> (bVar5 & 0x1f)) << (bVar6 & 0x1f)) +
                      (iVar1 >> (bVar5 & 0x1f)) + local_28;
              if (*(char *)(iVar4 + iVar12) != '\0') {
                uVar11 = 0;
                uVar13 = 0;
                if ((((-1 < local_28 + -1) && (local_28 + -1 < iVar7)) && (-1 < local_34 + -2)) &&
                   ((local_34 + -2 < iVar8 &&
                    (*(char *)((iVar4 - (2 << (bVar6 & 0x1f))) + -1 + iVar12) == '\0')))) {
                  uVar11 = 1;
                  uVar13 = *(byte *)(local_24 + iVar7 * -2 + -1 + iVar3) & 1;
                }
                if (((-1 < local_28) && (local_28 < iVar7)) &&
                   ((-1 < local_34 + -2 &&
                    ((local_34 + -2 < iVar8 &&
                     (*(char *)((iVar4 - (2 << (bVar6 & 0x1f))) + iVar12) == '\0')))))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + iVar7 * -2 + iVar3) & 1);
                }
                if ((((-1 < local_28 + 1) && (local_28 + 1 < iVar7)) && (-1 < local_34 + -2)) &&
                   ((local_34 + -2 < iVar8 &&
                    (*(char *)((iVar4 - (2 << (bVar6 & 0x1f))) + 1 + iVar12) == '\0')))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + iVar7 * -2 + 1 + iVar3) & 1);
                }
                iVar10 = local_28 + -2;
                if (((-1 < iVar10) && (iVar10 < iVar7)) &&
                   ((-1 < local_34 + -1 &&
                    ((local_34 + -1 < iVar8 &&
                     (*(char *)((iVar4 - (1 << (bVar6 & 0x1f))) + -2 + iVar12) == '\0')))))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)((local_24 - iVar7) + -2 + iVar3) & 1);
                }
                iVar9 = local_28 + 2;
                if ((((-1 < iVar9) && (iVar9 < iVar7)) && (-1 < local_34 + -1)) &&
                   ((local_34 + -1 < iVar8 &&
                    (*(char *)((iVar4 - (1 << (bVar6 & 0x1f))) + 2 + iVar12) == '\0')))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)((local_24 - iVar7) + 2 + iVar3) & 1);
                }
                if (((-1 < iVar10) && (iVar10 < iVar7)) &&
                   ((-1 < local_34 &&
                    ((local_34 < iVar8 &&
                     (*(char *)((0 << (bVar6 & 0x1f)) + iVar4 + -2 + iVar12) == '\0')))))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + -2 + iVar3) & 1);
                }
                if ((((-1 < iVar9) && (iVar9 < iVar7)) && (-1 < local_34)) &&
                   ((local_34 < iVar8 &&
                    (*(char *)((0 << (bVar6 & 0x1f)) + iVar4 + 2 + iVar12) == '\0')))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + 2 + iVar3) & 1);
                }
                if (((-1 < iVar10) && (iVar10 < iVar7)) &&
                   ((-1 < local_34 + 1 &&
                    ((local_34 + 1 < iVar8 &&
                     (*(char *)((1 << (bVar6 & 0x1f)) + iVar4 + -2 + iVar12) == '\0')))))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + iVar3 + -2 + iVar7) & 1);
                }
                if ((((-1 < iVar9) && (iVar9 < iVar7)) && (-1 < local_34 + 1)) &&
                   ((local_34 + 1 < iVar8 &&
                    (*(char *)((1 << (bVar6 & 0x1f)) + iVar4 + 2 + iVar12) == '\0')))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + iVar3 + 2 + iVar7) & 1);
                }
                if (((-1 < local_28 + -1) && (local_28 + -1 < iVar7)) &&
                   ((-1 < local_34 + 2 &&
                    ((local_34 + 2 < iVar8 &&
                     (*(char *)((2 << (bVar6 & 0x1f)) + iVar4 + -1 + iVar12) == '\0')))))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + iVar7 * 2 + -1 + iVar3) & 1);
                }
                if ((((-1 < local_28) && (local_28 < iVar7)) && (-1 < local_34 + 2)) &&
                   ((local_34 + 2 < iVar8 &&
                    (*(char *)((2 << (bVar6 & 0x1f)) + iVar4 + iVar12) == '\0')))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + iVar7 * 2 + iVar3) & 1);
                }
                iVar10 = local_28 + 1;
                if (((-1 < iVar10) && (iVar10 < iVar7)) &&
                   ((-1 < local_34 + 2 &&
                    ((local_34 + 2 < iVar8 &&
                     (*(char *)((2 << (bVar6 & 0x1f)) + iVar4 + 1 + iVar12) == '\0')))))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + iVar7 * 2 + 1 + iVar3) & 1);
                }
                if ((((-1 < local_28 + -1) && (local_28 + -1 < iVar7)) && (-1 < local_34 + -1)) &&
                   ((local_34 + -1 < iVar8 &&
                    (*(char *)((iVar4 - (1 << (bVar6 & 0x1f))) + -1 + iVar12) == '\0')))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)((local_24 - iVar7) + -1 + iVar3) & 1);
                }
                if (((-1 < local_28) && (local_28 < iVar7)) &&
                   ((-1 < local_34 + -1 &&
                    ((local_34 + -1 < iVar8 &&
                     (*(char *)((iVar4 - (1 << (bVar6 & 0x1f))) + iVar12) == '\0')))))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)((local_24 - iVar7) + iVar3) & 1);
                }
                if ((((-1 < iVar10) && (iVar10 < iVar7)) && (-1 < local_34 + -1)) &&
                   ((local_34 + -1 < iVar8 &&
                    (*(char *)((iVar4 - (1 << (bVar6 & 0x1f))) + 1 + iVar12) == '\0')))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)((local_24 - iVar7) + 1 + iVar3) & 1);
                }
                if (((-1 < local_28 + -1) && (local_28 + -1 < iVar7)) &&
                   ((-1 < local_34 &&
                    ((local_34 < iVar8 &&
                     (*(char *)((0 << (bVar6 & 0x1f)) + iVar4 + -1 + iVar12) == '\0')))))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + -1 + iVar3) & 1);
                }
                if ((((-1 < iVar10) && (iVar10 < iVar7)) && (-1 < local_34)) &&
                   ((local_34 < iVar8 &&
                    (*(char *)((0 << (bVar6 & 0x1f)) + iVar4 + 1 + iVar12) == '\0')))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + 1 + iVar3) & 1);
                }
                if (((-1 < local_28 + -1) && (local_28 + -1 < iVar7)) &&
                   ((-1 < local_34 + 1 &&
                    ((local_34 + 1 < iVar8 &&
                     (*(char *)((1 << (bVar6 & 0x1f)) + iVar4 + -1 + iVar12) == '\0')))))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + iVar3 + -1 + iVar7) & 1);
                }
                if ((((-1 < local_28) && (local_28 < iVar7)) && (-1 < local_34 + 1)) &&
                   ((local_34 + 1 < iVar8 &&
                    (*(char *)((1 << (bVar6 & 0x1f)) + iVar4 + iVar12) == '\0')))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + iVar3 + iVar7) & 1);
                }
                if (((-1 < iVar10) && (iVar10 < iVar7)) &&
                   ((-1 < local_34 + 1 &&
                    ((local_34 + 1 < iVar8 &&
                     (*(char *)((1 << (bVar6 & 0x1f)) + iVar4 + 1 + iVar12) == '\0')))))) {
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 + (*(byte *)(local_24 + iVar3 + 1 + iVar7) & 1);
                }
                if ((uVar11 != 0) && (uVar13 < uVar11)) {
                  *(undefined1 *)(local_24 + iVar3) = 0;
                }
              }
              local_24 = local_24 + 1;
              local_28 = local_28 + 1;
            } while (local_28 < iVar7);
          }
          local_34 = local_34 + 1;
        } while (local_34 < iVar8);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x84));
  }
  return;
}

