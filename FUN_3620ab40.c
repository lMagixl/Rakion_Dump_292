
int * __fastcall FUN_3620ab40(int *param_1)

{
  byte bVar1;
  int iVar2;
  size_t _Size;
  uint *_Memory;
  int *_Memory_00;
  void *pvVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int *local_18;
  int local_10;
  
  local_18 = (int *)0x0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar2 = param_1[7] / param_1[2];
  param_1[8] = (param_1[6] / param_1[3]) * iVar2;
  _Size = param_1[9] * param_1[6];
  iVar8 = param_1[9] * param_1[3];
  iVar5 = param_1[2] * iVar8;
  *param_1 = iVar5;
  iVar10 = _Size - (int)_Size % iVar8;
  _Memory = malloc(iVar5 * 4);
  _Memory_00 = malloc(param_1[2] << 2);
  iVar5 = 0;
  piVar9 = _Memory_00;
  if (0 < param_1[2]) {
    do {
      pvVar3 = malloc(_Size);
      *piVar9 = (int)pvVar3;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar5 < param_1[2]);
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    iVar5 = 0;
    piVar9 = _Memory_00;
    if (0 < param_1[2]) {
      do {
        puVar11 = (undefined4 *)param_1[10];
        puVar13 = (undefined4 *)*piVar9;
        for (uVar6 = _Size >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar6 = _Size & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        iVar5 = iVar5 + 1;
        param_1[10] = param_1[10] + _Size;
        piVar9 = piVar9 + 1;
      } while (iVar5 < param_1[2]);
    }
    iVar5 = 0;
    if (0 < iVar10) {
      do {
        local_10 = 0;
        piVar9 = _Memory_00;
        puVar12 = _Memory;
        if (0 < param_1[2]) {
          do {
            pbVar4 = (byte *)(iVar5 + *piVar9);
            for (iVar7 = param_1[3]; iVar7 != 0; iVar7 = iVar7 + -1) {
              for (iVar14 = param_1[9]; iVar14 != 0; iVar14 = iVar14 + -1) {
                bVar1 = *pbVar4;
                pbVar4 = pbVar4 + 1;
                *puVar12 = (uint)bVar1;
                puVar12 = puVar12 + 1;
              }
            }
            local_10 = local_10 + 1;
            piVar9 = piVar9 + 1;
          } while (local_10 < param_1[2]);
        }
        local_18 = FUN_3620ad20(param_1,local_18,1,0,(int *)_Memory);
        iVar5 = iVar5 + iVar8;
      } while (iVar5 < iVar10);
    }
  }
  iVar2 = 0;
  piVar9 = _Memory_00;
  if (0 < param_1[2]) {
    do {
      free((void *)*piVar9);
      iVar2 = iVar2 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar2 < param_1[2]);
  }
  free(_Memory_00);
  free(_Memory);
  return local_18;
}

