
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_36209d10(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined1 *_Memory;
  int iVar2;
  int *_Memory_00;
  void *pvVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  int *piVar18;
  undefined4 *puVar19;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_24;
  uint local_20;
  int local_18;
  
  _DAT_36388414 = param_1;
  _DAT_3638841c = param_3;
  _Memory = FUN_36209fb0(param_1);
  uVar1 = param_2[1];
  local_18 = param_2[2];
  if (*param_2 == DAT_36388410) {
    iVar2 = DAT_3638840c * DAT_36388408;
    iVar13 = DAT_36388408 * uVar1;
    iVar6 = DAT_36388404 * iVar2;
    _Memory_00 = malloc(DAT_36388404 * 4);
    iVar17 = 0;
    piVar4 = _Memory_00;
    if (0 < DAT_36388404) {
      do {
        pvVar3 = malloc(DAT_3638840c * iVar13);
        *piVar4 = (int)pvVar3;
        iVar17 = iVar17 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar17 < DAT_36388404);
    }
    piVar4 = malloc(uVar1 * 4);
    iVar17 = DAT_36388404;
    if (0 < local_18) {
      iVar10 = 0;
      do {
        piVar14 = (int *)(param_2[4] + iVar10);
        iVar10 = iVar10 + uVar1 * 4;
        piVar18 = piVar4;
        for (uVar7 = uVar1 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
          *piVar18 = *piVar14;
          piVar14 = piVar14 + 1;
          piVar18 = piVar18 + 1;
        }
        local_2c = 0;
        for (iVar17 = 0; iVar17 != 0; iVar17 = iVar17 + -1) {
          *(char *)piVar18 = (char)*piVar14;
          piVar14 = (int *)((int)piVar14 + 1);
          piVar18 = (int *)((int)piVar18 + 1);
        }
        iVar11 = DAT_3638840c;
        iVar17 = DAT_36388404;
        iVar12 = DAT_36388408;
        local_30 = piVar4;
        local_20 = uVar1;
        if (0 < (int)uVar1) {
          do {
            local_24 = 0;
            puVar8 = _Memory + *local_30 * iVar6;
            local_34 = _Memory_00;
            if (0 < iVar17) {
              do {
                puVar5 = (undefined1 *)(*local_34 + local_2c);
                iVar15 = 0;
                if (0 < iVar11 * iVar12) {
                  do {
                    *puVar5 = *puVar8;
                    puVar5 = puVar5 + 1;
                    puVar8 = puVar8 + 1;
                    iVar15 = iVar15 + 1;
                    iVar11 = DAT_3638840c;
                    iVar17 = DAT_36388404;
                    iVar12 = DAT_36388408;
                  } while (iVar15 < DAT_3638840c * DAT_36388408);
                }
                local_24 = local_24 + 1;
                local_34 = local_34 + 1;
              } while (local_24 < iVar17);
            }
            local_2c = local_2c + iVar2;
            local_20 = local_20 - 1;
            local_30 = local_30 + 1;
          } while (local_20 != 0);
        }
        iVar12 = 0;
        if (0 < iVar17) {
          uVar7 = iVar11 * iVar13;
          piVar14 = _Memory_00;
          do {
            puVar16 = (undefined4 *)*piVar14;
            puVar19 = param_3;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar19 = *puVar16;
              puVar16 = puVar16 + 1;
              puVar19 = puVar19 + 1;
            }
            piVar14 = piVar14 + 1;
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)puVar19 = *(undefined1 *)puVar16;
              puVar16 = (undefined4 *)((int)puVar16 + 1);
              puVar19 = (undefined4 *)((int)puVar19 + 1);
            }
            uVar7 = DAT_3638840c * iVar13;
            param_3 = (undefined4 *)((int)param_3 + uVar7);
            iVar12 = iVar12 + 1;
            iVar17 = DAT_36388404;
          } while (iVar12 < DAT_36388404);
        }
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    iVar2 = 0;
    piVar14 = _Memory_00;
    if (0 < iVar17) {
      do {
        free((void *)*piVar14);
        iVar2 = iVar2 + 1;
        piVar14 = piVar14 + 1;
      } while (iVar2 < DAT_36388404);
    }
    free(_Memory_00);
    free(piVar4);
    free(_Memory);
    return 0;
  }
  return 0xffffffff;
}

