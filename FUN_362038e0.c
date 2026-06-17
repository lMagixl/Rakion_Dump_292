
void __cdecl
FUN_362038e0(int *param_1,int param_2,int param_3,int param_4,uint param_5,undefined4 param_6,
            char param_7)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined3 *puVar8;
  undefined3 *puVar9;
  undefined3 *puVar10;
  int iVar11;
  int iVar12;
  int local_c;
  
  piVar3 = param_1;
  puVar8 = (undefined3 *)(*(int *)(*(int *)(param_2 + 4) + 0x340) + param_5);
  iVar4 = param_3;
  if ((param_7 != '\0') && (param_3 < 4)) {
    iVar4 = 4;
  }
  param_5 = 0;
  if (0 < param_4) {
    local_c = 0;
    iVar5 = param_2;
    iVar12 = param_3;
    do {
      uVar7 = 0;
      uVar6 = param_5;
      puVar9 = puVar8;
      iVar11 = local_c;
      if (0 < iVar12) {
        do {
          if (*(char *)(iVar5 + 0x23a4) == '\0') {
            *(undefined1 *)(piVar3[2] + iVar11) = *(undefined1 *)puVar9;
            *(undefined1 *)(piVar3[2] + 1 + iVar11) = *(undefined1 *)((int)puVar9 + 1);
            puVar10 = (undefined3 *)((int)puVar9 + 3);
            *(undefined1 *)(piVar3[2] + 2 + iVar11) = *(undefined1 *)((int)puVar9 + 2);
            if (*(short *)(*(int *)(param_2 + 4) + 0x34) == 4) {
              uVar2 = *(undefined1 *)puVar10;
              puVar10 = puVar9 + 1;
              *(undefined1 *)(piVar3[2] + 3 + iVar11) = uVar2;
            }
            else {
              *(undefined1 *)(piVar3[2] + 3 + iVar11) = 0xff;
            }
          }
          else {
            puVar10 = (undefined3 *)((int)puVar9 + 3);
            if (*(short *)(*(int *)(iVar5 + 4) + 0x34) == 4) {
              uVar2 = *(undefined1 *)puVar10;
              puVar10 = puVar9 + 1;
              _param_7 = (int *)CONCAT13(uVar2,*puVar9);
            }
            else {
              _param_7 = (int *)CONCAT13(0xff,*puVar9);
            }
            switch(param_6) {
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0x10:
              FUN_36201f90((int)&param_7,(int)&param_1,uVar7,uVar6);
              *(int **)(piVar3[2] + iVar11) = param_1;
              uVar6 = param_5;
              break;
            case 0xe:
              FUN_36202220((int)&param_7,(int)&param_1,uVar7,uVar6);
              *(int **)(piVar3[2] + iVar11) = param_1;
              uVar6 = param_5;
              break;
            case 0xf:
              FUN_36202080((int)&param_7,(int)&param_1,uVar7,uVar6);
              *(int **)(piVar3[2] + iVar11) = param_1;
              uVar6 = param_5;
              break;
            case 0x11:
            case 0x12:
            case 0x14:
              param_1 = _param_7;
            default:
              *(int **)(piVar3[2] + iVar11) = param_1;
              break;
            case 0x13:
              FUN_36202120((int)&param_7,(int)&param_1,uVar7,uVar6);
              *(int **)(piVar3[2] + iVar11) = param_1;
              uVar6 = param_5;
            }
          }
          if ((*(char *)(param_2 + 0x2387) != '\0') &&
             ((((uVar7 == 0 || (uVar6 == 0)) || (uVar7 == *piVar3 - 1U)) ||
              (uVar6 == piVar3[1] - 1U)))) {
            *(undefined1 *)(piVar3[2] + 3 + iVar11) = 0;
          }
          if (*(char *)(param_2 + 0x2388) != '\0') {
            iVar5 = 0;
            do {
              if (((uVar7 == 0) || (uVar6 == 0)) ||
                 ((uVar7 == *piVar3 - 1U || (uVar6 == piVar3[1] - 1U)))) {
                *(undefined1 *)(piVar3[2] + iVar11 + iVar5) =
                     *(undefined1 *)(iVar5 + 0x238c + param_2);
                uVar6 = param_5;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 3);
          }
          if (*(char *)(param_2 + 0x2384) != '\0') {
            *(byte *)(piVar3[2] + 3 + iVar11) =
                 (-(*(byte *)(piVar3[2] + 3 + iVar11) < 0x7f) & 1U) - 1;
          }
          if (*(char *)(param_2 + 0x23ac) != '\0') {
            puVar1 = (undefined1 *)(piVar3[2] + iVar11);
            uVar2 = *puVar1;
            *puVar1 = *(undefined1 *)(piVar3[2] + 2 + iVar11);
            *(undefined1 *)(piVar3[2] + 2 + iVar11) = uVar2;
            uVar6 = param_5;
          }
          uVar7 = uVar7 + 1;
          iVar11 = iVar11 + 4;
          iVar5 = param_2;
          puVar9 = puVar10;
          iVar12 = param_3;
        } while ((int)uVar7 < param_3);
      }
      puVar8 = (undefined3 *)((int)puVar8 + *(int *)(*(int *)(iVar5 + 4) + 0x354));
      local_c = local_c + iVar4 * 4;
      param_5 = uVar6 + 1;
    } while ((int)param_5 < param_4);
  }
  return;
}

