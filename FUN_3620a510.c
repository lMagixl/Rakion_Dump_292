
/* WARNING: Removing unreachable block (ram,0x3620a86e) */
/* WARNING: Removing unreachable block (ram,0x3620a889) */
/* WARNING: Removing unreachable block (ram,0x3620a898) */
/* WARNING: Removing unreachable block (ram,0x3620a89f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_3620a510(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *_Memory;
  int *_Memory_00;
  void *pvVar5;
  byte *pbVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint _Size;
  undefined4 *puVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  size_t sVar16;
  undefined8 uVar17;
  void *_Memory_01;
  int local_28;
  int local_24;
  
  DAT_36388490 = param_4;
  DAT_36388494 = param_5;
  _DAT_36388498 = param_1;
  DAT_3638849c = param_2;
  DAT_3638846c = param_3;
  uVar17 = FUN_3620a9a0(param_1);
  sVar16 = (size_t)uVar17;
  _Memory_01 = (void *)((ulonglong)uVar17 >> 0x20);
  piVar2 = (int *)FUN_3620c7d0(&DAT_36388478,sVar16,_Memory_01);
  iVar3 = DAT_36388490 / DAT_36388470;
  iVar9 = DAT_36388474 * DAT_36388470;
  _Size = DAT_36388474 * DAT_36388490;
  iVar4 = DAT_36388494 / DAT_36388468;
  *DAT_3638846c = DAT_3638848c;
  DAT_3638846c[1] = iVar3;
  DAT_3638846c[2] = iVar4;
  _Memory = malloc(DAT_36388478);
  DAT_36388484 = malloc(DAT_36388478);
  DAT_36388488 = malloc(DAT_36388478);
  _Memory_00 = malloc(DAT_36388468 * 4);
  iVar3 = 0;
  piVar7 = _Memory_00;
  if (0 < DAT_36388468) {
    do {
      pvVar5 = malloc(_Size);
      *piVar7 = (int)pvVar5;
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 < DAT_36388468);
  }
  param_1 = (undefined4 *)0x0;
  local_24 = 0;
  if (0 < DAT_36388494) {
    do {
      iVar3 = 0;
      piVar7 = _Memory_00;
      if (0 < DAT_36388468) {
        do {
          if ((int)param_1 < param_5) {
            puVar13 = DAT_3638849c;
            puVar15 = (undefined4 *)*piVar7;
            for (uVar10 = _Size >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 1;
            }
            for (uVar10 = _Size & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
              puVar15 = (undefined4 *)((int)puVar15 + 1);
            }
            DAT_3638849c = (undefined4 *)((int)DAT_3638849c + _Size);
          }
          else {
            puVar13 = (undefined4 *)*piVar7;
            for (uVar10 = _Size >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar13 = 0;
              puVar13 = puVar13 + 1;
            }
            for (uVar10 = _Size & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined1 *)puVar13 = 0;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
          }
          param_1 = (undefined4 *)((int)param_1 + 1);
          iVar3 = iVar3 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar3 < DAT_36388468);
      }
      local_28 = 0;
      param_2 = (undefined4 *)0x0;
      if (0 < DAT_36388490) {
        do {
          iVar4 = 0;
          iVar3 = DAT_36388474;
          pbVar14 = _Memory;
          piVar7 = _Memory_00;
          if (0 < DAT_36388468) {
            do {
              pbVar6 = (byte *)(*piVar7 + (int)param_2);
              for (iVar11 = DAT_36388470; iVar1 = iVar3, iVar11 != 0; iVar11 = iVar11 + -1) {
                for (; iVar1 != 0; iVar1 = iVar1 + -1) {
                  *pbVar14 = *pbVar6;
                  pbVar14 = pbVar14 + 1;
                  pbVar6 = pbVar6 + 1;
                  iVar3 = DAT_36388474;
                }
              }
              iVar4 = iVar4 + 1;
              piVar7 = piVar7 + 1;
            } while (iVar4 < DAT_36388468);
          }
          piVar7 = (int *)FUN_3620cc80(&DAT_36388478,_Memory,piVar2);
          puVar13 = DAT_3638846c;
          param_4 = *piVar7;
          piVar7 = (int *)DAT_3638846c[5];
          if (DAT_3638846c[6] - (int)piVar7 >> 2 == 0) {
            iVar3 = DAT_3638846c[4];
            if ((iVar3 == 0) || (uVar10 = (int)piVar7 - iVar3 >> 2, uVar10 < 2)) {
              uVar10 = 1;
            }
            if (iVar3 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = (int)piVar7 - iVar3 >> 2;
            }
            iVar3 = iVar3 + uVar10;
            iVar4 = iVar3;
            if (iVar3 < 0) {
              iVar4 = 0;
            }
            puVar8 = (undefined4 *)FUN_361bf99c(iVar4 << 2);
            puVar15 = puVar8;
            for (piVar12 = (int *)puVar13[4]; piVar12 != piVar7; piVar12 = piVar12 + 1) {
              FUN_3620a4f0(puVar15,piVar12);
              puVar15 = puVar15 + 1;
            }
            FUN_3620a4f0(puVar15,&param_4);
            piVar12 = (int *)puVar13[5];
            for (; piVar7 != piVar12; piVar7 = piVar7 + 1) {
              puVar15 = puVar15 + 1;
              FUN_3620a4f0(puVar15,piVar7);
            }
            operator_delete((void *)puVar13[4]);
            iVar4 = puVar13[4];
            puVar13[6] = puVar8 + iVar3;
            if (iVar4 == 0) {
              puVar13[4] = puVar8;
              puVar13[5] = puVar8 + 1;
            }
            else {
              puVar13[4] = puVar8;
              puVar13[5] = puVar8 + (puVar13[5] - iVar4 >> 2) + 1;
            }
          }
          else {
            FUN_3620a490(piVar7,piVar7,piVar7 + 1);
            FUN_3620a4c0((undefined4 *)puVar13[5],1 - ((int)puVar13[5] - (int)piVar7 >> 2),&param_4)
            ;
            piVar12 = (int *)puVar13[5];
            for (; piVar7 != piVar12; piVar7 = piVar7 + 1) {
              *piVar7 = param_4;
            }
            puVar13[5] = puVar13[5] + 4;
          }
          local_28 = local_28 + DAT_36388470;
          param_2 = (undefined4 *)((int)param_2 + iVar9);
        } while (local_28 < DAT_36388490);
      }
      local_24 = local_24 + DAT_36388468;
    } while (local_24 < DAT_36388494);
  }
  FUN_3620c8a0(piVar2);
  if (0 < (int)sVar16) {
    puVar13 = (undefined4 *)((int)_Memory_01 + 4);
    do {
      free((void *)*puVar13);
      puVar13 = puVar13 + 2;
      sVar16 = sVar16 - 1;
    } while (sVar16 != 0);
  }
  free(_Memory_01);
  free(_Memory);
  free(DAT_36388484);
  free(DAT_36388488);
  iVar3 = 0;
  piVar7 = _Memory_00;
  if (0 < DAT_36388468) {
    do {
      free((void *)*piVar7);
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 < DAT_36388468);
  }
  free(_Memory_00);
  return 0;
}

